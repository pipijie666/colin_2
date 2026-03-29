/*#include<iostream>
using namespace std;
//函数参数默认值 传实参用实参，不传用默认值
void fun1(int a=999)
{
	cout << a << endl;
}
void fun2(int a=666,int b=777)
{
	cout << a << " "<<b<<endl;
}
void fun3(int a, int b=222,int c=888)//多个参数默认值的情况下，从右向左给定，不可跳跃
{
	cout << a << " " << b <<" "<<c<< endl;
}
void fun4(int x=100);//声明和定义同时存在时，默认值给声明处
//一般情况下，声明和定义不能同时给默认值
void fun5(int y = 0, int z = 0)
{
	cout << y << " " << z << endl;
}
int main()
{
	int a = 1, b = 2, c = 3;
	fun1(a);
	fun1();
	cout << "-------------" << endl;
	fun2(a,b);
	fun2(a);
	fun2();
	//fun2( ,b);给值只能从左往右给
	cout << "-------------" << endl;
	fun3(a,b,c);
	fun3(a, b);
	fun3(a);
	//fun3();要么有默认要么给参数
	cout << "-------------" << endl;
	fun4();
	cout << "-------------" << endl;
	fun5();
	void fun5(int y = 1, int z = 1);//函数声明局部化：声明和定义同时给值
	fun5();
	//void fun5(int y = 2, int z = 3);//同一个范围内一个函数只能局部声明一次
	{
		void fun5(int y = 2, int z = 3);
		fun5();
	}
	return 0;
}

void fun4(int x)
{
	cout << x << endl;
}
*/