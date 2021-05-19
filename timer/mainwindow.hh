#ifndef MAINWINDOW_HH
#define MAINWINDOW_HH

#include <QMainWindow>
#include <QTimer>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    QTimer* timer;

private slots:
    void on_start_button_clicked();
    void on_stop_button_clicked();
    void on_reset_button_clicked();
    void on_close_button_clicked();
    void on_timer_timeout();



private:
    Ui::MainWindow *ui;

};

#endif
