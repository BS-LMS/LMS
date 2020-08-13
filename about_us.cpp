#include "about_us.h"
#include "ui_about_us.h"
#include"mainwindow.h"
About_us::About_us(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::About_us)
{
    ui->setupUi(this);

    QPixmap pix("C:/Users/albaloo/Documents/mainProjectTerm2/erfanN.jpeg");
        ui->label->setPixmap(pix);


        QPixmap pix1("C:/Users/albaloo/Documents/mainProjectTerm2/aliP.jpeg");
       ui->label_3->setPixmap(pix1);

       QPixmap pix2("C:/Users/albaloo/Documents/mainProjectTerm2/mohamadM.jpeg");
       ui->label_4->setPixmap(pix2);


        QPalette pal = palette();
        // set black background
        pal.setColor(QPalette::Background, Qt::blue);
        this->setAutoFillBackground(true);
        this->setPalette(pal);
        this->setWindowTitle("Main Page");
}

About_us::~About_us()
{
    delete ui;
}

void About_us::on_back_clicked()
{
    this->close();
    MainWindow* mnw=new MainWindow();
    mnw->show();
}
