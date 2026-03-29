//#include<iostream>
//#include<vector>
//using namespace std;
////一组数中仅有一个数出现一次，其他出现两次，找出这个数
////异或
////一组数中仅有两个数出现一次，其他出现两次，找出这个数
////异或，根据异或找出两数不同，分成两组，各组内进行异或操作
//void find2(vector<int>&nums)
//{
//	//整体异或
//	int b=0;
//	for (int v:nums)
//	{
//		b ^= v;
//	}
//	//找到一个非零位
//	int c = b & (-b);
//	//根据非零位进行分组    各组内进行异或操作
//	int j = 0,k=0,first=0,second=0;
//	for (int v:nums)
//	{
//		
//		if ((v & c) == 0)
//		{
//			first ^= v;
//			j++;
//		}
//		else
//		{
//			second ^= v;
//			k++;
//		}
//	}
//	//输出结果
//	cout << first << " " << second << endl;
//}
//
//int main()
//{
//
//	//int a[8] = { 1,1,2,2,3,3,7,8 };
//    vector<int>nums= { 1,1,2,2,3,3,7,8 };//向量，头文件<vector>
//	find2(nums);
//	
//	/*for (int v:nums)
//	{
//		cout << v << " ";
//
//	}
//	cout << endl;
//
//	vector<int>num2;
//	num2.push_back(10);
//	num2.push_back(20);
//	num2.emplace_back(30);
//	for (int v : num2)
//	{
//		cout << v << " ";
//	}
//	cout << endl;
//
//	vector<int>num3(10, 0);
//	for (int v : num3)
//	{
//		cout << v << " ";
//
//	}
//	cout << endl;*/
//	return 0;
//}