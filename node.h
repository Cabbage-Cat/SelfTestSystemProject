#ifndef NODE_H
#define NODE_H
#include <QString>
// 不同种类的链表节点。
class Node
{
public:
    virtual bool compare(int id);
    int getId();
    void setId(int id);
    Node* getNext();
    void setNext(Node* node);

protected:
    int id;
    Node *next = nullptr;
};

class UserInfoNode : public Node
{
public:
    QString getPassword();
    void setPassword(QString passwd);
    QString getName();
    void setName(QString name);
    int getType();
    void setType(int type);
    int getClassNumber();
    void setClassNumber(int classNumber);

protected:
    QString password;
    QString name;
    int TYPE;
    int classNumber;
};

class ExamInfoNode : public Node
{
public:
    int getClassNumber();
    void setClassNumber(int classNumber);
    QString getFileLocation();
    void setFileLocation(QString location);
protected:
    int classNumber;
    QString fileLocation;
};

class StudentFinishedExamNode : public Node
{
public:
    int getExamId();
    void setExamId(int examId);
    int getScore();
    void setScore(int score);

    virtual bool compare(int id);
protected:
    int examId;
    int score;
	// Base Id is userID , examId is exam's Id , override method compare to find examid == 'eId' node.
};



#endif // NODE_H
