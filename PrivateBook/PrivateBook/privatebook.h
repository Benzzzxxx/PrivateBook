#ifndef PRIVATEBOOK_H
#define PRIVATEBOOK_H

#include <QtWidgets/QMainWindow>
#include "ui_privatebook.h"

class PrivateBook : public QMainWindow
{
	Q_OBJECT

public:
	PrivateBook(QWidget *parent = 0);
	~PrivateBook();

private:
	Ui::PrivateBookClass ui;
};

#endif // PRIVATEBOOK_H
