//#include<iostream>
//using namespace std;
//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	//两份三等式功能更强大，可以指定范围遍历，可以用下标进行访问
//	for (int i = 0; i < 5; i++)
//	{
//		cout << a[i] << " ";
//	}
//	cout << endl;
//
//	//范围for适用范围：只有begin和end的结构  数组也可以
//	for (int v : a)
//	{
//		cout << v << " ";//范围for不足：只能全部遍历，不能局部遍历
//	}
//	cout << endl;
//
//	string str = "abcdefg";
//	for (char v : str)/*str中单个字符是char，所以用char v*/
//	{
//		cout << v << " ";
//	}
//	cout << endl;
//	
//
//	return 0;
//}