#include "userinfo.h"

UserInfo::UserInfo()
{

}

UserInfo::~UserInfo()
{
}

void UserInfo::init()
{
	if (!this->db.open())
	{
		qDebug() << "Database open error.";
		return;
	}
	qDebug() << "Database open success.";
	QSqlQuery query;
	query.exec("SELECT * FROM `USERS`;");
	// this->length = query.size();

	// ID passwd name type classnumber
	while (query.next())
	{
		UserInfoNode* node = new UserInfoNode();
        node->setId(query.value(0).toInt());
		node->setPassword(query.value(1).toString());
		node->setName(query.value(2).toString());
        node->setType(query.value(3).toInt());
        node->setClassNumber(query.value(4).toInt());
		this->addNode(node);
	}

	this->db.close();
	qDebug() << "Database close success.";
}

void UserInfo::saveAdd()
{
	qDebug() << "Save add user.";
	if (!this->db.open())
	{
		qDebug() << "Database open error";
		return;
	}
	qDebug() << "Database open success";

	QString statement;
	QSqlQuery query;
	
	UserInfoNode* node = (UserInfoNode*)this->list->getNext();
	while (node != nullptr)
	{
		// ID passwd name type classnumber
		statement = QString("insert into users "
			"values (%1,'%2','%3',%4,%5);")
            .arg(node->getId()).arg(node->getPassword()).arg(node->getName()).arg(node->getType()).arg(node->getClassNumber());
		qDebug() << statement << endl;
		query.exec(statement);

		node = (UserInfoNode*)node->getNext();
	}

	db.close();
}

void UserInfo::saveDelete()
{
	qDebug() << "saveDelete";
	if (!db.open())
	{
		qDebug() << "Database open error";
		return;
	}
	qDebug() << "Database open success";

	QString statement;
	QSqlQuery query;
	UserInfoNode* node = (UserInfoNode*)this->list->getNext();

	while (node != nullptr)
	{
		statement = QString("delete from users where id = %1;").arg(node->getId());
		qDebug() << statement << endl;
		query.exec(statement);
		node = (UserInfoNode*)node->getNext();
	}

	db.close();
}
