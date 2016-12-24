#include "kimQuest2.h"
#include <iostream>
#include <QMessageBox>

using namespace std;

kimQuest2::kimQuest2(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	// Les tableaux sont chargés en mémoire
	kQui.initTableaux();

	// Le tableau actuel est affiché
	kQui.afficherTableau(35);

	// Assignation des pointeurs d'objets
	titre = ui.titre;
	contenu = ui.contenu;
	imageLabel = ui.imageLabel;

	imageLabel->setFrameStyle(QFrame::StyledPanel);
	imageLabel->setPixmap(QPixmap(":/kimQuest2/champis.PNG"));

	boutons[0] = ui.choix1;
	boutons[1] = ui.choix2;
	boutons[2] = ui.choix3;
	boutons[3] = ui.choix4;

	ui.antoineCB->hide();
	ui.baguetteCB->hide();

	refresh();
}

void kimQuest2::refresh()
{
	titre->setText(kQui.setTitre());
	contenu->setText(kQui.setContenu());

	imageLabel->setPixmap(QPixmap(kQui.texteImage()));

	for (int i = 0; i < NB_CHOIX; ++i)
	{
		boutons[i]->setText(kQui.setPushButtons(i));
		if (boutons[i]->text() == QString::fromStdString("0"))
			boutons[i]->hide();
		else
			boutons[i]->show();
	}

	kQui.checkEvent();

	if(kQui.checkAntoine()) ui.antoineCB->show();
	if(kQui.checkBaguette()) ui.baguetteCB->show();
}

void kimQuest2::on_choix1_clicked()
{
	kQui.afficherTableau(kQui.getLien(0) - 1);
	refresh();
}

void kimQuest2::on_choix2_clicked()
{
	kQui.afficherTableau(kQui.getLien(1) - 1);
	refresh();
}

void kimQuest2::on_choix3_clicked()
{
	kQui.afficherTableau(kQui.getLien(2) - 1);
	refresh();
}

void kimQuest2::on_choix4_clicked()
{
	kQui.afficherTableau(kQui.getLien(3) - 1);
	refresh();
}


//QMessageBox::critical(this, "Erreur", kQui.setPushButtons(0));