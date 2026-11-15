#include "057-boss.h"

boss::boss(int id, string name, int pid) {
	this->m_id = id;
	this->m_name = name;
	this->posid = pid;
}
void boss::ShowInfo() {
	cout << "职工id: " << m_id;
	cout << "\t职工姓名: " << m_name;
	cout << "\t职工职务id: " << posid;
	cout << "\t职工职务: 管理公司" << endl;
}
string boss::GetPos() {
	return string("老板");
}
boss::~boss() {

}