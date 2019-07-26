#ifndef ADMININTERFACE_H
#define ADMININTERFACE_H
//����Ա����
#include <QWidget>
#include "userinfo.h"
#include "changeuserinfodialog.h"

namespace Ui {
class AdminInterface;
}

class AdminInterface : public QWidget
{
    Q_OBJECT

public:
    explicit AdminInterface(QWidget *parent = nullptr);
    ~AdminInterface();
public slots:
	void deleteSelectUser(); //ɾ��TreeWidget��ѡ�еĽڵ���û�
	void changeSelectUserInfo(); //�ı�TreeWidget��ѡ�еĽڵ���û���Ϣ
	void addUser(); //����û�
private:
    Ui::AdminInterface *ui;
	UserInfo* allUser = nullptr; //��ȡ�����û���Ϣ��ָ��
	UserInfo* modifyUser = nullptr; //��ȡ�ı���û�����Ϣ��ָ��
	void readAllUser(); //���¶�ȡ���ݿ���ȫ�����û���Ϣ
};

#endif // ADMININTERFACE_H
