//#include<iostream>
//using namespace std;
////参数传递 值传递/地址传递/引用传递
////值传递 形参无法改变实参
//void fun1(int a)
//{
//	a = 40;
//}
////地址传递 形参可以改变实参
//void fun2(int* a)
//{
//	*a = 500;
//}
////引用传递 形参可以改变实参
//void fun3(int& a)
//{
//	a = 60;
//}
////int 和int&可重载
//void fun4(int a)
//{
//	cout << "调用void fun4(int a)" << endl;
//}
//void fun4(int& a)
//{
//	cout << "调用void fun4(int& a)" << endl;
//}
////引用：给变量名重命名
////typdef:给数据类型重命名
//int main()
//{
//	int a = 10;
//	cout << a << endl;
//	int* p = &a;
//	*p = 20;
//	cout << a << endl;
//	int& b = a;//引用
//	b = 100;
//	cout << a << " " <<b<< endl;
//	//----------------------------
//	fun1(a);//无法改变
//	cout << a << endl;
//	fun2(&a);
//	cout << a << endl;
//	fun3(b);
//	cout << a << endl;
//	//指针与引用的区别
//	//指针占空间 引用不占
//	//指针可以不初始化 引用必须初始化
//	//指针可以指向空 但是没有对空的引用
//	//有多级指针 但是没有多级引用
//	//指针可以更换指向对象 引用不可以更改引用对象
//	
//	//&&右值引用 对常量的引用 
//  //&左值引用  对变量的引用
//	int&& c = 10;
//	cout << c << endl;
//	int d = 10;
//	int& f = d;
//	void fun4(int a);
//	fun4(d);
//	{
//		void fun4(int& a);
//		fun4(f);
//	}
//	//指针的引用
//	int*& q = p;
//	*q = 1024;
//	cout << a << endl;
//	//引用的指针
//	int* p4 = &b;
//	*p4 = 2028;
//	cout << a << endl;
//	//不存在引用的数组
//	return 0;
//
//}