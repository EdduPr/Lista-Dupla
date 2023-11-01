#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMessageBox>
#include "listallde.h"
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:


    void on_pushButton_inserirInicio_clicked();

    void on_pushButton_acessarInicio_clicked();

    void on_pushButton_retirarInicio_clicked();

    void on_pushButton_inserirFInal_clicked();

    void on_pushButton_acessarFinal_clicked();

    void on_pushButton_retirarFinal_clicked();

    void on_pushButton_clicked();

    void on_escuta_clicked();

private:
    Ui::MainWindow *ui;
    edu::ListaLLDE *p1;
};
#endif
