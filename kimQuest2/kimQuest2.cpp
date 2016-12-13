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
	kQui.afficherTableau(0);

	titre = ui.titre;
	contenu = ui.contenu;

	boutons[0] = ui.choix1;
	boutons[1] = ui.choix2;
	boutons[2] = ui.choix3;
	boutons[3] = ui.choix4;

	refresh();
}

void kimQuest2::refresh()
{
	titre->setText(kQui.setTitre());
	contenu->setText(kQui.setContenu());

	for (int i = 0; i < NB_CHOIX; ++i)
	{
		boutons[i]->setText(kQui.setPushButtons(i));
		if (boutons[i]->text() == QString::fromStdString("0"))
			boutons[i]->hide();
		else
			boutons[i]->show();
	}
}

void kimQuest2::on_choix1_clicked()
{
	kQui.log(std::to_string(kQui.TableauActuel()), std::to_string(kQui.getLien(0)));
	kQui.afficherTableau(kQui.getLien(0) - 1);
	refresh();
}

void kimQuest2::on_choix2_clicked()
{
	kQui.log(std::to_string(kQui.TableauActuel()), std::to_string(kQui.getLien(1)));
	kQui.afficherTableau(kQui.getLien(0) - 1);
	refresh();
}

void kimQuest2::on_choix3_clicked()
{
	kQui.log(std::to_string(kQui.TableauActuel()), std::to_string(kQui.getLien(2)));
	kQui.afficherTableau(kQui.getLien(0) - 1);
	refresh();
}

void kimQuest2::on_choix4_clicked()
{
	kQui.log(std::to_string(kQui.TableauActuel()), std::to_string(kQui.getLien(3)));
	kQui.afficherTableau(kQui.getLien(0) - 1);
	refresh();
}


//QMessageBox::critical(this, "Erreur", kQui.setPushButtons(0));

