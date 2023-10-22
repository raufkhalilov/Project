#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QString text = "В новой прошивке устранены ошибки в работе Wi-Fi модуля.";


    QFont font;
    font.setFamily("Arial");
    font.setPointSize(14);
    font.setBold(true);

    text = "<span style='font-family:" + font.family() + "; font-size:" + QString::number(font.pointSize()) + "pt; font-weight:" + (font.bold() ? "bold" : "normal") + "'>" + text + "</span>";

    QMessageBox::information(this, "Подробная информация", text);
}


void MainWindow::on_pushButton_2_clicked()
{
    QString text2 = "Обновление включает в себя улучшенные алгоритмы батареи, что продлит время автономной работы устройства.";

    QFont font;
    font.setFamily("Arial");
    font.setPointSize(14);
    font.setBold(true);

    text2 = "<span style='font-family:" + font.family() + "; font-size:" + QString::number(font.pointSize()) + "pt; font-weight:" + (font.bold() ? "bold" : "normal") + "'>" + text2 + "</span>";

    QMessageBox::information(this, "Подробная информация", text2);
}

