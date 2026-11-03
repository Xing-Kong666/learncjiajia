#include <iostream>
using namespace std;


class f {
public:
	int fa;
protected:
	int fb;
private:
	int fc;
};

//子类继承时会继承父类里的全部内容，父类里的私有内容存在但被编译器隐藏了起来
//可以用开发人员命令提示符（vs文件里）切换到本文件所在目录，输入dir展示目录
//输入"cl"(L tolow)+" "+"\d1"+"reportSingleClassLayout类名"+" "+文件名
//                             展示单个类的布局
class sonclass:public f 
{
	int fd;
};

void test040() {
	sonclass ex;
	//16个字节，证明有4个整型数据，说明都继承了
	cout << "sizeof(ex) = " << sizeof(ex) << endl;
}
int main040() {
	test040();
	system("pause");
	return 0;
}