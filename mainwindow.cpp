#include "mainwindow.h"
#include <QVBoxLayout>
#include <QWidget>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setWindowTitle("Qt First Project");
    resize(400, 300);

    // 创建中心 widget 和布局
    QWidget *centralWidget = new QWidget(this);
    QVBoxLayout *layout = new QVBoxLayout(centralWidget);

    // 创建开关按钮
    checkBox = new QCheckBox("开启显示", this);
    layout->addWidget(checkBox);

    // 创建标签
    label = new QLabel("", this);
    layout->addWidget(label);

    // 设置布局
    centralWidget->setLayout(layout);
    setCentralWidget(centralWidget);

    // 连接信号和槽（使用过时信号，稍后更新）
    connect(checkBox, &QCheckBox::stateChanged, this, &MainWindow::onCheckBoxStateChanged);
}

MainWindow::~MainWindow()
{
    delete checkBox;
    delete label;
}

void MainWindow::onCheckBoxStateChanged(int state)
{
    if (state == Qt::Checked) {
        label->setText("任恩泽的首个Qt项目");
    } else {
        label->setText("");
    }
}
