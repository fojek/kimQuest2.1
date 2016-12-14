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
	tableauEnCours = 0;
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
	images[0] = ":/kimQuest2/champis.PNG";
	images[1] = ":/kimQuest2/kimquest2.bmp";
	images[2] = ":/kimQuest2/skull.PNG";
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
