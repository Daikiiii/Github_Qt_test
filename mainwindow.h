#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void check_draw();

private slots:
    void on_bye_clicked();

    void on_hi_clicked();

    void on_day_actionTriggered(int action);

    void on_liset_button_clicked();
    void on_spinBox_valueChanged(const QString &arg1);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
