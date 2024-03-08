
#include "aesencryptiondialog.h"
#include "ui_aesencryptiondialog.h"
#include <QDebug>

#include <QCoreApplication>
#include <iostream>

#define CRYPTOPP_DEFAULT_NO_DLL
#include <dll.h>
#ifdef CRYPTOPP_WIN32_AVAILABLE
#include <windows.h>
#endif
#include "aes.h"
#include <filters.h>
using namespace CryptoPP;
using namespace std;

AESEncryptionDialog::AESEncryptionDialog(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AESEncryptionDialog)
{
    ui->setupUi(this);
}

AESEncryptionDialog::~AESEncryptionDialog()
{
    delete ui;
}

void AESEncryptionDialog::on_encryptButton_clicked()
{
    QString plaintext = ui->plainTextEdit->text().toUtf8();
    QString key = ui->keyEdit->text().toUtf8();

    CryptoPP::SecByteBlock aesKey(CryptoPP::AES::MAX_KEYLENGTH);
    std::memcpy(aesKey, key.toStdString().c_str(), CryptoPP::AES::MAX_KEYLENGTH);

    CryptoPP::ECB_Mode<CryptoPP::AES>::Encryption encryption(aesKey, aesKey.size());
    std::string ciphertext;

    CryptoPP::StringSource(plaintext.toStdString(), true,
        new CryptoPP::StreamTransformationFilter(encryption,
            new CryptoPP::StringSink(ciphertext)
        )
    );

    std::string encoded;
    CryptoPP::StringSource(ciphertext, true,
        new CryptoPP::HexEncoder(
            new CryptoPP::StringSink(encoded)
        )
    );

    QString encryptedText = QString::fromStdString(encoded);

    ui->ciphertextLabel->setText(encryptedText);


}

void AESEncryptionDialog::on_pushButton_2_clicked()
{
    QString encryptedText = ui->ciphertextLabel->text();
    QString key = ui->keyEdit->text();

    std::string encoded = encryptedText.toStdString();
    std::string ciphertext;
    CryptoPP::StringSource(encoded, true,
        new CryptoPP::HexDecoder(
            new CryptoPP::StringSink(ciphertext)
        )
    );


    std::string keyStr = key.toStdString();


    CryptoPP::SecByteBlock aesKey(CryptoPP::AES::MAX_KEYLENGTH);


    CryptoPP::ECB_Mode<CryptoPP::AES>::Decryption decryption(aesKey, aesKey.size());
    std::string decryptedText;
    CryptoPP::StringSource(ciphertext, true,
    new CryptoPP::StreamTransformationFilter(decryption,
    new CryptoPP::StringSink(decryptedText)));


    QString plaintext = QString::fromStdString(decryptedText);
    ui->answer->setText(plaintext);
}
