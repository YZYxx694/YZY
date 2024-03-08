#pragma once
#ifndef RSA_H
#define RSA_H

#include <QWidget>
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include <cmath>

using namespace std;
typedef long long ll;
// 判断素数
ll primeNum(ll num);
// 判断互质
ll coprime(ll a, ll b);
// 计算密文
ll candp(ll b, ll p, ll k);
// 生成密钥
ll key();
//加密
ll encryption();
//解密
ll decode();

namespace Ui {
class rsa;
}

class rsa : public QWidget
{
    Q_OBJECT

public:
    explicit rsa(QWidget *parent = nullptr);
    ~rsa();

private slots:
    void on_inputprime_clicked();

    void on_inputesure_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::rsa *ui;
};

#endif // RSA_H
