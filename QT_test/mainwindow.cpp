#include "mainwindow.h"
#include "ui_mainwindow.h"

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

}


void MainWindow::on_pushButton_2_clicked()
{

}


void MainWindow::on_pushButton_3_clicked()
{

}


void MainWindow::on_pushButton_4_clicked()
{
    close();
}

void MainWindow::on_actionOpen_input_folder_triggered()
{

}


void MainWindow::on_actionOpen_output_folder_triggered()
{

}


void MainWindow::on_actionConvert_triggered()
{

}


void MainWindow::on_actionAbout_triggered()
{
    QMessageBox::about(this, "About", "yes");
}


void MainWindow::on_actionHelp_triggered()
{

}


void MainWindow::on_actionExit_triggered()
{
    close();
}

