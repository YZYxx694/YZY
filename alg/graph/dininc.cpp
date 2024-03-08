#include "dininc.h"
#include "ui_dininc.h"
#include <limits>
#include <iostream>
#include <queue>

const int V = 1010;
const int E = 101000;

struct FlowGraph {
    int s, t, vtot;
    int head[V], etot;
    int dis[V], cur[V];	//当前弧优化
    struct edge {
        int v, nxt;
        int f;
    } e[E * 2];
    void addedge(int u, int v, int f)
    {
        e[etot] = {v, head[u], f};
        head[u] = etot++;
        e[etot] = {u, head[v], 0};
        head[v] = etot++;
    }
    bool bfs() {
        for (int i = 1; i <= vtot; i++)
        {
            dis[i] = 0;
            cur[i] = head[i];
        }
        std::queue<int> q;
        q.push(s); dis[s] = 1;
        while (q.size())
        {
            int u = q.front();
            q.pop();
            for (int i = head[u]; ~i; i = e[i].nxt)
            {
                if (e[i].f && !dis[e[i].v]) {
                    int v = e[i].v;
                    dis[v] = dis[u] + 1;
                    if (v == t) return true;
                    q.push(v);
                }
            }
        }
        return false;
    }
    int dfs(int u, int m)
    {
        if (u == t) return m;
        int flow = 0;
        for (int i = cur[u]; ~i; cur[u] = i = e[i].nxt)
        {
            if (e[i].f && dis[e[i].v] == dis[u] + 1)
            {
                int f = dfs(e[i].v, std::min(m, e[i].f));
                e[i].f -= f;
                e[i ^ 1].f += f;
                m -= f;
                flow += f;
                if (!m) break;
            }
        }
        if (!flow) dis[u] = -1;
        return flow;
    }
    int dinic()
    {
        int flow = 0;
        while (bfs())
        {
            flow += dfs(s, std::numeric_limits<int>::max());
        }
        return flow;
    }
    void init(int s_, int t_, int vtot_)
    {
        s = s_;
        t = t_;
        vtot = vtot_;
        etot = 0;
        for (int i = 1; i <= vtot; i++) head[i] = -1;
    }
};

int fln, fls, flt;
FlowGraph g;

dininc::dininc(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::dininc)
{
    ui->setupUi(this);
    this->setStyleSheet("background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #2C73D2, stop:1 #008E9B);");
    ui->calcmaxflow->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #009EFA, stop:1 #00D2FC);"
                             "border-radius: 10px;"
                             "border:1px solid 	black");
    ui->addedge->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #009EFA, stop:1 #00D2FC);"
                             "border-radius: 5px;"
                             "border:1px solid 	black");
    ui->surense->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #009EFA, stop:1 #00D2FC);"
                             "border-radius: 5px;"
                             "border:1px solid 	black");

    ui->edgestv->setStyleSheet("border-radius: 5px;""border:1px solid 	black");
    ui->edgeedv->setStyleSheet("border-radius: 5px;""border:1px solid 	black");
    ui->maxflow->setStyleSheet("border-radius: 5px;""border:1px solid 	black");
    ui->edgeflow->setStyleSheet("border-radius: 5px;""border:1px solid 	black");
    ui->vercnt->setStyleSheet("border-radius: 5px;""border:1px solid 	black");
    ui->startv->setStyleSheet("border-radius: 5px;""border:1px solid 	black");
    ui->endv->setStyleSheet("border-radius: 5px;""border:1px solid 	black");
}

dininc::~dininc()
{
    delete ui;
}

void dininc::on_calcmaxflow_clicked()
{
    QString ans = QString::number(g.dinic());
    ui->maxflow->setText(ans);
}

void dininc::on_addedge_clicked()
{
    int x, y, z;
    x = ui->edgestv->text().toInt();
    y = ui->edgeedv->text().toInt();
    z = ui->edgeflow->text().toInt();
    g.addedge(x, y, z);
}

void dininc::on_surense_clicked()
{
    fln = ui->vercnt->text().toInt();
    fls = ui->startv->text().toInt();
    flt = ui->endv->text().toInt();
    g.init(fls, flt, fln);
}
