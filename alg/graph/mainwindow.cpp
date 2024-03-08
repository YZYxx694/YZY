#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowIcon(QIcon(":/prefix1/image/icon.png"));//放的是相对路径，注意一下
    this->setStyleSheet("background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #2C73D2, stop:1 #008E9B);");
    ui->frame->setFrameShape(QFrame::StyledPanel);
    ui->frame->setStyleSheet(
                "background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #009EFA, stop:1 #00D2FC);"
                " border-radius: 15px;"
             );//#65d7d7
    ui->Floyd->setStyleSheet("QPushButton{background-color: white;"//#00D2FC;"
                             "border:1px solid 	#00868B}");
    ui->Prim->setStyleSheet("QPushButton{background-color:white;"//#00D2FC;"
                             "border:1px solid 	#00868B}");
    ui->pushButton->setStyleSheet("QPushButton{background-color:white;"//#00D2FC;"
                             "border:1px solid 	#00868B}");
    ui->pushButton_2->setStyleSheet("QPushButton{background-color:white;"//#00D2FC;"
                             "border:1px solid 	#00868B}");
    ui->encryptButton->setStyleSheet("QPushButton{background-color:white;"//#00D2FC;"
                             "border:1px solid 	#00868B}");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Prim_clicked()
{
    Form *newwindow = new Form;
    newwindow -> setWindowTitle("最小造价");
    newwindow -> show();
}

void MainWindow::on_Floyd_clicked()
{
    shortestpath *newwindow = new shortestpath;
    newwindow -> setWindowTitle("最短路由");
    newwindow -> show();
}

void MainWindow::on_encryptButton_clicked()
{
    desjiami *encryptionWindow = new desjiami;
    encryptionWindow->setWindowTitle("DES加密/解密");
    encryptionWindow->show();
}

void MainWindow::on_pushButton_clicked()
{
    dininc *newwindow = new dininc;
    newwindow -> setWindowTitle("最大流量");
    newwindow -> show();
}

void MainWindow::on_pushButton_2_clicked()
{
    rsa *newwindow = new rsa;
    newwindow -> setWindowTitle("RSA加密/解密");
    newwindow -> show();
}
