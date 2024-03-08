#define  _CRT_SECURE_NO_WARNINGS 1
#include "rsa.h"
#include "ui_rsa.h"

ll primeNum(ll num)   //判断素数
{
    if (num == 1 || num == 0)
    {
        return 0;
    }
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            // 不是素数返回0
            return 0;
        }
    }
    return 1; //是素数返回1
}
//判断两个数是否互素
ll coprime(ll a, ll b)  //判断互质
{
    ll t;
    if (a < b)
    {
        t = a;
        a = b;
        b = t;
    }
    while (a % b)
    {
        t = b;
        b = a % b;
        a = t;
    }
    //返回值为1，则a，b互素
    return b;
}
//计算密文
ll candp(ll b, ll p, ll k) //b--明文或密文   p--指数(e/d)    k--模数
{
    if (p == 1)
    {
        return b % k;
    }
    if (p == 2)
    {
        return b * b % k;
    }
    if (p % 2 == 0)
    {
        ll sum = candp(b, p / 2, k);
        return sum * sum % k;
    }
    if (p % 2 == 1)
    {
        ll sun = candp(b, p / 2, k);
        return sun * sun * b % k;
    }
}

rsa::rsa(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::rsa)
{
    ui->setupUi(this);
    this->setStyleSheet("background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #2C73D2, stop:1 #008E9B);");
    ui->inputp->setStyleSheet("border-radius: 5px;""border:1px solid 	black");
    ui->inputq->setStyleSheet("border-radius: 5px;""border:1px solid 	black");
    ui->inpute->setStyleSheet("border-radius: 5px;""border:1px solid 	black");
    ui->outputn->setStyleSheet("border-radius: 5px;""border:1px solid 	black");
    ui->outputt->setStyleSheet("border-radius: 5px;""border:1px solid 	black");
    ui->outpubkey->setStyleSheet("border-radius: 5px;""border:1px solid 	black");
    ui->outprikey->setStyleSheet("border-radius: 5px;""border:1px solid 	black");
    ui->inputpube->setStyleSheet("border-radius: 5px;""border:1px solid 	black");
    ui->inputpubn->setStyleSheet("border-radius: 5px;""border:1px solid 	black");
    ui->inputcrybotext->setStyleSheet("border-radius: 5px;""border:1px solid 	black");
    ui->outplaintext->setStyleSheet("border-radius: 5px;""border:1px solid 	black");
    ui->inputplaintext->setStyleSheet("border-radius: 5px;""border:1px solid 	black");
    ui->cybrotext->setStyleSheet("border-radius: 5px;""border:1px solid 	black");
    ui->inputprid->setStyleSheet("border-radius: 5px;""border:1px solid 	black");
    ui->inputprin->setStyleSheet("border-radius: 5px;""border:1px solid 	black");
    ui->outplaintext->setStyleSheet("border-radius: 5px;""border:1px solid 	black");
    ui->inputprime->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #009EFA, stop:1 #00D2FC);"
                             "border-radius: 15px;"
                             "border:1px solid 	black");
    ui->inputesure->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #009EFA, stop:1 #00D2FC);"
                             "border-radius: 15px;"
                             "border:1px solid 	black");
    ui->pushButton_4->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #009EFA, stop:1 #00D2FC);"
                             "border-radius: 15px;"
                             "border:1px solid 	black");
}

rsa::~rsa()
{
    delete ui;
}

void rsa::on_inputprime_clicked()
{
    ll p, q, t, n, e, d;
    p = ui->inputp->text().toLongLong();
    q = ui->inputq->text().toLongLong();
    e = ui->inpute->text().toLongLong();
    if (primeNum(p) == 0)
    {
        string s = "输入的p不是素数";
        ui->inputp->setText(QString::fromStdString(s));
    }
    else if(primeNum(q) == 0)
    {
        string s = "输入的q不是素数";
        ui->inputq->setText(QString::fromStdString(s));
    }
    else{
        n = p * q;
        //t为n的欧拉函数
        t = (p - 1) * (q - 1);
        d = 1;
        //求e的乘法逆
        while (((e * d) % t) != 1)
            d++;
        ui->outputn->setText(QString::number(n));
        ui->outputt->setText(QString::number(t));

        QString now1 = "(" + QString::number(e) + "," + QString::number(n) + ")";
        ui->outpubkey->setText(now1);
        QString now2 = "(" + QString::number(d) + "," + QString::number(n) + ")";
        ui->outprikey->setText(now2);
    }
}

void rsa::on_inputesure_clicked()
{
    ll n, e, x, y;
    e = ui->inputpube->text().toLongLong();
    n = ui->inputpubn->text().toLongLong();
    x = ui->inputplaintext->text().toLongLong();

    y = candp(x, e, n);
    ui->cybrotext->setText(QString::number(y));
}

void rsa::on_pushButton_4_clicked()
{
    ll n, d, x, y;
    d = ui->inputprid->text().toLongLong();
    n = ui->inputprin->text().toLongLong();
    y = ui->inputcrybotext->text().toLongLong();

    x = candp(y, d, n);
    ui->outplaintext->setText(QString::number(x));
}
