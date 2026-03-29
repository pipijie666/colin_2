//#include<iostream>
//using namespace std;
//
///* malloc / free和new / delete区别
//（1）函数——关键字
//（2）计算申请空间大小——不需要计算
//（3）不能申请同时初始化——能
//（4）不会调用构造函数和析构函数——会
//*/
//
//int main()
//{
//	int a[5] = { 1,2,3,4,5 };//静态 编译期机制
//	int n = 10;
//	int* p1 = (int*)malloc(sizeof(int) * n);//动态 执行期机制
//	for (int i = 0; i < n; i++)
//	{
//		p1[i] = i;
//	}
//	for (int j = 0; j < n; j++)
//	{
//		cout << p1[j] << " ";
//	}
//	cout << endl;
//	delete[]p1;
//	p1 = nullptr;
//
//	int* p2 = new int[n];
//	for (int i = 0; i < n; i++)
//	{
//		p2[i] = i;
//	}
//	for (int j = 0; j < n; j++)
//	{
//		cout << p2[j] << " ";
//	}
//	cout << endl;
//	delete[]p2;
//	p2 = nullptr;
//	//new可以申请同时初始化
//	int* p3 = new int{ 10 };
//	cout << *p3 << endl;
//	delete p3;
//	p3= nullptr;
//
//	int* p4 = new int[4] {1, 2, 3, 4};
//	for (int k = 0; k < 4; k++)
//	{
//		cout << p4[k] << " ";
//	}
//	delete[]p4;
//	p4= nullptr;
//
//	//申请指针
//	int m = 1024;
//	int** pp1 = new int*;
//	*pp1 = &m;
//	cout << **pp1 << endl;
//
//	//指针数组
//	int** pp2 =new int*[4];
//	//数组指针
//	int(**pp3)[3] = new (int(*)[3]);
//	return 0;
//}