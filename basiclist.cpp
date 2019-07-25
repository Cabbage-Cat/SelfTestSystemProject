#include "basiclist.h"

QSqlDatabase BasicList::db = QSqlDatabase::addDatabase("QSQLITE");

BasicList::BasicList()
{	
	db = QSqlDatabase::addDatabase("QSQLITE");
	this->list = new Node();
	this->list->setNext(nullptr);
	this->db.setDatabaseName("systemdata.db");
}

BasicList::~BasicList()
{
	Node* preNode = this->list;
	Node* nextNode = this->list;
	while (nextNode != nullptr) 
	{
		preNode = nextNode;
		nextNode = nextNode->getNext();
		delete preNode;
	}

	this->list = nullptr;
}

void BasicList::init()
{
}

void BasicList::clear()
{
	Node* preNode = this->list->getNext();
	Node* nextNode = this->list->getNext();
	while (nextNode != nullptr)
	{
		preNode = nextNode;
		nextNode = nextNode->getNext();
		delete preNode;
	}

	this->length = 0;
	this->list->setNext(nullptr);
}

void BasicList::save()
{
	Node* node = this->getNode(-1);
	
	if (node->getId() == 1)
		this->saveAdd();
	else if (node->getId() == -1)
		this->saveDelete();
}

void BasicList::saveAdd()
{
}

void BasicList::saveDelete()
{
}

void BasicList::addNode(Node* node)
{
	if (node == nullptr)
		return;
	node->setNext(this->list->getNext());
	this->list->setNext(node);
	this->length++;
}

void BasicList::deleteNode(int id)
{
	Node* preNode = this->list;
	Node* nextNode = this->list->getNext();
	while (nextNode != nullptr)
	{
		if (nextNode->compare(id))
		{
			preNode->setNext(nextNode->getNext());
			delete nextNode;
			this->length--;
			break;
		}
		else
		{
			preNode = nextNode;
			nextNode = nextNode->getNext();
		}
	}
			
}

Node* BasicList::getNode(int id)
{
	if (id == -1)
		return this->list;
	Node* node = this->list->getNext();
	while (node != nullptr)
	{
		if (node->getId() == id)
			return node;
		node = node->getNext();
	}
	return nullptr;
}

int BasicList::getLength()
{
	return this->length;
}
