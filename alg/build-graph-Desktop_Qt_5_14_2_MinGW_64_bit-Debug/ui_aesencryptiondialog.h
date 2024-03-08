/********************************************************************************
** Form generated from reading UI file 'aesencryptiondialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AESENCRYPTIONDIALOG_H
#define UI_AESENCRYPTIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AESEncryptionDialog
{
public:
    QPushButton *encryptButton;
    QPushButton *pushButton_2;
    QLineEdit *plainTextEdit;
    QLineEdit *keyEdit;
    QLineEdit *ciphertextLabel;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *answer;

    void setupUi(QWidget *AESEncryptionDialog)
    {
        if (AESEncryptionDialog->objectName().isEmpty())
            AESEncryptionDialog->setObjectName(QString::fromUtf8("AESEncryptionDialog"));
        AESEncryptionDialog->resize(400, 300);
        encryptButton = new QPushButton(AESEncryptionDialog);
        encryptButton->setObjectName(QString::fromUtf8("encryptButton"));
        encryptButton->setGeometry(QRect(50, 230, 101, 31));
        pushButton_2 = new QPushButton(AESEncryptionDialog);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(240, 230, 101, 31));
        plainTextEdit = new QLineEdit(AESEncryptionDialog);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(90, 30, 231, 31));
        keyEdit = new QLineEdit(AESEncryptionDialog);
        keyEdit->setObjectName(QString::fromUtf8("keyEdit"));
        keyEdit->setGeometry(QRect(90, 80, 231, 31));
        ciphertextLabel = new QLineEdit(AESEncryptionDialog);
        ciphertextLabel->setObjectName(QString::fromUtf8("ciphertextLabel"));
        ciphertextLabel->setGeometry(QRect(70, 140, 281, 31));
        label = new QLabel(AESEncryptionDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 40, 72, 15));
        label_2 = new QLabel(AESEncryptionDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 90, 72, 15));
        label_3 = new QLabel(AESEncryptionDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 150, 72, 15));
        answer = new QLineEdit(AESEncryptionDialog);
        answer->setObjectName(QString::fromUtf8("answer"));
        answer->setGeometry(QRect(70, 190, 281, 31));

        retranslateUi(AESEncryptionDialog);

        QMetaObject::connectSlotsByName(AESEncryptionDialog);
    } // setupUi

    void retranslateUi(QWidget *AESEncryptionDialog)
    {
        AESEncryptionDialog->setWindowTitle(QCoreApplication::translate("AESEncryptionDialog", "Form", nullptr));
        encryptButton->setText(QCoreApplication::translate("AESEncryptionDialog", "\345\212\240\345\257\206", nullptr));
        pushButton_2->setText(QCoreApplication::translate("AESEncryptionDialog", "\350\247\243\345\257\206", nullptr));
        label->setText(QCoreApplication::translate("AESEncryptionDialog", "\346\230\216\346\226\207", nullptr));
        label_2->setText(QCoreApplication::translate("AESEncryptionDialog", "\345\257\206\351\222\245", nullptr));
        label_3->setText(QCoreApplication::translate("AESEncryptionDialog", "\345\257\206\346\226\207", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AESEncryptionDialog: public Ui_AESEncryptionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AESENCRYPTIONDIALOG_H
