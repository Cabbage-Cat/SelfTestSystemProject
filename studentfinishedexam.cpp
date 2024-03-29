#include "studentfinishedexam.h"

StudentFinishedExam::StudentFinishedExam(int stuId)
{
	this->stuId = stuId;
}

StudentFinishedExam::~StudentFinishedExam()
{
}

bool StudentFinishedExam::haveExamId(int exId)
{
	StudentFinishedExamNode* node = (StudentFinishedExamNode*)this->list->getNext();
	while (node != nullptr)
	{
		if (node->getExamId() == exId)
			return true;
		node = (StudentFinishedExamNode*)node->getNext();
	}
	return false;
}

void StudentFinishedExam::init()
{
	if (!this->db.open())
	{
		qDebug() << "Database open error";
		return;
	}
	qDebug() << "Database open success" << endl; 

	QSqlQuery query;
	QString statement;
	statement = QString("SELECT * FROM `STUDENTEXAMS` WHERE STUID = %1;").arg(this->stuId);
	qDebug() << statement << endl;
	query.exec(statement);
	this->length = query.size();

	while (query.next())
	{
		// STUID EXAMID SCORE
		StudentFinishedExamNode* node = new StudentFinishedExamNode();
		node->setId(query.value(0).toInt());
		node->setExamId(query.value(1).toInt());
		node->setScore(query.value(2).toInt());
		node->setComment(query.value(3).toString());
		this->addNode(node);
	}

	this->db.close();
	qDebug() << "Database close success" << endl;
}

void StudentFinishedExam::saveAdd()
{
	qDebug() << "saveAdd studentFinishedExam: " << stuId;
	if (!db.open())
	{
		qDebug() << "Database open error.";
		return;
	}
	qDebug() << "Database open success.";

	QString statement;
	QSqlQuery query;

	StudentFinishedExamNode* node = (StudentFinishedExamNode*)this->list->getNext();
	
	while (node != nullptr)
	{
		statement = QString("INSERT INTO `STUDENTEXAMS` (STUID, EXAMID, SCORE) "
			"VALUES(%1,%2,%3);").arg(node->getId()).arg(node->getExamId()).arg(node->getScore());
		qDebug() << statement << endl;
		query.exec(statement);

		node = (StudentFinishedExamNode*)node->getNext();
	}

	db.close();
}

void StudentFinishedExam::saveUpdateComment()
{
    qDebug() << "saveUpdate studentFinishedExam: " << stuId;
    if (!db.open())
    {
        qDebug() << "Database open error.";
        return;
    }
    qDebug() << "Database open success.";

    QString statement;
    QSqlQuery query;

    StudentFinishedExamNode* node = (StudentFinishedExamNode*)this->list->getNext();

    while (node != nullptr)
    {
        statement = QString("UPDATE 'STUDENTEXAMS' SET 'COMMENT' = "
                            "'%1' WHERE STUID = %2 AND EXAMID = %3;").arg(node->getComment()).arg(node->getId()).arg(node->getExamId());
        qDebug() << statement << endl;
        query.exec(statement);
        node = (StudentFinishedExamNode*)node->getNext();
    }
}

void StudentFinishedExam::saveDelete()
{
	qDebug() << "saveDelete studentFinishedExam:" << stuId;
	if (!db.open())
	{
		qDebug() << "Database open error";
		return;
	}
	qDebug() << "Database open success";

	QString statement;
	QSqlQuery query;

	StudentFinishedExamNode* node = (StudentFinishedExamNode*)this->list->getNext();
	
	while (node != nullptr)
	{
		statement = QString("delete from 'STUDENTEXAMS' where STUID = %1 and EXAMID = %2;")
			.arg(node->getId()).arg(node->getExamId());
		qDebug() << statement << endl;
		query.exec(statement);

		node = (StudentFinishedExamNode*)node->getNext();
	}

	this->db.close();
}
