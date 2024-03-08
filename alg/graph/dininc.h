#ifndef DININC_H
#define DININC_H

#include <QWidget>

namespace Ui {
class dininc;
}

class dininc : public QWidget
{
    Q_OBJECT

public:
    explicit dininc(QWidget *parent = nullptr);
    ~dininc();

private slots:
    void on_calcmaxflow_clicked();

    void on_addedge_clicked();

    void on_surense_clicked();

private:
    Ui::dininc *ui;
};

#endif // DININC_H
