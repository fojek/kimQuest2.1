/********************************************************************************
** Form generated from reading UI file 'kimQuest2.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KIMQUEST2_H
#define UI_KIMQUEST2_H

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

QT_BEGIN_NAMESPACE

class Ui_kimQuest2Class
{
public:
    QWidget *centralWidget;
    QLabel *contenu;
    QLabel *imageLabel;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QPushButton *choix1;
    QPushButton *choix2;
    QPushButton *choix3;
    QPushButton *choix4;
    QLabel *titre;
    QCheckBox *objectif1;
    QCheckBox *objectif2;
    QCheckBox *objectif3;
    QCheckBox *objectif4;

    void setupUi(QMainWindow *kimQuest2Class)
    {
        if (kimQuest2Class->objectName().isEmpty())
            kimQuest2Class->setObjectName(QStringLiteral("kimQuest2Class"));
        kimQuest2Class->resize(833, 395);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(85, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(127, 0, 0, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(106, 0, 0, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(42, 0, 0, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(56, 0, 0, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QBrush brush6(QColor(0, 0, 0, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        QBrush brush7(QColor(255, 255, 220, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
        kimQuest2Class->setPalette(palette);
        centralWidget = new QWidget(kimQuest2Class);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        contenu = new QLabel(centralWidget);
        contenu->setObjectName(QStringLiteral("contenu"));
        contenu->setGeometry(QRect(10, 40, 371, 221));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        QBrush brush8(QColor(170, 85, 0, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush8);
        QBrush brush9(QColor(255, 128, 0, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush9);
        QBrush brush10(QColor(212, 106, 0, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush10);
        QBrush brush11(QColor(85, 42, 0, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush11);
        QBrush brush12(QColor(113, 56, 0, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush12);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush8);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        QBrush brush13(QColor(212, 170, 127, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush13);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush9);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush10);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush11);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush12);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush13);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush11);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush11);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush12);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush11);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush11);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
        contenu->setPalette(palette1);
        QFont font;
        font.setFamily(QStringLiteral("Times New Roman"));
        font.setPointSize(12);
        contenu->setFont(font);
        contenu->setAutoFillBackground(true);
        contenu->setTextFormat(Qt::RichText);
        contenu->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        contenu->setWordWrap(true);
        imageLabel = new QLabel(centralWidget);
        imageLabel->setObjectName(QStringLiteral("imageLabel"));
        imageLabel->setGeometry(QRect(390, 10, 431, 371));
        imageLabel->setStyleSheet(QStringLiteral(""));
        imageLabel->setTextFormat(Qt::RichText);
        imageLabel->setPixmap(QPixmap(QString::fromUtf8(":/kimQuest2/kimquest2.bmp")));
        imageLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        imageLabel->setWordWrap(true);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(870, 110, 21, 21));
        label_3->setTextFormat(Qt::RichText);
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_3->setWordWrap(true);
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(900, 110, 21, 21));
        label_4->setTextFormat(Qt::RichText);
        label_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_4->setWordWrap(true);
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(930, 110, 21, 21));
        label_5->setTextFormat(Qt::RichText);
        label_5->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_5->setWordWrap(true);
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(960, 110, 21, 21));
        label_6->setTextFormat(Qt::RichText);
        label_6->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_6->setWordWrap(true);
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(990, 110, 21, 21));
        label_7->setTextFormat(Qt::RichText);
        label_7->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_7->setWordWrap(true);
        choix1 = new QPushButton(centralWidget);
        choix1->setObjectName(QStringLiteral("choix1"));
        choix1->setGeometry(QRect(10, 270, 371, 23));
        choix1->setStyleSheet(QStringLiteral("background-color: rgb(177, 177, 177);"));
        choix2 = new QPushButton(centralWidget);
        choix2->setObjectName(QStringLiteral("choix2"));
        choix2->setGeometry(QRect(10, 300, 371, 23));
        choix2->setStyleSheet(QStringLiteral("background-color: rgb(177, 177, 177);"));
        choix3 = new QPushButton(centralWidget);
        choix3->setObjectName(QStringLiteral("choix3"));
        choix3->setGeometry(QRect(10, 330, 371, 23));
        choix3->setStyleSheet(QStringLiteral("background-color: rgb(177, 177, 177);"));
        choix4 = new QPushButton(centralWidget);
        choix4->setObjectName(QStringLiteral("choix4"));
        choix4->setGeometry(QRect(10, 360, 371, 23));
        choix4->setStyleSheet(QStringLiteral("background-color: rgb(177, 177, 177);"));
        titre = new QLabel(centralWidget);
        titre->setObjectName(QStringLiteral("titre"));
        titre->setGeometry(QRect(10, 10, 371, 31));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette2.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette2.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette2.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush);
        palette2.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette2.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
        titre->setPalette(palette2);
        titre->setAutoFillBackground(true);
        titre->setTextFormat(Qt::RichText);
        titre->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        titre->setWordWrap(true);
        objectif1 = new QCheckBox(centralWidget);
        objectif1->setObjectName(QStringLiteral("objectif1"));
        objectif1->setGeometry(QRect(900, 160, 131, 20));
        objectif1->setStyleSheet(QLatin1String("selection-background-color: rgb(0, 0, 0);\n"
"selection-color: rgb(0, 255, 0);\n"
"color: rgb(255, 255, 255);\n"
"gridline-color: rgb(0, 255, 127);"));
        objectif2 = new QCheckBox(centralWidget);
        objectif2->setObjectName(QStringLiteral("objectif2"));
        objectif2->setGeometry(QRect(900, 180, 131, 20));
        objectif3 = new QCheckBox(centralWidget);
        objectif3->setObjectName(QStringLiteral("objectif3"));
        objectif3->setGeometry(QRect(900, 200, 131, 20));
        objectif4 = new QCheckBox(centralWidget);
        objectif4->setObjectName(QStringLiteral("objectif4"));
        objectif4->setGeometry(QRect(900, 220, 131, 20));
        kimQuest2Class->setCentralWidget(centralWidget);

        retranslateUi(kimQuest2Class);

        QMetaObject::connectSlotsByName(kimQuest2Class);
    } // setupUi

    void retranslateUi(QMainWindow *kimQuest2Class)
    {
        kimQuest2Class->setWindowTitle(QApplication::translate("kimQuest2Class", "kimQuest2", 0));
        contenu->setText(QApplication::translate("kimQuest2Class", "Contenu du chap\303\256tre", 0));
        imageLabel->setText(QString());
        label_3->setText(QApplication::translate("kimQuest2Class", "<html><head/><body><p><img src=\":/kimQuest2/heart.bmp\"/></p></body></html>", 0));
        label_4->setText(QApplication::translate("kimQuest2Class", "<html><head/><body><p><img src=\":/kimQuest2/heart.bmp\"/></p></body></html>", 0));
        label_5->setText(QApplication::translate("kimQuest2Class", "<html><head/><body><p><img src=\":/kimQuest2/heart.bmp\"/></p></body></html>", 0));
        label_6->setText(QApplication::translate("kimQuest2Class", "<html><head/><body><p><img src=\":/kimQuest2/heart.bmp\"/></p></body></html>", 0));
        label_7->setText(QApplication::translate("kimQuest2Class", "<html><head/><body><p><img src=\":/kimQuest2/heart_empty.bmp\"/></p></body></html>", 0));
        choix1->setText(QApplication::translate("kimQuest2Class", "PushButton", 0));
        choix2->setText(QApplication::translate("kimQuest2Class", "PushButton", 0));
        choix3->setText(QApplication::translate("kimQuest2Class", "PushButton", 0));
        choix4->setText(QApplication::translate("kimQuest2Class", "PushButton", 0));
        titre->setText(QApplication::translate("kimQuest2Class", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">TITRE DU CHAPITRE</span></p></body></html>", 0));
        objectif1->setText(QApplication::translate("kimQuest2Class", "Objectif1", 0));
        objectif2->setText(QApplication::translate("kimQuest2Class", "Objectif2", 0));
        objectif3->setText(QApplication::translate("kimQuest2Class", "Objectif3", 0));
        objectif4->setText(QApplication::translate("kimQuest2Class", "Objectif4", 0));
    } // retranslateUi

};

namespace Ui {
    class kimQuest2Class: public Ui_kimQuest2Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KIMQUEST2_H
