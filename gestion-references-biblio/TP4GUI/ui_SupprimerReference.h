/********************************************************************************
** Form generated from reading UI file 'SupprimerReference.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUPPRIMERREFERENCE_H
#define UI_SUPPRIMERREFERENCE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_SupprimerReference
{
public:
    QPushButton *OK;
    QPushButton *Annuler;
    QLineEdit *identifiantSupprimer;
    QLabel *identifiantSupprimerLabel;

    void setupUi(QDialog *SupprimerReference)
    {
        if (SupprimerReference->objectName().isEmpty())
            SupprimerReference->setObjectName(QString::fromUtf8("SupprimerReference"));
        SupprimerReference->resize(429, 237);
        OK = new QPushButton(SupprimerReference);
        OK->setObjectName(QString::fromUtf8("OK"));
        OK->setGeometry(QRect(300, 190, 90, 28));
        Annuler = new QPushButton(SupprimerReference);
        Annuler->setObjectName(QString::fromUtf8("Annuler"));
        Annuler->setGeometry(QRect(200, 190, 90, 28));
        identifiantSupprimer = new QLineEdit(SupprimerReference);
        identifiantSupprimer->setObjectName(QString::fromUtf8("identifiantSupprimer"));
        identifiantSupprimer->setGeometry(QRect(120, 90, 261, 28));
        identifiantSupprimerLabel = new QLabel(SupprimerReference);
        identifiantSupprimerLabel->setObjectName(QString::fromUtf8("identifiantSupprimerLabel"));
        identifiantSupprimerLabel->setGeometry(QRect(30, 100, 111, 16));

        retranslateUi(SupprimerReference);
        QObject::connect(Annuler, SIGNAL(clicked()), SupprimerReference, SLOT(close()));

        QMetaObject::connectSlotsByName(SupprimerReference);
    } // setupUi

    void retranslateUi(QDialog *SupprimerReference)
    {
        SupprimerReference->setWindowTitle(QApplication::translate("SupprimerReference", "SupprimerReference", nullptr));
        OK->setText(QApplication::translate("SupprimerReference", "OK", nullptr));
        Annuler->setText(QApplication::translate("SupprimerReference", "Annuler", nullptr));
        identifiantSupprimerLabel->setText(QApplication::translate("SupprimerReference", "Identifiant", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SupprimerReference: public Ui_SupprimerReference {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUPPRIMERREFERENCE_H
