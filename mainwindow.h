#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QCheckBox>
#include <QLabel>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void onCheckBoxStateChanged(int state); // 暂时保留旧签名，后续更新

private:
    QCheckBox *checkBox;
    QLabel *label;
};

#endif
