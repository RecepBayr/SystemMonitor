#include "systemmonitor.h"
#include "ui_systemmonitor.h"
#include <QString>
#include <iostream>
#include <QPushButton>
#include <QDebug>
#include <QComboBox>
#include <QDateTime>
#include <unistd.h>
#include <QCloseEvent>
#include <QEventLoop>
#include <QPixmap>
#include <QCoreApplication>
#include <QMessageBox>


QString bayram;
SystemMonitor::SystemMonitor(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SystemMonitor)
{
    ui->setupUi(this);
    QPixmap bkgnd("/root/rcp/SystemMonitor/leidos.png");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);
    ui->comboBox->addItem("Please select MV3D");
    ui->comboBox->addItem("ED_01");
    ui->comboBox->addItem("ED_02");
    ui->comboBox->addItem("ED_03");
    ui->comboBox->addItem("ED_04");
    ui->comboBox->addItem("ED_05");
    ui->comboBox->addItem("ED_06");
    ui->comboBox->addItem("ED_09");
    ui->comboBox->addItem("ED_10");
    ui->comboBox->addItem("ED_11");
    ui->comboBox->addItem("ED_12");
    ui->comboBox->addItem("ED_13");
    ui->comboBox->addItem("ED_14");
    ui->comboBox->addItem("ED_15");
    ui->comboBox->addItem("ED_16");
    ui->comboBox->addItem("ED_17");
    ui->comboBox->addItem("ED_18");
    ui->comboBox->addItem("ED_19");
    ui->comboBox->addItem("ED_20");
    ui->comboBox->addItem("ED_23");
    ui->comboBox->addItem("ED_24");
    ui->comboBox->addItem("ED_25");
    ui->comboBox->addItem("ED_26");
    ui->comboBox->addItem("ED_27");
    ui->comboBox->addItem("ED_28");
}


SystemMonitor::~SystemMonitor()
{
    delete ui;
}

void SystemMonitor::on_SM_clicked()
{
   char* con_char = new char[bayram.length() + 1];

   strcpy(con_char,bayram.toLatin1().constData());

   system(con_char);

   a = ui->comboBox->currentIndex();

   if(a==0)    {QMessageBox::information(this, "Information", "Please select true MV3D");
   }
   if(a==1)    {bayram = ("ssh -qo ConnectTimeout=1 -Y 10.1.10.37" " ssh -qo ConnectTimeout=1 -Y scc /opt/eds/bin/sm & disown");
   }
   if(a==1)    {ui->label->setText("ED_01 System Monitor is opening.");
   }
   if(a==2)    {bayram = ("ssh -qo ConnectTimeout=1 -Y 10.1.10.40" " ssh -qo ConnectTimeout=1 -Y scc /opt/eds/bin/sm & disown");
   }
   if(a==2)    {ui->label->setText("ED_02 System Monitor is opening.");
   }
   if(a==3)    {bayram = ("ssh -qo ConnectTimeout=1 -Y 10.1.10.35" " ssh -qo ConnectTimeout=1 -Y scc /opt/eds/bin/sm & disown");
   }
   if(a==3)    {ui->label->setText("ED_03 System Monitor is opening.");
   }
   if(a==4)    {bayram = ("ssh -qo ConnectTimeout=1 -Y 10.1.10.36" " ssh -qo ConnectTimeout=1 -Y scc /opt/eds/bin/sm & disown");
   }
   if(a==4)    {ui->label->setText("ED_04 System Monitor is opening.");
   }
   if(a==5)    {bayram = ("ssh -qo ConnectTimeout=1 -Y 10.1.10.38" " ssh -qo ConnectTimeout=1 -Y scc /opt/eds/bin/sm & disown");
   }
   if(a==5)    {ui->label->setText("ED_05 System Monitor is opening.");
   }
   if(a==6)    {bayram = ("ssh -qo ConnectTimeout=1 -Y 10.1.10.39" " ssh -qo ConnectTimeout=1 -Y scc /opt/eds/bin/sm & disown");
   }
   if(a==6)    {ui->label->setText("ED_06 System Monitor is opening.");
   }
   if(a==7)    {bayram = ("ssh -qo ConnectTimeout=1 -Y 10.1.10.25" " ssh -qo ConnectTimeout=1 -Y scc /opt/eds/bin/sm & disown");
   }
   if(a==7)    {ui->label->setText("ED_09 System Monitor is opening.");
   }
   if(a==8)    {bayram = ("ssh -qo ConnectTimeout=1 -Y 10.1.10.17" " ssh -qo ConnectTimeout=1 -Y scc /opt/eds/bin/sm & disown");
   }
   if(a==8)    {ui->label->setText("ED_10 System Monitor is opening.");
   }
   if(a==9)    {bayram = ("ssh -qo ConnectTimeout=1 -Y 10.1.10.23" " ssh -qo ConnectTimeout=1 -Y scc /opt/eds/bin/sm & disown");
   }
   if(a==9)    {ui->label->setText("ED_11 System Monitor is opening.");
   }
   if(a==10)    {bayram = ("ssh -qo ConnectTimeout=1 -Y 10.1.10.22" " ssh -qo ConnectTimeout=1 -Y scc /opt/eds/bin/sm & disown");
   }
   if(a==10)    {ui->label->setText("ED_12 System Monitor is opening.");
   }
   if(a==11)    {bayram = ("ssh -qo ConnectTimeout=1 -Y 10.1.10.33" " ssh -qo ConnectTimeout=1 -Y scc /opt/eds/bin/sm & disown");
   }
   if(a==11)    {ui->label->setText("ED_13 System Monitor is opening.");
   }
   if(a==12)    {bayram = ("ssh -qo ConnectTimeout=1 -Y 10.1.10.32" " ssh -qo ConnectTimeout=1 -Y scc /opt/eds/bin/sm & disown");
   }
   if(a==12)    {ui->label->setText("ED_14 System Monitor is opening.");
   }
   if(a==13)    {bayram = ("ssh -qo ConnectTimeout=1 -Y 10.1.10.20" " ssh -qo ConnectTimeout=1 -Y scc /opt/eds/bin/sm & disown");
   }
   if(a==13)    {ui->label->setText("ED_15 System Monitor is opening.");
   }
   if(a==14)    {bayram = ("ssh -qo ConnectTimeout=1 -Y 10.1.10.28" " ssh -qo ConnectTimeout=1 -Y scc /opt/eds/bin/sm & disown");
   }
   if(a==14)    {ui->label->setText("ED_16 System Monitor is opening.");
   }
   if(a==15)    {bayram = ("ssh -qo ConnectTimeout=1 -Y 10.1.10.21" " ssh -qo ConnectTimeout=1 -Y scc /opt/eds/bin/sm & disown");
   }
   if(a==15)    {ui->label->setText("ED_17 System Monitor is opening.");
   }
   if(a==16)    {bayram = ("ssh -qo ConnectTimeout=1 -Y 10.1.10.26" " ssh -qo ConnectTimeout=1 -Y scc /opt/eds/bin/sm & disown");
   }
   if(a==16)    {ui->label->setText("ED_18 System Monitor is opening.");
   }
   if(a==17)    {bayram = ("ssh -qo ConnectTimeout=1 -Y 10.1.10.27" " ssh -qo ConnectTimeout=1 -Y scc /opt/eds/bin/sm & disown");
   }
   if(a==17)    {ui->label->setText("ED_19 System Monitor is opening.");
   }
   if(a==18)    {bayram = ("ssh -qo ConnectTimeout=1 -Y 10.1.10.24" " ssh -qo ConnectTimeout=1 -Y scc /opt/eds/bin/sm & disown");
   }
   if(a==18)    {ui->label->setText("ED_20 System Monitor is opening.");
   }
   if(a==19)    {bayram = ("ssh -qo ConnectTimeout=1 -Y 10.1.10.44" " ssh -qo ConnectTimeout=1 -Y scc /opt/eds/bin/sm & disown");
   }
   if(a==19)    {ui->label->setText("ED_23 System Monitor is opening.");
   }
   if(a==20)    {bayram = ("ssh -qo ConnectTimeout=1 -Y 10.1.10.46" " ssh -qo ConnectTimeout=1 -Y scc /opt/eds/bin/sm & disown");
   }
   if(a==20)    {ui->label->setText("ED_24 System Monitor is opening.");
   }
   if(a==21)    {bayram = ("ssh -qo ConnectTimeout=1 -Y 10.1.10.43" " ssh -qo ConnectTimeout=1 -Y scc /opt/eds/bin/sm & disown");
   }
   if(a==21)    {ui->label->setText("ED_25 System Monitor is opening.");
   }
   if(a==22)    {bayram = ("ssh -qo ConnectTimeout=1 -Y 10.1.10.45" " ssh -qo ConnectTimeout=1 -Y scc /opt/eds/bin/sm & disown");
   }
   if(a==22)    {ui->label->setText("ED_26 System Monitor is opening.");
   }
   if(a==23)    {bayram = ("ssh -qo ConnectTimeout=1 -Y 10.1.10.41" " ssh -qo ConnectTimeout=1 -Y scc /opt/eds/bin/sm & disown");
   }
   if(a==23)    {ui->label->setText("ED_27 System Monitor is opening.");
   }
   if(a==24)    {bayram = ("ssh -qo ConnectTimeout=1 -Y 10.1.10.42" " ssh -qo ConnectTimeout=1 -Y scc /opt/eds/bin/sm & disown");
   }
   if(a==24)    {ui->label->setText("ED_28 System Monitor is opening.");
   }

qDebug() << bayram;

//    recep = ui->comboBox->currentText().remove("3D00");

//    bayram = ("ssh -qo ConnectTimeout=1 -Y 10.1.10."+ recep + " ssh -qo ConnectTimeout=1 -Y scc /opt/eds/bin/sm & disown");
//    ui->label->setText("3D00" + recep + " ""System Monitor aciliyor");

}




