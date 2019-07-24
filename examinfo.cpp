#include "examinfo.h"

ExamInfo::ExamInfo()
{

}

ExamInfo::~ExamInfo()
{
}

void ExamInfo::init()
{
	if (!this->db.open())
	{
		qDebug() << "Database open error.";
		return;
	}
	qDebug() << "Database open success";

	QSqlQuery query;
	query.exec("SELECT * FROM `EXAMSDATA`;");
	// this->length = query.size();

	while (query.next())
	{
		// EXAMID,CLASSNUMBER,FILELOCATION
		ExamInfoNode* node = new ExamInfoNode();
		node->setId(query.value(0).toInt());
		node->setClassNumber(query.value(1).toInt());
		node->setFileLocation(query.value(2).toString());
		this->addNode(node);
		//qDebug() << node->getId() << node->getClassNumber() << node->getFileLocation() << endl;
	}

	this->db.close();
	qDebug() << "Database close success" << endl;

}

void ExamInfo::saveAdd()
{
	qDebug() << "saveAdd examInfo" << endl;
	if (!this->db.open())
	{
		qDebug() << "Database open error" << endl;
		return;
	}

	qDebug() << "Database open success" << endl;
	QString statement;
	QSqlQuery query;
	ExamInfoNode* node = (ExamInfoNode*)this->list->getNext();

	while (node != nullptr)
	{
		statement = QString("INSERT INTO `EXAMSDATA` (EXAMID, CLASSNUMBER, FILELOCATION)"
			" VALUES(%1, %2, '%3'); ").arg(node->getId()).arg(node->getClassNumber()).arg(node->getFileLocation());
		qDebug() << statement << endl;
		query.exec(statement);
		node = (ExamInfoNode*)node->getNext();
	}
	this->db.close();
}

void ExamInfo::saveDelete()
{
	qDebug() << "saveDelete examinfo" << endl;
	if (!db.open())
	{
		qDebug() << "Database open error" << endl;
		return;
	}
	qDebug() << "Database open success" << endl;

	QString statement;
	QSqlQuery query;
	ExamInfoNode* node = (ExamInfoNode*)this->list->getNext();
	
	while (node != nullptr)
	{
		statement = QString("delete from EXAMSDATA where EXAMID = %1;").arg(node->getId());
		qDebug() << statement << endl;
		query.exec(statement);
		node = (ExamInfoNode*)node->getNext();
	}

	db.close();
}
