#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <iostream>

QT_BEGIN_NAMESPACE
namespace Ui
{
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
  Q_OBJECT

public:
  MainWindow(QWidget* parent = nullptr);
  ~MainWindow();

private slots:



  void on_popbutton_clicked();

  void on_popbutton_2_clicked();

  void on_lineEdit_returnPressed();

  void on_pushButton_clicked();

private:
  Ui::MainWindow* ui;
};
#endif  // MAINWINDOW_H
