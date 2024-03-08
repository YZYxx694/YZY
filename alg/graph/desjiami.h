#ifndef DESJIAMI_H
#define DESJIAMI_H

#include <QWidget>

namespace Ui {
class desjiami;
}

class desjiami : public QWidget
{
    Q_OBJECT

public:
    explicit desjiami(QWidget *parent = nullptr);
    ~desjiami();

private slots:
    void on_jiami_clicked();

    void on_jiemi_clicked();

private:
    Ui::desjiami *ui;
};

#endif // DESJIAMI_H
