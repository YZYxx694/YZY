/********************************************************************************
** Form generated from reading UI file 'adddiredge.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDDIREDGE_H
#define UI_ADDDIREDGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_adddiredge
{
public:

    void setupUi(QWidget *adddiredge)
    {
        if (adddiredge->objectName().isEmpty())
            adddiredge->setObjectName(QString::fromUtf8("adddiredge"));
        adddiredge->resize(400, 300);

        retranslateUi(adddiredge);

        QMetaObject::connectSlotsByName(adddiredge);
    } // setupUi

    void retranslateUi(QWidget *adddiredge)
    {
        adddiredge->setWindowTitle(QCoreApplication::translate("adddiredge", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class adddiredge: public Ui_adddiredge {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDDIREDGE_H
