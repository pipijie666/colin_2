//#include<iostream>
//using namespace std;
//int fun1(int a)
//{
//	if (a == 1)return a;
//	return a * fun1(a - 1);
//
//}
//int fun2(int a)
//{
//	if (a == 1)return a;
//	return a + fun2(a - 1);
//
//}
//int Fabonaui1(int a)
//{
//	if (a == 1 || a == 2)return 1;
//	return  Fabonaui1(a - 1) + Fabonaui1(a - 2);
//}
//int Fabonaui2(int a)
//{
//	
//	if (a == 1 || a == 2)return 1;
//	int fi1 = 1, fi2 = 1,fi;
//	for(int i=3;i<=a;i++)
//	{
//		fi = fi1 + fi2;
//		fi2 = fi1;
//		fi1 = fi;
//	}
//	return fi;
//}
//
//int main()
//{
//	cout<<Fabonaui2(5)<<endl;
//	cout << Fabonaui1(5) << endl;
//	return 0;
//}