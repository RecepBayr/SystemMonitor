#ifndef SYSTEMMONITOR_H
#define SYSTEMMONITOR_H

#include <QMainWindow>

namespace Ui {
    class SystemMonitor;
}

class SystemMonitor : public QMainWindow
{
    Q_OBJECT

public:
    explicit SystemMonitor(QWidget *parent = 0);
    ~SystemMonitor();
    int a;

public slots:


private:
    Ui::SystemMonitor *ui;

private slots:
    void on_SM_clicked();
};

#endif // SYSTEMMONITOR_H
