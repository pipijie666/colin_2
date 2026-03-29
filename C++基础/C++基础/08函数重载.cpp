//#include<iostream>
//using namespace std;
////函数的重载：函数名相同 函数参数（类型/个数/顺序）不同 返回值不作为判断标准，调用不同
//void fun(int a)
//{
//	cout << "调用void fun(int a)" << endl;
//}
//void fun(char b)
//{
//	cout << "调用void fun(char b)" << endl;
//}
//void fun(int a,int b)
//{
//	cout << "调用void fun(int a,int b)" << endl;
//}
//void fun(int a, char b)
//{
//	cout << "调用void fun(int a,char b)" << endl;
//}
//void fun(char a, int b)
//{
//	cout << "调用void fun(char a,char b)" << endl;
//}
////----------------------------------------
////int 和const int 不能构成重载
//void fun2(int a)
//{
//	cout << "调用void fun2(int a)" << endl;
//}
///*void fun2(const int a)
//{
//	cout << "调用void fun2(const int a)" << endl;//函数void fun2(int)已有主体
//}*/
////----------------------------------------
////int*与const int*可以构成重载
//void fun3(int* p)
//{
//	cout << "调用void fun3(int* p)" << endl;
//}
//void fun3(const int* p)
//{
//	cout << "调用void fun2(const int* p)" << endl;
//}
//int main()
//{
//	int a = 10, b = 10;
//	char c = 'a',d='c';
//	int* p1;
//	const int* p2;
//	fun(a);
//	fun(c);
//	fun(a, b);
//	fun(c, a);
//	fun(a, d);
//	fun3(p1);
//	fun3(p2);
//}