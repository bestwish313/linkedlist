#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <iostream>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

   head = new node;
   initNode(head, 10);
   addNode (head, 11);
   addNode (head, 12);
   display(head);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void
MainWindow::
initNode(node *head, int n) {
    head->data = n;
    head->next = NULL;
}

void
MainWindow::
addNode(node *head, int n) {
    node *newNode = new node;
    newNode->data = n;
    newNode->next = NULL;

    node *cur = head;
    while (cur) {
        if (cur->next == NULL) {
            cur->next = newNode;
            return;
        }
        else
            cur = cur->next;
    }
}

void
MainWindow::
insertFront (node **head, int n) {
    node *newNode = new node;
    newNode->data = n;
    newNode->next = *head;
    *head = newNode;
}

void
MainWindow::
display (node *head) {

    node *cur = head;
    while (cur) {
        std::cout << cur->data << std::endl;
        cur = cur->next;
    }
}
