/********************************************************************************
** Form generated from reading UI file 'addver.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDVER_H
#define UI_ADDVER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addver
{
public:
    QLineEdit *count;

    void setupUi(QWidget *addver)
    {
        if (addver->objectName().isEmpty())
            addver->setObjectName(QString::fromUtf8("addver"));
        addver->resize(400, 300);
        count = new QLineEdit(addver);
        count->setObjectName(QString::fromUtf8("count"));
        count->setGeometry(QRect(100, 40, 113, 21));

        retranslateUi(addver);

        QMetaObject::connectSlotsByName(addver);
    } // setupUi

    void retranslateUi(QWidget *addver)
    {
        addver->setWindowTitle(QCoreApplication::translate("addver", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addver: public Ui_addver {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDVER_H
