//#include<iostream>
//#include<string>
//using namespace std;
//int main()
//{
//	//str1  指针  字符常量区（只能读不能写）  str1[2]='H';不可以   str1="hallo";可以
//	//str2  数组  栈区（可读可写）            str2[2]='H';可以     str2="hallo";不可以
//	//str2[]与*str1当形参的时候，是同一个类型[]会退化成一个指针
//	const char* str1 = "wow";
//	char str2[20] = "abcabc";
//
//	//----------------
//	//拷贝
//	//C
//	strcpy_s(str2, str1);
//	cout << str2 << endl;
//	//C++
//	string str3 = "abcdefg";
//	string str4 = "haha";
//	str3 = str4;
//	cout << str3 << endl;
//
//	//----------------
//	//拼接
//	//C
//	strcat_s(str2, str1);
//	cout << str2 << endl;
//    //C++
//	str3 += str4;
//	cout << str3 << endl;
//
//	//----------------
//	//比较
//	//C
//	if (strcmp(str1, str2) == 0)
//	{
//		cout << "相等" << endl;
//	}
//	else
//	{
//		cout << "不等" << endl;
//	}
//	//C++
//	if (str3==str4 )
//	{
//		cout << "相等" << endl;
//	}
//	else
//	{
//		cout << "不等" << endl;
//	}
//	//----------------
//	//长度
//	//C
//	cout << sizeof(str1) << endl;
//	cout << sizeof(str2) << endl;
//	cout << strlen(str1) << endl;
//	cout << strlen(str2) << endl;
//	//C++
//	//sizeof求的是string类的大小，所以sizeof(str3)=sizeof(str4)
//	cout << sizeof(str3) << endl;
//	cout << sizeof(str4) << endl;
//	//C++中size和length含义相同
//	cout << str3.size() << endl;
//	cout << str4.size() << endl;
//	cout << str3.length() << endl;
//	cout << str4.length() << endl;
//	//----------------
//	//截取
//	cout << str3.substr(3, 5) << endl;//（下标，长度）
//	cout << str3.substr(1, 50) << endl;
//	//----------------
//	//查找   返回下标
//	cout << str3.find('h') << endl;
//	cout << str3.find("ah") << endl;
//	cout << str4.find("c") << endl;
//	return 0;
//}