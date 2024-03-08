#include "shortestpath.h"
#include "ui_shortestpath.h"
#include <iostream>
#include <utility>
#include <set>
#include <vector>

int n, m, dist[100001];
struct Node{
    int y,v;
    Node(int _y,int _v){y = _y;v = _v;};
};

std::vector<Node> edge[100001];
int st, ed;

inline void dijkstra(int s,int t)
{
    memset(dist,127,sizeof(dist));
    std::set<std::pair<int, int> > q;
    dist[s] = 0;
    q.clear();
    for(int i = 1; i<=n; i++)
    {
        q.insert(std::make_pair(dist[i],i));
    }
    for(; !q.empty();)
    {
        int x = q.begin()->second;
        if(x == t || dist[x] > 1<<30)
        {
            break;
        }
        q.erase(q.begin());
        for(auto i:edge[x])
        {
            if(dist[x] + i.v < dist[i.y])
            {
                q.erase({dist[i.y],i.y});
                dist[i.y] = dist[x] + i.v;
                q.insert({dist[i.y],i.y});
            }
        }
    }
}

shortestpath::shortestpath(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::shortestpath)
{
    ui->setupUi(this);
    this->setStyleSheet("background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #2C73D2, stop:1 #008E9B);");
    ui->frame->setFrameShape(QFrame::StyledPanel);
    ui->pushButton_3->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #009EFA, stop:1 #00D2FC);"
                             "border-radius: 5px;"
                             "border:1px solid 	black");
    ui->pushButton_2->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #009EFA, stop:1 #00D2FC);"
                             "border-radius: 5px;"
                             "border:1px solid 	black");
    ui->pushButton_4->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #009EFA, stop:1 #00D2FC);"
                             "border-radius: 5px;"
                             "border:1px solid 	black");
    ui->pushButton_5->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #009EFA, stop:1 #00D2FC);"
                             "border-radius: 5px;"
                             "border:1px solid 	black");
    ui->pushButton->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #009EFA, stop:1 #00D2FC);"
                             "border-radius: 5px;"
                             "border:1px solid 	black");
    ui->count->setStyleSheet("border-radius: 5px;""background-color:white;""border:1px solid 	black");
    ui->ver1->setStyleSheet("border-radius: 5px;""border:1px solid 	black");
    ui->ver2->setStyleSheet("border-radius: 5px;""border:1px solid 	black");
    ui->nodiredge->setStyleSheet("border-radius: 5px;""border:1px solid 	black");
    ui->dirver1->setStyleSheet("border-radius: 5px;""border:1px solid 	black");
    ui->dirver2->setStyleSheet("border-radius: 5px;""border:1px solid 	black");
    ui->diredge->setStyleSheet("border-radius: 5px;""border:1px solid 	black");
    ui->startver->setStyleSheet("border-radius: 5px;""border:1px solid 	black");
    ui->endver->setStyleSheet("border-radius: 5px;""border:1px solid 	black");
    ui->ansdis->setStyleSheet("border-radius: 5px;""border:1px solid 	black");

}

shortestpath::~shortestpath()
{
    delete ui;
}


void shortestpath::on_pushButton_clicked()
{
    n = ui->count->text().toInt();
}

void shortestpath::on_pushButton_2_clicked()
{
    int x, y, z;
    x = ui->ver1->text().toInt();
    y = ui->ver2->text().toInt();
    z = ui->nodiredge->text().toInt();
    edge[x].push_back(Node(y, z));
    edge[y].push_back(Node(x, z));
}

void shortestpath::on_pushButton_3_clicked()
{
    int x, y, z;
    x = ui->dirver1->text().toInt();
    y = ui->dirver2->text().toInt();
    z = ui->diredge->text().toInt();
    edge[x].push_back(Node(y, z));
}

void shortestpath::on_pushButton_4_clicked()
{
    dijkstra(st, ed);
    QString ans = QString::number(dist[ed]);
    ui->ansdis->setText(ans);
}

void shortestpath::on_pushButton_5_clicked()
{
    st = ui->startver->text().toInt();
    ed = ui->endver->text().toInt();
}
