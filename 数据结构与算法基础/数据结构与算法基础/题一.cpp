//#include<iostream>
//using namespace std;
////在长度为n数组中放0~n-1，查数组有没有相同元素
//bool find(int* str,int leng)
//{
//	//检查：数据与数据所在的下标 是否相同
//	for (int i = 0; i < leng; )
//	{
//		if (str[i] == i)//相同：下一个
//		{
//			i++;
//		}
//		else//不同：检查数据作为下标与数据作为下标对应的数据是否相同
//		{
//			if (str[str[i]] != str[i])//不同：交换
//			{
//				int temp = str[str[i]];
//				str[str[i]]= str[i];
//				str[i] = temp;
//
//			}
//			else//相同：报错
//			{
//				return false;
//			}
//		}	
//	}
//	return true;
//}
//
//
//int main()
//{
//	int a[5] = { 1,2,3,4,5};
//	find(a,5);
//
//	return 0;
//}