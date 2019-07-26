#ifndef BASICLIST_H
#define BASICLIST_H
//�������
#include <QtSql>
#include "node.h"

class BasicList
{
public:
    BasicList();
	virtual ~BasicList();
	virtual void init(); //��ʼ���������ݿ��ж���Ӧ��Ϣ
	virtual void clear(); //��յ�ǰ����
	virtual void save(); //���浱ǰ���������ݵ����ݿ�(���/ɾ��)

	virtual void saveAdd(); //��������������ӵ����ݿ�
	virtual void saveDelete(); //�����������ݴ����ݿ����Ƴ�
	virtual void addNode(Node* node); //��������ӽڵ�
	virtual void deleteNode(int id); //��������ɾ��IDΪid�Ľڵ�
	virtual Node* getNode(int id); //�������л�ȡIDΪid�Ľڵ��ָ��
	virtual int getLength(); //��ȡ����ĳ���
protected:
	static QSqlDatabase db; //�ⲿ���ݿ⾲̬������������ֻ����һ����
	Node* list = nullptr; // head node.
	int length = 0; //����ĳ���
};

#endif // BASICLIST_H
