#include "057-manager.h"

manager::manager(int id, string name, int pid) {
	this->m_id = id;
	this->m_name = name;
	this->posid = pid;
}
void manager::ShowInfo() {
	cout << "职工id: " << m_id;
	cout << "\t职工姓名: " << m_name;
	cout << "\t职工职务id: " << posid;
	cout << "\t职工职务: 接受老板派的任务并安排给员工" << endl;
}
string manager::GetPos() {
	return string("经理");
}
manager::~manager() {

}