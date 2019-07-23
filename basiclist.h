#ifndef BASICLIST_H
#define BASICLIST_H
#include <QtSql>
#include "node.h"

QSqlDatabase BasicList::db = QSqlDatabase::addDatabase("QSQLITE");

class BasicList
{
public:
    BasicList();
	virtual ~BasicList();
	virtual void init();
	virtual void clear();
	virtual void save();
	virtual void saveAdd();
	virtual void saveDelete();
	virtual void addNode(Node* node);
	virtual void deleteNode(int id);
	virtual Node* getNode(int id);
protected:
	static QSqlDatabase db;
	Node* list = nullptr; // head node.
	int length = 0;
};

#endif // BASICLIST_H
