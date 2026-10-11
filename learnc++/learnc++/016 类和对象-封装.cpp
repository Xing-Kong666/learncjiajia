#include <iostream>
using namespace std;

/*01类的定义，成员属性，成员函数*/
/*02类的访问权限*/
/*03class与struct的区别*/
/*04类内成员的私有与可读可写设置*/
class stu {///////////////////01
	//权限
public:
	//成员属性
	string s_name;
	int s_score;
	int s_class;
	//成员行为、方法、函数
	void coutstu() {
		cout << "学生姓名：" << s_name << " ";
		cout << "学生分数：" << s_score << " ";
		cout << "学生班级：" << s_class << endl;
	}
};

class tea {///////////////////////02
	/*
	权限分为
	public:类内可访问，类外可访问
	protected:类内可访问，类外不可访问，不可读写，子类可以访问
	private:类内可访问，类外不可访问，不可读写，子类不可访问
	*/
private:
	int t_age;
	string t_address;
public:
	string t_name;
	string t_sex;
	///////////////////////04
	//private属性设置为可写，实际上就是用方法间接调用
	void cinage(int age) {
		t_age = age;
	}
	void cinaddress(string address) {
		t_address = address;
	}
	//private属性设置为可读
	void couttea() {
		cout << "老师姓名：" << t_name << " ";
		cout << "老师年龄：" << t_age << " ";
		cout << "老师住址：" << t_address << " ";
		cout << "老师性别：" << t_sex << endl;
	}
};

//////////////////////03
//struct 默认为公有
struct stars {
	int rank;//星系排行
	string pos;//位置
};
//class 不声明默认为私有
class starc {

	int s_rank;
	string s_pos;
public:
	void cinrank(int rank) {
		s_rank = rank;
	}
	void cinpos(string pos) {
		s_pos = pos;
	}
	void coutstar()
	{
		cout << "星系排行：" << s_rank << " ";
		cout << "星系位置：" << s_pos << endl;
	}
};
int main() {
	cout << "测试一：" << endl << endl;
	stu s;
	s.s_name = "小明";
	s.s_score = 666;
	s.s_class = 3;
	s.coutstu();
	cout <<endl;

	cout <<"测试二"<< endl << endl;
	tea t;
	t.t_name = "王老师";
	t.t_sex = "男";
	//t.t_age = 42;类外不可访问private，可借助public函数写入数据
	t.cinage(34);
	t.cinaddress("太阳系第三大行星");
	t.couttea();
	cout << endl;

	cout << "测试三：" << endl << endl;
	stars ss;
	starc sc;
	ss.rank = 1;
	ss.pos = "太阳系第一行星";
	cout << "星系排行：" << ss.rank << " " << "星系位置：" << ss.pos << endl << endl;
	//sc.rank = 3;私有无法访问，可借助公有函数
	sc.cinrank(3);
	sc.cinpos("太阳系第三大行星");
	sc.coutstar();
	cout << endl;


	system("pause");
	return 0;
}