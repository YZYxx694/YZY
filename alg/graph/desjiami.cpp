#include "desjiami.h"
#include "ui_desjiami.h"

desjiami::desjiami(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::desjiami)
{
    ui->setupUi(this);
    this->setStyleSheet("background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #2C73D2, stop:1 #008E9B);");
    ui->jiami->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #009EFA, stop:1 #00D2FC);"
                             "border-radius: 10px;"
                             "border:1px solid 	black");
    ui->jiemi->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #009EFA, stop:1 #00D2FC);"
                             "border-radius: 10px;"
                             "border:1px solid 	black");
    ui->inputmi->setStyleSheet("border-radius: 5px;""border:1px solid 	black");
    ui->inputkey->setStyleSheet("border-radius: 5px;""border:1px solid 	black");
    ui->inputming->setStyleSheet("border-radius: 5px;""border:1px solid 	black");
    ui->output->setStyleSheet("border-radius: 5px;""border:1px solid 	black");
    ui->outputans->setStyleSheet("border-radius: 5px;""border:1px solid 	black");
    ui->shijinzhi->setStyleSheet("border-radius: 5px;""border:1px solid 	black");
}

desjiami::~desjiami()
{
    delete ui;
}

#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
#pragma warning(disable:4996)
#define MAX 100
using namespace std;
//程序说明：
//
//1、输入的明文长度大于0即可，明文可以带空格；
//
//2、输入的明文支持汉字；
//
//3、输出密文默认为二进制字符串；
//
//4、输入密文要求为二进制字符串且长度为64的倍数，否则解密会出错。

//5、支持对文件内容的加解密

//模式标记,确定是加密还是解密
int flag;
string k[16];
//PC-1选位表
int pc1Table[56] = {
    57,49,41,33,25,17,9,1,
    58,50,42,34,26,18,10,2,
    59,51,43,35,27,19,11,3,
    60,52,44,36,63,55,47,39,
    31,23,15,7,62,54,46,38,
    30,22,14,6,61,53,45,37,
    29,21,13,5,28,20,12,4
};
//PC-2选位表
int pc2Table[48] =
{
    14,17,11,24,1,5,
    3,28,15,6,21,10,
    23,19,12,4,26,8,
    16,7,27,20,13,2,
    41,52,31,37,47,55,
    30,40,51,45,33,48,
    44,49,39,56,34,53,
    46,42,50,36,29,32
};
//左移位数表
int loopTable[16] =
{
    1,1,2,2,2,2,2,2,1,2,2,2,2,2,2,1
};
//IP表（初始置换表）
int ipTable[64] =
{
    58,50,42,34,26,18,10,2,
    60,52,44,36,28,20,12,4,
    62,54,46,38,30,22,14,6,
    64,56,48,40,32,24,16,8,
    57,49,41,33,25,17,9,1,
    59,51,43,35,27,19,11,3,
    61,53,45,37,29,21,13,5,
    63,55,47,39,31,23,15,7
};
//逆置换IP^-1表(解密时IP初始置换的逆)
int ipReverseTable[64] = {
    40,8,48,16,56,24,64,32,
    39,7,47,15,55,23,63,31,
    38,6,46,14,54,22,62,30,
    37,5,45,13,53,21,61,29,
    36,4,44,12,52,20,60,28,
    35,3,43,11,51,19,59,27,
    34,2,42,10,50,18,58,26,
    33,1,41,9,49,17,57,25
};
//扩展置换表(E盒)
int extendTable[48] =
{
    32,1,2,3,4,5,
    4,5,6,7,8,9,
    8,9,10,11,12,13,
    12,13,14,15,16,17,
    16,17,18,19,20,21,
    20,21,22,23,24,25,
    24,25,26,27,28,29,
    28,29,30,31,32,1
};

//八个S盒，三维数组存储
int sBox[8][4][16] =
{
    //S1
    14,4,13,1,2,15,11,8,3,10,6,12,5,9,0,7,
    0,15,7,4,14,2,13,1,10,6,12,11,9,5,3,8,
    4,1,14,8,13,6,2,11,15,12,9,7,3,10,5,0,
    15,12,8,2,4,9,1,7,5,11,3,14,10,0,6,13,
    //S2
    15,1,8,14,6,11,3,4,9,7,2,13,12,0,5,10,
    3,13,4,7,15,2,8,14,12,0,1,10,6,9,11,5,
    0,14,7,11,10,4,13,1,5,8,12,6,9,3,2,15,
    13,8,10,1,3,15,4,2,11,6,7,12,0,5,14,9,
    //S3
    10,0,9,14,6,3,15,5,1,13,12,7,11,4,2,8,
    13,7,0,9,3,4,6,10,2,8,5,14,12,11,15,1,
    13,6,4,9,8,15,3,0,11,1,2,12,5,10,14,7,
    1,10,13,0,6,9,8,7,4,15,14,3,11,5,2,12,
    //S4
    7,13,14,3,0,6,9,10,1,2,8,5,11,12,4,15,
    13,8,11,5,6,15,0,3,4,7,2,12,1,10,14,9,
    10,6,9,0,12,11,7,13,15,1,3,14,5,2,8,4,
    3,15,0,6,10,1,13,8,9,4,5,11,12,7,2,14,
    //S5
    2,12,4,1,7,10,11,6,8,5,3,15,13,0,14,9,
    14,11,2,12,4,7,13,1,5,0,15,10,3,9,8,6,
    4,2,1,11,10,13,7,8,15,9,12,5,6,3,0,14,
    11,8,12,7,1,14,2,13,6,15,0,9,10,4,5,3,
    //S6
    12,1,10,15,9,2,6,8,0,13,3,4,14,7,5,11,
    10,15,4,2,7,12,9,5,6,1,13,14,0,11,3,8,
    9,14,15,5,2,8,12,3,7,0,4,10,1,13,11,6,
    4,3,2,12,9,5,15,10,11,14,1,7,6,0,8,13,
    //S7
    4,11,2,14,15,0,8,13,3,12,9,7,5,10,6,1,
    13,0,11,7,4,9,1,10,14,3,5,12,2,15,8,6,
    1,4,11,13,12,3,7,14,10,15,6,8,0,5,9,2,
    6,11,13,8,1,4,10,7,9,5,0,15,14,2,3,12,
    //S8
    13,2,8,4,6,15,11,1,10,9,3,14,5,0,12,7,
    1,15,13,8,10,3,7,4,12,5,6,11,0,14,9,2,
    7,11,4,1,9,12,14,2,0,6,10,13,15,3,5,8,
    2,1,14,7,4,10,8,13,15,12,9,0,3,5,6,11
};

//置换表(P盒)
int pTable[32] =
{
    16,7,20,21,
    29,12,28,17,
    1,15,23,26,
    5,18,31,10,
    2,8,24,14,
    32,27,3,9,
    19,13,30,6,
    22,11,4,25
};
//字符转二进制，会有些怪异，但是后面用binaryToInt函数解决
string charToBinary(char c)
{
    int i, b = c, k = 0, flag = 0;
    string result;
    //负数就是中文字符
    if (b < 0)
    {
        b = -b;
        flag = 1;
    }
    //英文字符转换成ASCII的倒序！！！所以最后需要逆序
    while (k < 8)
    {
        if (b)
        {
            //转换成字符型的 ‘1’或‘0’
            result += ((b % 2) + '0');
            b /= 2;
        }
        else result += '0';
        k++;
    }
    //汉字字符处理，汉字用两个char类型处理，用来表示汉字的任何其中一个char都是负数，要从int型数据，将其恢复成原本的存储形式（补码）
    if (flag)
    {
        for (i = 0; i < result.length(); i++)
        {
            //'0'->'1','1'->'0'
            if (result[i] == '0') result[i] = '1';
            else result[i] = '0';
        }
        for (i = 0; result[i] != '0'; i++)
        {
            result[i] = '0';
        }
        result[i] = '1';
    }
    reverse(result.begin(), result.end());   //中文字符最后变成了补码，英文字符正常的ASCII码
    return result;
}
//二进制转整型
int binaryToInt(string s)
{
    int i, result = 0, p = 1;
    for (i = s.length() - 1; i >= 0; i--)
    {
        result += ((s[i] - '0') * p);
        p *= 2;
    }
    return result;
}
//整型转二进制，用来将进入S盒后取出的数据转化为二进制，最多用4bit(while循环中4的出处)
string intToBinary(int i)
{
    int k = 0;
    string result;
    while (k < 4)
    {
        if (i)
        {
            result += ((i % 2) + '0');
            i /= 2;
        }
        else result += '0';
        k++;
    }
    reverse(result.begin(), result.end());
    return result;
}
//异或运算
string xorAB(string a, string b)
{
    int i;
    string result;
    //按位异或运算
    for (i = 0; i < a.length(); i++)
    {
        result += (((a[i] - '0') ^ (b[i] - '0')) + '0');
    }
    return result;
}
//f函数
string f(string right, string k)  //right明文当前加密轮右侧比特流，k当前加密轮密钥
{
    int i, temp;
    string extendBinary, b0;
    string b[8], row, col;
    string b8, pb;
    //extendBinary用来存放右侧32明文经过E盒扩展后的内容
    for (i = 0; i < 48; i++)
    {
        extendBinary += right[extendTable[i] - 1];//E盒从一开始，所以要减一
    }
    //扩展后的内容与此轮密钥异或操作并将结果存入b0中
    b0 = xorAB(extendBinary, k);
    //将b0的内容分成八份，每份六bit，为进入S盒做准备
    for (i = 0; i < 8; i++)
    {
        b[i] = b0.substr(i * 6, 6);
    }

    for (i = 0; i < 8; i++)
    {   //6bit的第一位和第六位作为行坐标
        row = b[i].substr(0, 1) + b[i].substr(5, 1);
        //6bit的第二至五位作为纵坐标
        col = b[i].substr(1, 4);
        //转化为整形坐标后，第几份对应去找第几个S盒替换
        temp = sBox[i][binaryToInt(row)][binaryToInt(col)];
        //转到b8中合并
        b[i] = intToBinary(temp);
        b8 += b[i];
    }
    //进入置换盒(P盒)
    for (i = 0; i < 32; i++)
    {
        pb += b8[pTable[i] - 1];
    }
    //一轮加密结束，返回结果
    return pb;
}
//明文/密文处理,以明文处理过程为例进行解释
string wen(string wenBinary[], int num)
{
    int i, j;
    string ipWenBinary[100];
    string left[17], right[17], temp, result;
    //将明文初始置换，num表示分块数目
    for (i = 0; i < num; i++)
    {
        temp = "";
        for (j = 0; j < 64; j++)
        {
            temp += wenBinary[i][ipTable[j] - 1];
        }
        ipWenBinary[i] = temp;
    }
    for (i = 0; i < num; i++)
    {   //将初始置换后的每块明文拆成左右两部分
        left[0] = ipWenBinary[i].substr(0, 32);
        right[0] = ipWenBinary[i].substr(32, 32);

        //十六轮加密
        for (j = 0; j < 16; j++)
        {
            //左侧下一个等于当前右侧
            left[j + 1] = right[j];
            //加密和解密的区别，flag是那个全局变量

            //右侧下一个为:当前左侧与当前右侧走完一轮加密后的结果进行异或的结果
            if (flag == 1 || flag == 3) right[j + 1] = xorAB(left[j], f(right[j], k[j]));

            //倒着解密
            else right[j + 1] = xorAB(left[j], f(right[j], k[15 - j]));
        }
        //加密后的左右和在一起
        temp = right[j] + left[j];
        //将加密后的密文进行最后的置换，实际上和初始置换是对称的~！
        //每块的加密结果都和在result中,加密可以直接输出比特流
        for (j = 0; j < 64; j++)
        {
            result += temp[ipReverseTable[j] - 1];
        }
    }
    //解密结果输出的是字符
    if (flag == 2 || flag == 4)
    {
        string ch;
        for (i = 0; i < num * 8; i++)
        {
            //超过char类型的表示范围就是中文字符的一部分，强转为char类型
            ch += binaryToInt(result.substr(8 * i, 8));
        }
        result = ch;
    }
    return result;
}


unsigned long long erzhuanshi(string s)
{
    unsigned long long res = 0;
    int len = s.length();
    for(int i = 0; i < len; i++)
    {
        res = res * 2 + (s[i] - '0');
    }
    return res;
}

void desjiami::on_jiami_clicked()
{
    QString plaintext = ui->inputming->text(), keytext = ui->inputkey->text();
    string pltxt = plaintext.toStdString(), ktxt = keytext.toStdString();

    string miyaoBinary, pc1MiyaoBinary;
    string c[17], d[17], temp, pc2Temp;

    if (ktxt.length() >= 9)
    {
        string erro = "密钥不能超过8位，请重新输入：";
        QString err = QString::fromStdString(erro);
        ui->inputkey->setText(err);
        return ;
    }


    //密钥处理
    for (int i = 0; i < ktxt.length(); i++)
    {
        miyaoBinary += charToBinary(ktxt[i]);
    }
    //密钥长度不足64bit，补‘0’
    while (miyaoBinary.length() % 64 != 0)
    {
        miyaoBinary += '0';
    }
    //从64bit密钥中依据PC-1盒子取出56bit
    for (int i = 0; i < 56; i++)
    {
        pc1MiyaoBinary += miyaoBinary[pc1Table[i] - 1];
    }
    //56bit分成左右两部分
    c[0] = pc1MiyaoBinary.substr(0, 28);
    d[0] = pc1MiyaoBinary.substr(28, 28);
    //产生16轮加密需要的密钥，存入全局变量k[]中
    for (int i = 1; i <= 16; i++)

    {   //根据循环移位表，确定生成该轮密钥移位数目
        c[i] = c[i - 1].substr(loopTable[i - 1], 28 - loopTable[i - 1]) + c[i - 1].substr(0, loopTable[i - 1]);
        d[i] = d[i - 1].substr(loopTable[i - 1], 28 - loopTable[i - 1]) + d[i - 1].substr(0, loopTable[i - 1]);

        temp = c[i] + d[i];
        pc2Temp = "";
        //依据PC-2盒子进行操作
        for (int j = 0; j < 48; j++)
        {
            pc2Temp += temp[pc2Table[j] - 1];
        }
        //生成该轮密钥
        k[i - 1] = pc2Temp;
    }

    string tmp, wenBinary[100];
    int num = 0;
    for(int i = 0; i < pltxt.length(); i++)
    {
        tmp += charToBinary(pltxt[i]);
        if (((i + 1) % 8 == 0) || (((i + 1) % 8 != 0) && (i == pltxt.length() - 1)))
        {
            wenBinary[num++] = tmp;
            tmp = "";
        }
    }
    while(wenBinary[num - 1].length() % 64 != 0)
    {
        wenBinary[num - 1] += '0';
    }

    flag = 1;
    QString ans = QString::fromStdString(wen(wenBinary, num));
    ui->shijinzhi->setText(QString::number(erzhuanshi(wen(wenBinary, num))));
    ui->output->setText(ans);
}

void desjiami::on_jiemi_clicked()
{
    string wenBinary[100];
    int num = 0;

    QString plaintext = ui->inputmi->text(), keytext = ui->inputkey->text();
    string pltxt = plaintext.toStdString(), ktxt = keytext.toStdString();

    string miyaoBinary, pc1MiyaoBinary;
    string c[17], d[17], temp, pc2Temp;

    if (ktxt.length() >= 9)
    {
        string erro = "密钥不能超过8位，请重新输入：";
        QString err = QString::fromStdString(erro);
        ui->inputkey->setText(err);
        return ;
    }


    //密钥处理
    for (int i = 0; i < ktxt.length(); i++)
    {
        miyaoBinary += charToBinary(ktxt[i]);
    }
    //密钥长度不足64bit，补‘0’
    while (miyaoBinary.length() % 64 != 0)
    {
        miyaoBinary += '0';
    }
    //从64bit密钥中依据PC-1盒子取出56bit
    for (int i = 0; i < 56; i++)
    {
        pc1MiyaoBinary += miyaoBinary[pc1Table[i] - 1];
    }
    //56bit分成左右两部分
    c[0] = pc1MiyaoBinary.substr(0, 28);
    d[0] = pc1MiyaoBinary.substr(28, 28);
    //产生16轮加密需要的密钥，存入全局变量k[]中
    for (int i = 1; i <= 16; i++)

    {   //根据循环移位表，确定生成该轮密钥移位数目
        c[i] = c[i - 1].substr(loopTable[i - 1], 28 - loopTable[i - 1]) + c[i - 1].substr(0, loopTable[i - 1]);
        d[i] = d[i - 1].substr(loopTable[i - 1], 28 - loopTable[i - 1]) + d[i - 1].substr(0, loopTable[i - 1]);

        temp = c[i] + d[i];
        pc2Temp = "";
        //依据PC-2盒子进行操作
        for (int j = 0; j < 48; j++)
        {
            pc2Temp += temp[pc2Table[j] - 1];
        }
        //生成该轮密钥
        k[i - 1] = pc2Temp;
    }

    for(int i = 0; i * 64 < pltxt.length(); i++)
    {
        wenBinary[num++] = pltxt.substr(i * 64, 64);
    }

    flag = 2;

    QString ans = QString::fromStdString(wen(wenBinary, num));
    ui->outputans->setText(ans);

}
