#include "form.h"
#include "ui_form.h"
#include <iostream>
#include <utility>
#include <set>
#include <vector>

struct node{
    int y,v;
    node(int _y,int _v){y = _y;v = _v;};
};

std::vector<node> edgep[50001];

int np = 0, distp[50001];
bool b[50001];

int Prim()
{
    memset(b,0,sizeof(b));
    memset(distp,127,sizeof(distp));
    std::set<std::pair<int,int> > q;
    distp[1] = 0;
    int tot = 0, ansp = 0;
    q.clear();
    for(int i = 1; i<=np; i++) q.insert({distp[i],i});
    while(!q.empty())
    {
        int x = q.begin()->second;
        q.erase(q.begin());
        if(distp[x] > 1<<30) break;
        ++tot;
        ansp += distp[x];
        b[x] = true;
        for(auto i:edgep[x])
        {
            if(!b[i.y] && distp[i.y] > i.v)
            {
                q.erase({distp[i.y],i.y});
                distp[i.y] = i.v;
                q.insert({distp[i.y],i.y});
            }
        }
    }
    return ansp;
}


Form::Form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form)
{
    ui->setupUi(this);
    this->setStyleSheet("background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #2C73D2, stop:1 #008E9B);");
    ui->count->setStyleSheet("border-radius: 5px;""background-color:white;""border:1px solid 	black");
    ui->startver->setStyleSheet("border-radius: 5px;""border:1px solid 	black");
    ui->edgeweight->setStyleSheet("border-radius: 5px;""border:1px solid 	black");
    ui->endver->setStyleSheet("border-radius: 5px;""border:1px solid 	black");
    ui->answer->setStyleSheet("border-radius: 5px;""border:1px solid 	black");
    ui->surecnt->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #009EFA, stop:1 #00D2FC);"
                             "border-radius: 5px;"
                             "border:1px solid 	black");
    ui->addedge->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #009EFA, stop:1 #00D2FC);"
                             "border-radius: 5px;"
                             "border:1px solid 	black");
    ui->giveans->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #009EFA, stop:1 #00D2FC);"
                             "border-radius: 10px;"
                             "border:1px solid 	black");
}

Form::~Form()
{
    delete ui;
}

void Form::on_surecnt_clicked()
{
    np = ui->count->text().toInt();
}

void Form::on_addedge_clicked()
{
    int x, y, z;
    x = ui->startver->text().toInt();
    y = ui->endver->text().toInt();
    z = ui->edgeweight->text().toInt();
    edgep[x].push_back(node(y, z));
    edgep[y].push_back(node(x, z));
}

void Form::on_giveans_clicked()
{
    QString answ = QString::number(Prim());
    ui->answer->setText(answ);
}
