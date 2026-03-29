/*#include<iostream>
#include<vector>
using namespace std;
//二分查找
//递归法
bool BinaryChpo1(vector<int>&arr,int begin,int end,int target)
{
	if (arr[begin] == target || arr[end] == target)return true;
	if (arr[begin] > target || arr[end] < target)return false;
	int mid = (begin + end) / 2;
	if (arr[mid] == target)
	{
		return true;
	}
	else if(arr[mid] > target)
	{
		end = mid;
	}
	else
	{
		begin = mid;
	}
	if (end-begin==1&&arr[begin]!=target && arr[end] != target)return false;
	BinaryChpo1(arr, begin, end, target);
}
bool BinaryChpo2(vector<int>& arr, int target)
{
	int len = arr.size();
	int begin = 0, end = len- 1;
	if (arr[begin] == target || arr[end] == target)return true;
	if (arr[begin] > target || arr[end] < target)return false;
	while (!(end - begin == 1 && arr[begin] != target && arr[end] != target))
	{
		int mid = (begin + end) / 2;
		if (arr[mid] == target)
		{
			return true;
		}
		else if (arr[mid] > target)
		{
			end = mid;
		}
		else
		{
			begin = mid;
		}
	}
	return false;
}

//循环法
int main()
{
	vector<int>arr1 = { 1,2,3,4,5,6,7,8,9,10};
	//cout << BinaryChpo1(arr1, 0, arr1.size() - 1, 11) << endl;
	cout << BinaryChpo2(arr1, 10) << endl;
	return 0;
}*/