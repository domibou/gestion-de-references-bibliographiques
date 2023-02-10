/********************************************************************************
** Form generated from reading UI file 'JournalInterface.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JOURNALINTERFACE_H
#define UI_JOURNALINTERFACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_JournalInterface
{
public:
    QLabel *auteurLabel;
    QLineEdit *auteur;
    QLabel *titreLabel;
    QLineEdit *titre;
    QLabel *anneeLabel;
    QSpinBox *annee;
    QLineEdit *identifiant;
    QLabel *identifiantLabel;
    QLineEdit *nom;
    QLabel *nomLabel;
    QLabel *volumeLabel;
    QSpinBox *volume;
    QSpinBox *numero;
    QLabel *numeroLabel;
    QSpinBox *page;
    QLabel *pageLabel;
    QFrame *line_2;
    QFrame *line_3;
    QFrame *line_4;
    QFrame *line;
    QFrame *line_5;
    QFrame *line_6;
    QFrame *line_7;
    QPushButton *OK;
    QPushButton *Annuler;

    void setupUi(QDialog *JournalInterface)
    {
        if (JournalInterface->objectName().isEmpty())
            JournalInterface->setObjectName(QString::fromUtf8("JournalInterface"));
        JournalInterface->resize(701, 525);
        auteurLabel = new QLabel(JournalInterface);
        auteurLabel->setObjectName(QString::fromUtf8("auteurLabel"));
        auteurLabel->setGeometry(QRect(110, 60, 58, 16));
        auteur = new QLineEdit(JournalInterface);
        auteur->setObjectName(QString::fromUtf8("auteur"));
        auteur->setGeometry(QRect(260, 50, 291, 28));
        titreLabel = new QLabel(JournalInterface);
        titreLabel->setObjectName(QString::fromUtf8("titreLabel"));
        titreLabel->setGeometry(QRect(110, 110, 58, 16));
        titre = new QLineEdit(JournalInterface);
        titre->setObjectName(QString::fromUtf8("titre"));
        titre->setGeometry(QRect(260, 100, 291, 28));
        anneeLabel = new QLabel(JournalInterface);
        anneeLabel->setObjectName(QString::fromUtf8("anneeLabel"));
        anneeLabel->setGeometry(QRect(110, 160, 58, 16));
        annee = new QSpinBox(JournalInterface);
        annee->setObjectName(QString::fromUtf8("annee"));
        annee->setGeometry(QRect(260, 150, 101, 26));
        identifiant = new QLineEdit(JournalInterface);
        identifiant->setObjectName(QString::fromUtf8("identifiant"));
        identifiant->setGeometry(QRect(260, 200, 291, 28));
        identifiantLabel = new QLabel(JournalInterface);
        identifiantLabel->setObjectName(QString::fromUtf8("identifiantLabel"));
        identifiantLabel->setGeometry(QRect(110, 210, 131, 16));
        nom = new QLineEdit(JournalInterface);
        nom->setObjectName(QString::fromUtf8("nom"));
        nom->setGeometry(QRect(260, 250, 291, 28));
        nomLabel = new QLabel(JournalInterface);
        nomLabel->setObjectName(QString::fromUtf8("nomLabel"));
        nomLabel->setGeometry(QRect(110, 260, 58, 16));
        volumeLabel = new QLabel(JournalInterface);
        volumeLabel->setObjectName(QString::fromUtf8("volumeLabel"));
        volumeLabel->setGeometry(QRect(110, 310, 58, 16));
        volume = new QSpinBox(JournalInterface);
        volume->setObjectName(QString::fromUtf8("volume"));
        volume->setGeometry(QRect(260, 300, 101, 26));
        numero = new QSpinBox(JournalInterface);
        numero->setObjectName(QString::fromUtf8("numero"));
        numero->setGeometry(QRect(260, 350, 101, 26));
        numeroLabel = new QLabel(JournalInterface);
        numeroLabel->setObjectName(QString::fromUtf8("numeroLabel"));
        numeroLabel->setGeometry(QRect(110, 360, 58, 16));
        page = new QSpinBox(JournalInterface);
        page->setObjectName(QString::fromUtf8("page"));
        page->setGeometry(QRect(260, 400, 101, 26));
        pageLabel = new QLabel(JournalInterface);
        pageLabel->setObjectName(QString::fromUtf8("pageLabel"));
        pageLabel->setGeometry(QRect(110, 410, 58, 16));
        line_2 = new QFrame(JournalInterface);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(110, 180, 471, 16));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(JournalInterface);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(110, 130, 471, 16));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        line_4 = new QFrame(JournalInterface);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(110, 80, 471, 16));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        line = new QFrame(JournalInterface);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(110, 230, 471, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_5 = new QFrame(JournalInterface);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setGeometry(QRect(110, 280, 471, 16));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);
        line_6 = new QFrame(JournalInterface);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        line_6->setGeometry(QRect(110, 330, 471, 16));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);
        line_7 = new QFrame(JournalInterface);
        line_7->setObjectName(QString::fromUtf8("line_7"));
        line_7->setGeometry(QRect(110, 380, 471, 16));
        line_7->setFrameShape(QFrame::HLine);
        line_7->setFrameShadow(QFrame::Sunken);
        OK = new QPushButton(JournalInterface);
        OK->setObjectName(QString::fromUtf8("OK"));
        OK->setGeometry(QRect(580, 470, 90, 28));
        Annuler = new QPushButton(JournalInterface);
        Annuler->setObjectName(QString::fromUtf8("Annuler"));
        Annuler->setGeometry(QRect(480, 470, 90, 28));

        retranslateUi(JournalInterface);
        QObject::connect(Annuler, SIGNAL(clicked()), JournalInterface, SLOT(close()));
        QObject::connect(OK, SIGNAL(clicked()), JournalInterface, SLOT(infoValide()));

        QMetaObject::connectSlotsByName(JournalInterface);
    } // setupUi

    void retranslateUi(QDialog *JournalInterface)
    {
        JournalInterface->setWindowTitle(QApplication::translate("JournalInterface", "JournalInterface", nullptr));
        auteurLabel->setText(QApplication::translate("JournalInterface", "Auteur", nullptr));
        titreLabel->setText(QApplication::translate("JournalInterface", "Titre", nullptr));
        anneeLabel->setText(QApplication::translate("JournalInterface", "Ann\303\251e", nullptr));
        identifiant->setText(QString());
        identifiantLabel->setText(QApplication::translate("JournalInterface", "Identifiant", nullptr));
        nomLabel->setText(QApplication::translate("JournalInterface", "Nom", nullptr));
        volumeLabel->setText(QApplication::translate("JournalInterface", "Volume", nullptr));
        numeroLabel->setText(QApplication::translate("JournalInterface", "Num\303\251ro", nullptr));
        pageLabel->setText(QApplication::translate("JournalInterface", "Page", nullptr));
        OK->setText(QApplication::translate("JournalInterface", "OK", nullptr));
        Annuler->setText(QApplication::translate("JournalInterface", "Annuler", nullptr));
    } // retranslateUi

};

namespace Ui {
    class JournalInterface: public Ui_JournalInterface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JOURNALINTERFACE_H
