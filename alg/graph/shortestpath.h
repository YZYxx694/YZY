#ifndef SHORTESTPATH_H
#define SHORTESTPATH_H

#include <QWidget>

namespace Ui {
class shortestpath;
}

class shortestpath : public QWidget
{
    Q_OBJECT

public:
    explicit shortestpath(QWidget *parent = nullptr);
    ~shortestpath();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::shortestpath *ui;
};

#endif // SHORTESTPATH_H
