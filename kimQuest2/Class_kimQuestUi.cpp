#include "Class_kimQuestUi.h"
#include "kimQuest2.h"
#include <iostream>
#include <qdebug.h>
#include <fstream>
#include <QString>

using namespace std;

const int DEPART = 0;

Class_kimQuestUi::Class_kimQuestUi()
{
	vie = 100;
	tableauEnCours = 35;
	chargerImages();
	qInfo() << "Eh oui.";
}


Class_kimQuestUi::~Class_kimQuestUi()
{
}

QString Class_kimQuestUi::setPushButtons(int i)
{
	qInfo() << "Choix "<< i << ": " << choix[i];
	return choix[i];
}

QString Class_kimQuestUi::setTitre()
{
	return titre;
}

QString Class_kimQuestUi::setContenu()
{
	return contenu;
}


void Class_kimQuestUi::afficherTableau(int num_t)
{
	// Tableau en cours et prochain tableau
	log(std::to_string(tableauEnCours), std::to_string(num_t));

	if (num_t == 98)
		num_t = 0;

	tableauEnCours = num_t;
	titre = tableaux[tableauEnCours].titre; 
	contenu = tableaux[tableauEnCours].contenu;

	for (int i = 0; i < NB_CHOIX; ++i)
	{
		choix[i] = tableaux[tableauEnCours].texteChoix[i];
	}
}

void Class_kimQuestUi::initTableaux()
{
	ifstream fTableaux;
	ofstream sortie;

	// Ouverture du fichier des tableaux
	fTableaux.open("tableaux.kq2");
	sortie.open("log.txt");

	if (!fTableaux.is_open())
		qInfo() << "Erreur : Impossible de charger les Tableaux." << endl;
	else
		qInfo() << "Fichier ouvert!" << endl;

	// Lecture du fichier
	do
	{
		TABLEAU t;
		string buffer;

		// Lecture des tableaux
		// Garbage, ligne de séparation, on ne fait rien avec
		getline(fTableaux, buffer);

		// Titre
		getline(fTableaux, buffer);
		t.titre = QString::fromStdString(buffer);

		// Image d'ambiance
		getline(fTableaux, buffer);
		sortie << buffer << " ";
		t.image = stoi(buffer);

		// Contenu
		getline(fTableaux, buffer);
		t.contenu = QString::fromStdString(buffer);

		// Choix
		for (int i = 0; i < NB_CHOIX; ++i)
		{
			// Texte du lien
			getline(fTableaux, buffer);
			t.texteChoix[i] = QString::fromStdString(buffer);

			// Numéro du lien
			getline(fTableaux, buffer);
			t.lienChoix[i] = atoi(buffer.c_str());
		}

		// Tableau complet, on l'envoie
		tableaux.push_back(t);
	} while (!fTableaux.eof());

	// Info de debug, affichage des tableau tels qu'ils ont été lus
	for(TABLEAU t : tableaux)
	{
		sortie << "++++++++++++++++++++++" << endl;
		sortie << t.titre.toStdString() << endl;
		sortie << t.image << endl;
		sortie << t.contenu.toStdString() << endl;
		for (int i = 0; i < NB_CHOIX; ++i)
		{
			sortie << t.lienChoix[i] << " : " << t.texteChoix[i].toStdString() << endl;
		}
	}

	sortie.close();
}

void Class_kimQuestUi::chargerImages()
{
	images[0] = ":/kimQuest2/kimquest2.bmp";
	images[1] = ":/kimQuest2/foret.png";
	images[2] = ":/kimQuest2/skull.PNG";
	images[3] = ":/kimQuest2/leprechaun.png";
	images[4] = ":/kimQuest2/champis.PNG";
	images[5] = ":/kimQuest2/maison.png";
	images[6] = ":/kimQuest2/falaise.png";
	images[7] = ":/kimQuest2/riviere.png";
	images[8] = ":/kimQuest2/antoine.png";
	images[9] = ":/kimQuest2/grotte.png";
	images[10] = ":/kimQuest2/anneau.png";

}

QString Class_kimQuestUi::texteImage()
{
	return images.at(tableaux[tableauEnCours].image);
}

int Class_kimQuestUi::getLien(int lien)
{
	return tableaux[tableauEnCours].lienChoix[lien];
}

void Class_kimQuestUi::log(string t, string s)
{
	fstream f;
	f.open("log.txt", ios::out | ios::app);

	f << t << " : " << s << endl;

	f.close();
}

void Class_kimQuestUi::checkEvent()
{
	switch (tableauEnCours)
	{
	case 0:
		backpack.antoine = false;
		backpack.baguette = false;
		backpack.vuVoldemort = false;
		break;
	case 20:
		// Antoine
		backpack.antoine = true;
		tableaux[50].lienChoix[0] = 53;
		tableaux[19].contenu = QString::fromLatin1("Large d'une dizaine de mètres, la rivière était infranchissable à la nage. Une pierre bleue se trouvait sur la droite, à côté d'une barque.");
		tableaux[19].lienChoix[1] = 0;
		tableaux[19].texteChoix[1] = QString::fromStdString("0");
		break;
	case 40:
		// Baguette
		backpack.baguette = true;
		tableaux[46].lienChoix[0] = 49;
		tableaux[46].texteChoix[0] = QString::fromLatin1("Kim Pendragon saisit fermement sa baguette et fit face.");
		tableaux[46].lienChoix[1] = 43;
		break;
	case 46:
		// Vu voldemort
		backpack.vuVoldemort = true;
		tableaux[42].lienChoix[0] = 47;
		tableaux[42].texteChoix[0] = QString::fromLatin1("«Haut les coeurs! on y retourne ...», dit Vilepan.");
		tableaux[38].lienChoix[0] = 47;
		tableaux[38].texteChoix[0] = QString::fromLatin1("«Haut les coeurs! on y retourne ...», dit Vilepan.");
		break;
	default:
		// Tableau sans événement
		break;
	}
}
