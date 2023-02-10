/********************************************************************************
** Form generated from reading UI file 'SupprimerReferenceInterface.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUPPRIMERREFERENCEINTERFACE_H
#define UI_SUPPRIMERREFERENCEINTERFACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_SupprimerReferenceInterface
{
public:
    QPushButton *OK;
    QPushButton *Annuler;
    QLineEdit *identifiantSupprimer;
    QLabel *identifiantSupprimerLabel;

    void setupUi(QDialog *SupprimerReferenceInterface)
    {
        if (SupprimerReferenceInterface->objectName().isEmpty())
            SupprimerReferenceInterface->setObjectName(QString::fromUtf8("SupprimerReferenceInterface"));
        SupprimerReferenceInterface->resize(429, 237);
        OK = new QPushButton(SupprimerReferenceInterface);
        OK->setObjectName(QString::fromUtf8("OK"));
        OK->setGeometry(QRect(300, 190, 90, 28));
        Annuler = new QPushButton(SupprimerReferenceInterface);
        Annuler->setObjectName(QString::fromUtf8("Annuler"));
        Annuler->setGeometry(QRect(200, 190, 90, 28));
        identifiantSupprimer = new QLineEdit(SupprimerReferenceInterface);
        identifiantSupprimer->setObjectName(QString::fromUtf8("identifiantSupprimer"));
        identifiantSupprimer->setGeometry(QRect(120, 90, 261, 28));
        identifiantSupprimerLabel = new QLabel(SupprimerReferenceInterface);
        identifiantSupprimerLabel->setObjectName(QString::fromUtf8("identifiantSupprimerLabel"));
        identifiantSupprimerLabel->setGeometry(QRect(30, 100, 111, 16));

        retranslateUi(SupprimerReferenceInterface);
        QObject::connect(Annuler, SIGNAL(clicked()), SupprimerReferenceInterface, SLOT(close()));
        QObject::connect(OK, SIGNAL(clicked()), SupprimerReferenceInterface, SLOT(confirmerSuppression()));

        QMetaObject::connectSlotsByName(SupprimerReferenceInterface);
    } // setupUi

    void retranslateUi(QDialog *SupprimerReferenceInterface)
    {
        SupprimerReferenceInterface->setWindowTitle(QApplication::translate("SupprimerReferenceInterface", "SupprimerReference", nullptr));
        OK->setText(QApplication::translate("SupprimerReferenceInterface", "OK", nullptr));
        Annuler->setText(QApplication::translate("SupprimerReferenceInterface", "Annuler", nullptr));
        identifiantSupprimerLabel->setText(QApplication::translate("SupprimerReferenceInterface", "Identifiant", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SupprimerReferenceInterface: public Ui_SupprimerReferenceInterface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUPPRIMERREFERENCEINTERFACE_H
