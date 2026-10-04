#include <iostream>
using namespace std;


/*01结构体定义*/
struct student {//学生结构体，名字，分数，性别
	string name;
	int score;
	int sex;//1男2女
}stu;//定义结构体变量，但一般不这样定义
struct teacher {//老师结构体，姓名，年龄，职位
	string name;
	int age;
	const char* position;
};
/*06结构体嵌套结构体*/
struct ts {
	string name;//老师的名字
	string pos;//老师的职位
	student s[3];//老师的学生
};

//05-值传递
void printstruct(student stu, teacher teach) {
	cout << stu.name << " " << stu.score << " " << stu.sex << endl;
	cout << teach.name << " " << teach.age << " " <<teach.position << endl;
}
student pushstu(student stu) {
	student exam = stu;
	return exam;//传递的是结构体里的值，不是结构体的地址，形参的地址在栈区，生命在函数结束时消失，再次访问时非法的
}
//05-地址传递
void change(student* p) {
	p->score = 100;
}


int main011() {
	/*02结构体的使用*/
	struct student st;
	st.name = "小明";
	st.score = 99;
	st.sex = 1;
	cout << st.name << " ";
	cout << st.score << " ";
	cout << st.sex << endl;

	/*03结构体数组*/
	//为结构体赋值
	//c++结构体可以不写struct直接写结构体名称
	student stus[3] = {
		"张三",52,2,
		"李四",79,2,
		"王五",47,1
	};
	//打印变量
	for (int i = 0; i < 3; i++) {
		cout << stus[i].name << " ";
		cout << stus[i].score << " ";
		cout << stus[i].sex << endl;
	}
	/*04结构体与指针*/
	teacher teach;
	teacher* teachp = &teach;
	//*的优先级相较于->和.低,但（）和这俩为同级
	teachp->name = "张老师";//指针访问
	(*teachp).age = 25;//指针所指对象访问
	teachp->position = "语文老师";
	cout << teach.name << " ";
	cout << teach.age << " ";
	cout << teach.position << endl;

	/*05结构体类型作为函数参数*/
	student pstu = { "小6",66,1 };
	teacher ptea = { "高老师",28,"数学老师" };
	printstruct(pstu, ptea);
	student getstu = pushstu(pstu);
	//多次测试
	cout << getstu.name << " ";
	cout << getstu.score << " ";
	cout << getstu.sex << endl;
	cout << getstu.name << " ";
	cout << getstu.score <<" ";
	cout << getstu.sex << endl;	
	change(&pstu);
	cout << pstu.name << " ";
	cout << pstu.score << " ";
	cout << pstu.sex << endl;
	
	/*06-结构体嵌套结构体测试*/
	ts exam = {
		"王老师",
		"数学老师",
		{
			"w",88,1,
			"x",99,2,
			"y",80,1
		}
	};
	cout << exam.name << " " << exam.pos << endl;
	for (int i = 0; i < 3; i++) {
		cout << exam.s[i].name << " ";
		cout << exam.s[i].score << " ";
		cout << exam.s[i].sex << endl;
	}

	/*07样例测试*/
	struct hero {
		string name;
		int age;
		string sex;
	};
	hero heros[5] = {
	"刘备",26,"男",
	"关羽",25,"男",
	"张飞",24,"男",
	"西施",23,"女",
	"貂蝉",22,"女"
	};
	for (int i = 0; i < 5; i++) {
		cout << heros[i].name << " ";
		cout << heros[i].age << " ";
		cout << heros[i].sex << endl;
	}
	return 0;
}