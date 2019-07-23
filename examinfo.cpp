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
	this->length = query.size();

	while (query.next())
	{
		// EXAMID,CLASSNUMBER,FILELOCATION
		ExamInfoNode* node = new ExamInfoNode();
		node->setId(query.value(0).toInt());
	}
}

void ExamInfo::saveAdd()
{
}

void ExamInfo::saveDelete()
{
}
