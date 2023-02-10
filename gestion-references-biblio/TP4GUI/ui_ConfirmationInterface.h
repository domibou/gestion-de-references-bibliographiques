/********************************************************************************
** Form generated from reading UI file 'ConfirmationInterface.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIRMATIONINTERFACE_H
#define UI_CONFIRMATIONINTERFACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ConfirmationInterface
{
public:
    QPushButton *Supprimer;
    QPushButton *Cancel;
    QLabel *label;

    void setupUi(QDialog *ConfirmationInterface)
    {
        if (ConfirmationInterface->objectName().isEmpty())
            ConfirmationInterface->setObjectName(QString::fromUtf8("ConfirmationInterface"));
        ConfirmationInterface->resize(240, 114);
        Supprimer = new QPushButton(ConfirmationInterface);
        Supprimer->setObjectName(QString::fromUtf8("Supprimer"));
        Supprimer->setGeometry(QRect(120, 70, 90, 28));
        Cancel = new QPushButton(ConfirmationInterface);
        Cancel->setObjectName(QString::fromUtf8("Cancel"));
        Cancel->setGeometry(QRect(20, 70, 90, 28));
        label = new QLabel(ConfirmationInterface);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 30, 181, 16));

        retranslateUi(ConfirmationInterface);
        QObject::connect(Supprimer, SIGNAL(clicked()), ConfirmationInterface, SLOT(accept()));
        QObject::connect(Cancel, SIGNAL(clicked()), ConfirmationInterface, SLOT(close()));

        QMetaObject::connectSlotsByName(ConfirmationInterface);
    } // setupUi

    void retranslateUi(QDialog *ConfirmationInterface)
    {
        ConfirmationInterface->setWindowTitle(QApplication::translate("ConfirmationInterface", "ConfirmationInterface", nullptr));
        Supprimer->setText(QApplication::translate("ConfirmationInterface", "Supprimer", nullptr));
        Cancel->setText(QApplication::translate("ConfirmationInterface", "Cancel", nullptr));
        label->setText(QApplication::translate("ConfirmationInterface", "Supprimer cette r\303\251f\303\251rence?", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConfirmationInterface: public Ui_ConfirmationInterface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIRMATIONINTERFACE_H
