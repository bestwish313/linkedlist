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

    struct node {
        int data;
        node *next;
    };

    void initNode(node *,int n);
    void addNode(node *, int);
    void deleteNode(node *, int);
    void insertFront(node **, int);
    void searchNode(node *, int);
    void reverse(node **);
    void copyLinkedList(node *, node **);
    void deleteLinkedList(node **);
    void display(node *);

private:
    Ui::MainWindow *ui;

    node *head;
};

#endif // MAINWINDOW_H
