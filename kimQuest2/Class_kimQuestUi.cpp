﻿#include "Class_kimQuestUi.h"
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
		sortie << t.contenu.toStdString() << endl;
		for (int i = 0; i < NB_CHOIX; ++i)
		{
			sortie << t.lienChoix[i] << " : " << t.texteChoix[i].toStdString() << endl;
		}
	}

	sortie.close();
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