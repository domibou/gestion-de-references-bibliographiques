/********************************************************************************
** Form generated from reading UI file 'OuvrageInterface.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OUVRAGEINTERFACE_H
#define UI_OUVRAGEINTERFACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_OuvrageInterface
{
public:
    QFrame *line_7;
    QPushButton *OK;
    QPushButton *Annuler;
    QSpinBox *page;
    QLabel *pageLabel;
    QFrame *line;
    QLineEdit *auteur;
    QPushButton *OK_2;
    QLabel *auteurLabel;
    QLabel *anneeLabel;
    QLineEdit *titre;
    QLabel *identifiantLabel;
    QPushButton *Annuler_2;
    QLabel *titreLabel;
    QSpinBox *annee;
    QLineEdit *editeur;
    QFrame *line_5;
    QLabel *editeurLabel;
    QFrame *line_2;
    QFrame *line_3;
    QFrame *line_4;
    QLineEdit *identifiant;
    QLabel *villeLabel;
    QLineEdit *ville;

    void setupUi(QDialog *OuvrageInterface)
    {
        if (OuvrageInterface->objectName().isEmpty())
            OuvrageInterface->setObjectName(QString::fromUtf8("OuvrageInterface"));
        OuvrageInterface->resize(701, 525);
        line_7 = new QFrame(OuvrageInterface);
        line_7->setObjectName(QString::fromUtf8("line_7"));
        line_7->setGeometry(QRect(440, 580, 471, 16));
        line_7->setFrameShape(QFrame::HLine);
        line_7->setFrameShadow(QFrame::Sunken);
        OK = new QPushButton(OuvrageInterface);
        OK->setObjectName(QString::fromUtf8("OK"));
        OK->setGeometry(QRect(910, 670, 90, 28));
        Annuler = new QPushButton(OuvrageInterface);
        Annuler->setObjectName(QString::fromUtf8("Annuler"));
        Annuler->setGeometry(QRect(810, 670, 90, 28));
        page = new QSpinBox(OuvrageInterface);
        page->setObjectName(QString::fromUtf8("page"));
        page->setGeometry(QRect(590, 600, 101, 26));
        pageLabel = new QLabel(OuvrageInterface);
        pageLabel->setObjectName(QString::fromUtf8("pageLabel"));
        pageLabel->setGeometry(QRect(440, 610, 58, 16));
        line = new QFrame(OuvrageInterface);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(110, 230, 471, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        auteur = new QLineEdit(OuvrageInterface);
        auteur->setObjectName(QString::fromUtf8("auteur"));
        auteur->setGeometry(QRect(260, 50, 291, 28));
        OK_2 = new QPushButton(OuvrageInterface);
        OK_2->setObjectName(QString::fromUtf8("OK_2"));
        OK_2->setGeometry(QRect(580, 470, 90, 28));
        auteurLabel = new QLabel(OuvrageInterface);
        auteurLabel->setObjectName(QString::fromUtf8("auteurLabel"));
        auteurLabel->setGeometry(QRect(110, 60, 58, 16));
        anneeLabel = new QLabel(OuvrageInterface);
        anneeLabel->setObjectName(QString::fromUtf8("anneeLabel"));
        anneeLabel->setGeometry(QRect(110, 160, 58, 16));
        titre = new QLineEdit(OuvrageInterface);
        titre->setObjectName(QString::fromUtf8("titre"));
        titre->setGeometry(QRect(260, 100, 291, 28));
        identifiantLabel = new QLabel(OuvrageInterface);
        identifiantLabel->setObjectName(QString::fromUtf8("identifiantLabel"));
        identifiantLabel->setGeometry(QRect(110, 210, 131, 16));
        Annuler_2 = new QPushButton(OuvrageInterface);
        Annuler_2->setObjectName(QString::fromUtf8("Annuler_2"));
        Annuler_2->setGeometry(QRect(480, 470, 90, 28));
        titreLabel = new QLabel(OuvrageInterface);
        titreLabel->setObjectName(QString::fromUtf8("titreLabel"));
        titreLabel->setGeometry(QRect(110, 110, 58, 16));
        annee = new QSpinBox(OuvrageInterface);
        annee->setObjectName(QString::fromUtf8("annee"));
        annee->setGeometry(QRect(260, 150, 101, 26));
        editeur = new QLineEdit(OuvrageInterface);
        editeur->setObjectName(QString::fromUtf8("editeur"));
        editeur->setGeometry(QRect(260, 250, 291, 28));
        line_5 = new QFrame(OuvrageInterface);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setGeometry(QRect(110, 280, 471, 16));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);
        editeurLabel = new QLabel(OuvrageInterface);
        editeurLabel->setObjectName(QString::fromUtf8("editeurLabel"));
        editeurLabel->setGeometry(QRect(110, 260, 58, 16));
        line_2 = new QFrame(OuvrageInterface);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(110, 180, 471, 16));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(OuvrageInterface);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(110, 130, 471, 16));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        line_4 = new QFrame(OuvrageInterface);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(110, 80, 471, 16));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        identifiant = new QLineEdit(OuvrageInterface);
        identifiant->setObjectName(QString::fromUtf8("identifiant"));
        identifiant->setGeometry(QRect(260, 200, 291, 28));
        villeLabel = new QLabel(OuvrageInterface);
        villeLabel->setObjectName(QString::fromUtf8("villeLabel"));
        villeLabel->setGeometry(QRect(110, 310, 58, 16));
        ville = new QLineEdit(OuvrageInterface);
        ville->setObjectName(QString::fromUtf8("ville"));
        ville->setGeometry(QRect(260, 300, 291, 28));

        retranslateUi(OuvrageInterface);
        QObject::connect(Annuler_2, SIGNAL(clicked()), OuvrageInterface, SLOT(close()));
        QObject::connect(OK_2, SIGNAL(clicked()), OuvrageInterface, SLOT(infoValide()));

        QMetaObject::connectSlotsByName(OuvrageInterface);
    } // setupUi

    void retranslateUi(QDialog *OuvrageInterface)
    {
        OuvrageInterface->setWindowTitle(QApplication::translate("OuvrageInterface", "OuvrageInterface", nullptr));
        OK->setText(QApplication::translate("OuvrageInterface", "OK", nullptr));
        Annuler->setText(QApplication::translate("OuvrageInterface", "Annuler", nullptr));
        pageLabel->setText(QApplication::translate("OuvrageInterface", "Page", nullptr));
        OK_2->setText(QApplication::translate("OuvrageInterface", "OK", nullptr));
        auteurLabel->setText(QApplication::translate("OuvrageInterface", "Auteur", nullptr));
        anneeLabel->setText(QApplication::translate("OuvrageInterface", "Ann\303\251e", nullptr));
        identifiantLabel->setText(QApplication::translate("OuvrageInterface", "Identifiant", nullptr));
        Annuler_2->setText(QApplication::translate("OuvrageInterface", "Annuler", nullptr));
        titreLabel->setText(QApplication::translate("OuvrageInterface", "Titre", nullptr));
        editeurLabel->setText(QApplication::translate("OuvrageInterface", "\303\211diteur", nullptr));
        identifiant->setText(QString());
        villeLabel->setText(QApplication::translate("OuvrageInterface", "Ville", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OuvrageInterface: public Ui_OuvrageInterface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OUVRAGEINTERFACE_H
