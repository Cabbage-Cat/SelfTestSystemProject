#ifndef BASICLIST_H
#define BASICLIST_H
//链表基类
#include <QtSql>
#include "node.h"

class BasicList
{
public:
    BasicList();
	virtual ~BasicList();
	virtual void init(); //初始化，从数据库中读对应信息
	virtual void clear(); //清空当前链表
	virtual void save(); //保存当前链表中内容到数据库(添加/删除)

	virtual void saveAdd(); //将链表中内容添加到数据库
	virtual void saveDelete(); //将链表中内容从数据库中移除
	virtual void addNode(Node* node); //给链表添加节点
	virtual void deleteNode(int id); //从链表中删除ID为id的节点
	virtual Node* getNode(int id); //从链表中获取ID为id的节点的指针
	virtual int getLength(); //获取链表的长度
protected:
	static QSqlDatabase db; //外部数据库静态变量，程序中只存在一个。
	Node* list = nullptr; // head node.
	int length = 0; //链表的长度
};

#endif // BASICLIST_H
