#ifndef CLASS_KIMUI_H
#define CLASS_KIMUI_H

#include <QtWidgets/QMainWindow>
#include "ui_kimQuest2.h"
#include "Class_kimQuestUi.h"

class kimQuest2 : public QMainWindow
{
    Q_OBJECT

public:
    kimQuest2(QWidget *parent = Q_NULLPTR);

private:
    Ui::kimQuest2Class ui;
	Class_kimQuestUi kQui;
	QPushButton * boutons[4];
	QLabel * contenu;
	QLabel * titre;
	QLabel * imageLabel;
	QString dude;

private slots:
	void on_choix1_clicked();
	void on_choix2_clicked();
	void on_choix3_clicked();
	void on_choix4_clicked();
	void refresh();
};

#endif