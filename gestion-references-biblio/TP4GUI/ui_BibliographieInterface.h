/********************************************************************************
** Form generated from reading UI file 'BibliographieInterface.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BIBLIOGRAPHIEINTERFACE_H
#define UI_BIBLIOGRAPHIEINTERFACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BibliographieInterface
{
public:
    QAction *actionJournal;
    QAction *actionOuvrage;
    QAction *actionSupprimer_une_r_f_rence;
    QAction *actionQuitter;
    QWidget *centralwidget;
    QTextEdit *affichage;
    QMenuBar *menubar;
    QMenu *menuOp_rations;
    QMenu *menuAjouter_une_r_f_rence;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *BibliographieInterface)
    {
        if (BibliographieInterface->objectName().isEmpty())
            BibliographieInterface->setObjectName(QString::fromUtf8("BibliographieInterface"));
        BibliographieInterface->resize(800, 600);
        actionJournal = new QAction(BibliographieInterface);
        actionJournal->setObjectName(QString::fromUtf8("actionJournal"));
        actionOuvrage = new QAction(BibliographieInterface);
        actionOuvrage->setObjectName(QString::fromUtf8("actionOuvrage"));
        actionSupprimer_une_r_f_rence = new QAction(BibliographieInterface);
        actionSupprimer_une_r_f_rence->setObjectName(QString::fromUtf8("actionSupprimer_une_r_f_rence"));
        actionQuitter = new QAction(BibliographieInterface);
        actionQuitter->setObjectName(QString::fromUtf8("actionQuitter"));
        centralwidget = new QWidget(BibliographieInterface);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        affichage = new QTextEdit(centralwidget);
        affichage->setObjectName(QString::fromUtf8("affichage"));
        affichage->setGeometry(QRect(80, 60, 631, 451));
        BibliographieInterface->setCentralWidget(centralwidget);
        menubar = new QMenuBar(BibliographieInterface);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        menuOp_rations = new QMenu(menubar);
        menuOp_rations->setObjectName(QString::fromUtf8("menuOp_rations"));
        menuAjouter_une_r_f_rence = new QMenu(menuOp_rations);
        menuAjouter_une_r_f_rence->setObjectName(QString::fromUtf8("menuAjouter_une_r_f_rence"));
        BibliographieInterface->setMenuBar(menubar);
        statusbar = new QStatusBar(BibliographieInterface);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        BibliographieInterface->setStatusBar(statusbar);

        menubar->addAction(menuOp_rations->menuAction());
        menuOp_rations->addAction(menuAjouter_une_r_f_rence->menuAction());
        menuOp_rations->addAction(actionSupprimer_une_r_f_rence);
        menuOp_rations->addAction(actionQuitter);
        menuAjouter_une_r_f_rence->addAction(actionJournal);
        menuAjouter_une_r_f_rence->addAction(actionOuvrage);

        retranslateUi(BibliographieInterface);
        QObject::connect(actionQuitter, SIGNAL(triggered()), BibliographieInterface, SLOT(close()));
        QObject::connect(actionJournal, SIGNAL(triggered()), BibliographieInterface, SLOT(dialogAjouterJournal()));
        QObject::connect(affichage, SIGNAL(textChanged()), BibliographieInterface, SLOT(affichage()));
        QObject::connect(actionOuvrage, SIGNAL(triggered()), BibliographieInterface, SLOT(dialogAjouterOuvrage()));
        QObject::connect(actionSupprimer_une_r_f_rence, SIGNAL(triggered()), BibliographieInterface, SLOT(dialogSupprimerReference()));

        QMetaObject::connectSlotsByName(BibliographieInterface);
    } // setupUi

    void retranslateUi(QMainWindow *BibliographieInterface)
    {
        BibliographieInterface->setWindowTitle(QApplication::translate("BibliographieInterface", "BibliographieInterface", nullptr));
        actionJournal->setText(QApplication::translate("BibliographieInterface", "Journal", nullptr));
        actionOuvrage->setText(QApplication::translate("BibliographieInterface", "Ouvrage", nullptr));
        actionSupprimer_une_r_f_rence->setText(QApplication::translate("BibliographieInterface", "Supprimer une r\303\251f\303\251rence", nullptr));
        actionQuitter->setText(QApplication::translate("BibliographieInterface", "Quitter", nullptr));
        menuOp_rations->setTitle(QApplication::translate("BibliographieInterface", "Op\303\251rations", nullptr));
        menuAjouter_une_r_f_rence->setTitle(QApplication::translate("BibliographieInterface", "Ajouter une r\303\251f\303\251rence", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BibliographieInterface: public Ui_BibliographieInterface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BIBLIOGRAPHIEINTERFACE_H
