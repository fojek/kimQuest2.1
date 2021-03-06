#pragma once

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include <map>

using namespace std;

const int NB_TABLEAUX = 100;
const int NB_LIENS = 4;
const int NB_PARAG = 4;
const int NB_CHOIX = 4;

struct TABLEAU 
{
	int lienChoix[NB_LIENS];
	int image;
	QString titre;
	QString contenu;
	QString texteChoix[NB_CHOIX];
};

struct BACKPACK
{
	bool antoine = false;
	bool baguette = false;
	bool vuVoldemort = false;
};

class Class_kimQuestUi
{
	QString titre;
	QString contenu;
	QString choix[4];
	int vie;
	int tableauEnCours;
	vector <TABLEAU> tableaux;
	map <int, QString> images;
	BACKPACK backpack;

public:
	Class_kimQuestUi();
	~Class_kimQuestUi();
	QString setPushButtons(int);
	QString setTitre();
	QString setContenu();
	void afficherTableau(int);
	void initTableaux();
	void chargerImages();
	QString texteImage();
	int getLien(int);
	void log(string, string);
	int TableauActuel() { return tableauEnCours; }
	bool checkAntoine() { return backpack.antoine; }
	bool checkBaguette() { return backpack.baguette; }
	void checkEvent();
};

