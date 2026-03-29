//#include<iostream>
//using namespace std;
//
////访问修饰符：public/protected/private 访问权限
////class  默认访问权限私有
////struct 默认访问权限公共的
////public:公共的 所有人均可访问
////protected: 受保护的 父类和继承于他的子类
////private: 仅限自己类内访问
//
//class Robot
//{
//public:
//	//成员属性 attribute(成员变量)
//	int size;
//	string name;
//	int charge;
//	int* p;
//	//成员方法 method(成员函数)
//	/*void lnit()
//	{
//		size = 10;
//		name = "皮皮届";
//		charge = 50;
//		p=nullptr;
//	}*/
//
//	void show()
//	{
//		cout << "机器人大小为：" << size << endl << "机器人名字为：" << name << endl << "机器人charge为：" << charge << endl;
//	}
//	//构造函数 与类同名 无返回值
//	//功能：初始化成员属性
//	//定义对象时由系统自动调用
//	//在未书写构造函数时，系统会默认提供一个无参构造，空函数，什么都不做
//	//一旦书写构造，系统将不再提供默认的无参构造
//	Robot()
//	{
//		size = 10;
//		name = "皮皮届";
//		charge = 50;
//		p = nullptr;
//	}
//	Robot(int s,string str,int c)
//	{
//		size = s;
//		name = str;
//		charge = c;
//	}
//	//析构函数 ~与类名相同 无参数 无返回值
//	//功能：释放对象额外申请空间
//	//由系统调用 对象生命周期结束时调用 栈区对象所在（）结束时被收回 堆区对象delete被收回
//	~Robot()
//	{
//		cout << "~Robot" << size << endl;
//		if(p)
//		{
//			cout << "----------------" << endl;
//			delete p;
//			p = nullptr;
//		}
//	}
//
//};
//int main()
//{
//	Robot r1;
//	//r1.lnit();
//	r1.size = 10;
//	r1.show();
//
//	string str = "qq";
//	Robot r2(50, str, 100);
//	r2.size = 20;
//	r2.show();
//	Robot* r3 = new Robot;
//	r3->size = 30;
//	r3->show();
//	
//
//	return 0;
//
//}