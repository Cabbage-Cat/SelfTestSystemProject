#include "node.h"

bool Node::compare(int id)
{
	if (this->id == id)
		return true;
	return false;
}

int Node::getId()
{
	return 0;
}

void Node::setId(int id)
{
	this->id = id;
}

Node* Node::getNext()
{
	return this->next;
}

void Node::setNext(Node* node)
{
	this->next = node;
}

QString UserInfoNode::getPassword()
{
	return this->password;
}

void UserInfoNode::setPassword(QString passwd)
{
	this->password = passwd;
}

QString UserInfoNode::getName()
{
	return this->name;
}

void UserInfoNode::setName(QString name)
{
	this->name = name;
}

int UserInfoNode::getType()
{
	return this->TYPE;
}

void UserInfoNode::setType(int type)
{
	this->TYPE = type;
}

int UserInfoNode::getClassNumber()
{
	return this->classNumber;
}

void UserInfoNode::setClassNumber(int classNumber)
{
	this->classNumber = classNumber;
}

int ExamInfoNode::getClassNumber()
{
	return this->classNumber;
}

void ExamInfoNode::setClassNumber(int classNumber)
{
	this->classNumber = classNumber;
}

QString ExamInfoNode::getFileLocation()
{
	return this->fileLocation;
}

void ExamInfoNode::setFileLocation(QString location)
{
	this->fileLocation = location;
}

int StudentFinishedExamNode::getExamId()
{
	return this->examId;
}

void StudentFinishedExamNode::setExamId(int examId)
{
	this->examId = examId;
}

int StudentFinishedExamNode::getScore()
{
	return this->score;
}

void StudentFinishedExamNode::setScore(int score)
{
	this->score = score;
}

bool StudentFinishedExamNode::compare(int id)
{
	if (this->getExamId() == id)
		return true;
	return false;
}
