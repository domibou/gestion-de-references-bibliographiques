/********************************************************************************
** Form generated from reading UI file 'FenetrePrincipale.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FENETREPRINCIPALE_H
#define UI_FENETREPRINCIPALE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FenetrePrincipale
{
public:
    QAction *actionSupprimer_une_r_f_rence;
    QAction *actionQuitter;
    QAction *actionJournal;
    QAction *actionOuvrage;
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *menuMenu;
    QMenu *menuAjouter_une_r_f_rence;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *FenetrePrincipale)
    {
        if (FenetrePrincipale->objectName().isEmpty())
            FenetrePrincipale->setObjectName(QString::fromUtf8("FenetrePrincipale"));
        FenetrePrincipale->resize(800, 600);
        actionSupprimer_une_r_f_rence = new QAction(FenetrePrincipale);
        actionSupprimer_une_r_f_rence->setObjectName(QString::fromUtf8("actionSupprimer_une_r_f_rence"));
        actionQuitter = new QAction(FenetrePrincipale);
        actionQuitter->setObjectName(QString::fromUtf8("actionQuitter"));
        actionJournal = new QAction(FenetrePrincipale);
        actionJournal->setObjectName(QString::fromUtf8("actionJournal"));
        actionOuvrage = new QAction(FenetrePrincipale);
        actionOuvrage->setObjectName(QString::fromUtf8("actionOuvrage"));
        centralwidget = new QWidget(FenetrePrincipale);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        FenetrePrincipale->setCentralWidget(centralwidget);
        menubar = new QMenuBar(FenetrePrincipale);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        menuMenu = new QMenu(menubar);
        menuMenu->setObjectName(QString::fromUtf8("menuMenu"));
        menuAjouter_une_r_f_rence = new QMenu(menuMenu);
        menuAjouter_une_r_f_rence->setObjectName(QString::fromUtf8("menuAjouter_une_r_f_rence"));
        FenetrePrincipale->setMenuBar(menubar);
        statusbar = new QStatusBar(FenetrePrincipale);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        FenetrePrincipale->setStatusBar(statusbar);

        menubar->addAction(menuMenu->menuAction());
        menuMenu->addAction(menuAjouter_une_r_f_rence->menuAction());
        menuMenu->addAction(actionSupprimer_une_r_f_rence);
        menuMenu->addAction(actionQuitter);
        menuAjouter_une_r_f_rence->addAction(actionJournal);
        menuAjouter_une_r_f_rence->addAction(actionOuvrage);

        retranslateUi(FenetrePrincipale);
        QObject::connect(actionQuitter, SIGNAL(triggered()), FenetrePrincipale, SLOT(close()));

        QMetaObject::connectSlotsByName(FenetrePrincipale);
    } // setupUi

    void retranslateUi(QMainWindow *FenetrePrincipale)
    {
        FenetrePrincipale->setWindowTitle(QApplication::translate("FenetrePrincipale", "FenetrePrincipale", nullptr));
        actionSupprimer_une_r_f_rence->setText(QApplication::translate("FenetrePrincipale", "Supprimer une r\303\251f\303\251rence", nullptr));
        actionQuitter->setText(QApplication::translate("FenetrePrincipale", "Quitter", nullptr));
        actionJournal->setText(QApplication::translate("FenetrePrincipale", "Journal", nullptr));
        actionOuvrage->setText(QApplication::translate("FenetrePrincipale", "Ouvrage", nullptr));
        menuMenu->setTitle(QApplication::translate("FenetrePrincipale", "Op\303\251rations", nullptr));
        menuAjouter_une_r_f_rence->setTitle(QApplication::translate("FenetrePrincipale", "Ajouter une r\303\251f\303\251rence", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FenetrePrincipale: public Ui_FenetrePrincipale {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FENETREPRINCIPALE_H
