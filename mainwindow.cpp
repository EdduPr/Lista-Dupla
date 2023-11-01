#include "mainwindow.h"
#include "listallde.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    try {
        p1 = new edu::ListaLLDE();
    }catch (std::bad_alloc &e)
    {
        QMessageBox::information(this,"erro","Nova lista nao pode ser criada esapco insuficente");
    }
}

MainWindow::~MainWindow()
{
    delete ui;
    delete p1;
}

void MainWindow::on_pushButton_inserirInicio_clicked()
{
    try
    {
        p1->inserirInicio(ui->lineEdit_Valor->text().toInt());
        ui->lineEdit_Iniciofim->setText(p1->toSTringIniciofim());
        ui->lineEdit_fiminicio->setText(p1->toStirngfimInicio());

    }catch (QString erro)
    {
        QMessageBox::information(this,"erro",erro);
        ui->lineEdit_Iniciofim->clear();
        ui->lineEdit_fiminicio->clear();
    }
}


void MainWindow::on_pushButton_acessarInicio_clicked()
{
    try
    {
        ui->lineEdit_Iniciofim->setText(QString::number(p1->acessarInicio()));
        ui->lineEdit_fiminicio->setText(QString::number(p1->acessarInicio()));

    } catch (QString erro)
    {
        QMessageBox::information(this,"erro",erro);
        ui->lineEdit_Iniciofim->clear();
        ui->lineEdit_fiminicio->clear();
    }
}


void MainWindow::on_pushButton_retirarInicio_clicked()
{
    try
    {
        p1->retirarInicio();
        if(p1->estaVazia())
        {
            ui->lineEdit_Iniciofim->setText("Lista está vazia");
            ui->lineEdit_fiminicio->setText("Lista está vazia");
            return;
        }
        ui->lineEdit_Iniciofim->setText(p1->toSTringIniciofim());
        ui->lineEdit_fiminicio->setText(p1->toStirngfimInicio());
    }catch (QString erro)
    {
        QMessageBox::information(this,"erro",erro);
        ui->lineEdit_Iniciofim->clear();
        ui->lineEdit_fiminicio->clear();
    }
}


void MainWindow::on_pushButton_inserirFInal_clicked()
{
    try
    {
        p1->inserirFim(ui->lineEdit_Valor->text().toInt());
        ui->lineEdit_Iniciofim->setText(p1->toSTringIniciofim());
        ui->lineEdit_fiminicio->setText(p1->toStirngfimInicio());

    }catch (QString erro)
    {
        QMessageBox::information(this,"erro",erro);
        ui->lineEdit_Iniciofim->clear();
        ui->lineEdit_fiminicio->clear();
    }
}


void MainWindow::on_pushButton_acessarFinal_clicked()
{
    try
    {
        ui->lineEdit_Iniciofim->setText(QString::number(p1->acessarFim()));
        ui->lineEdit_fiminicio->setText(QString::number(p1->acessarFim()));

    } catch (QString erro)
    {
        QMessageBox::information(this,"erro",erro);
        ui->lineEdit_Iniciofim->clear();
        ui->lineEdit_fiminicio->clear();
    }
}


void MainWindow::on_pushButton_retirarFinal_clicked()
{
    try
    {
        p1->retirarFim();

        if(p1->estaVazia())
        {
            ui->lineEdit_Iniciofim->setText("Lista está vazia");
                ui->lineEdit_fiminicio->setText("Lista está vazia");
                return;
        }
        ui->lineEdit_Iniciofim->setText(p1->toSTringIniciofim());
        ui->lineEdit_fiminicio->setText(p1->toStirngfimInicio());
    }catch (QString erro)
    {
        QMessageBox::information(this,"erro",erro);
        ui->lineEdit_Iniciofim->clear();
        ui->lineEdit_fiminicio->clear();
    }
}





