#ifndef ADDUSERDIALOG_H
#define ADDUSERDIALOG_H
//����û��Ի���
#include <QDialog>
#include "userinfo.h"
namespace Ui {
	class AddUserDialog;
}

class AddUserDialog : public QDialog
{
	Q_OBJECT

public:
	explicit AddUserDialog(UserInfo* allusers, QWidget* parent = nullptr); //������������ȫ���û���Ϣ��ָ��
	~AddUserDialog();
public slots:
	void setConfirmPushButtonStatus(); //����ȷ����ť�Ŀ���״̬
	void confirmAddUser(); //��ȷ�ϰ�ť��������ִ������û�
private:
	Ui::AddUserDialog* ui;
	UserInfo* allUsers; //��ȡָ��ȫ���û���Ϣ��ָ��
};

#endif // ADDUSERDIALOG_H
