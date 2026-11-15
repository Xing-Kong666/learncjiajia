#include "057-employee.h"

employee::employee(int id,string name,int pid) {
	this->m_id = id;
	this->m_name = name;
	this->posid = pid;
}
void employee::ShowInfo() {
	cout << "职工id: " << m_id;
	cout << "\t职工姓名: " << m_name;
	cout << "\t职工职务id: " << posid;
	cout << "\t职工职务: 接受经理派的任务并完成" << endl;
}
string employee::GetPos() {
	return string("员工");
}
employee::~employee() {

}