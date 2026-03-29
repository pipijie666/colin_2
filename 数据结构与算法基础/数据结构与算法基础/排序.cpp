/*#include<iostream>
#include<vector>
using namespace std;
//冒泡排序
void BubbleSort(vector<int>&a )
//void BubbleSort(int* a,int len)
{
	int len = a.size();
	int sign;//优化：找到符合顺序的和不符合的边界，遍历到边界即可
	for (int i=len;i>0;i--)
	{
		for (int j=1;j<len;j++)
		{
			if (a[j - 1] > a[j])
			{
				swap(a[j - 1], a[j]);
				sign = j + 1;//最后的sign值一定是最大的
			}
		}
		if (sign == 0)break;//优化：如果期间符合顺序，直接退出循环
		len = sign - 1;//更新长度
	}
}
//选择排序
void SelectSort(vector<int>& arr)
{
	int len = arr.size();
	for (int i=len;i>0;i--)
	{
		int sign = 0;
		for (int j=0;j<i;j++)
		{
			if (arr[sign] < arr[j])
			{
				sign = j;
			}
		}
		swap(arr[sign],arr[i-1]);
	}
}
//插入排序
void InsertSort(vector<int>& arr)
{
    int len = arr.size();
	if (len <= 1)return;
	
	//找到无需部分
	for (int i = 1; i < len; i++)
	{
		int num = arr[i];
		for (int j = (i - 1); j >= 0; j--)
		{
			if (num < arr[j])
			{
				//有序元素右移一位
				arr[j + 1] = arr[j];
				if (j == 0)
				{
					arr[0] = num;
					break;
				}
			}
			else
			{
				//放到有序右侧
				arr[j + 1] = num;
				break;
			}
		}
	}

}

//快速排序
int Find1(vector<int>&nums, int begin, int end)
{
	int tmp = nums[begin];
	while (begin < end)
	{
		//从右到左遍历找比标准值小的
		while (begin<end)
		{
			if (nums[end] < tmp)
			{
				//填入左侧的坑
				nums[begin] = nums[end];
				begin++;
				break;
			}
			end--;
		}
		//从左到右遍历找比标准值小的
		while (begin < end)
		{
			if (nums[begin] >tmp)
			{
				//填入右侧的坑
				nums[end] = nums[begin];
				end--;
				break;
			}
			begin++;
		}
	}
	nums[begin] = tmp;
	return begin;
}
int Find2(vector<int>& nums, int begin, int end)
{

	int small = begin;
	//遍历数组
	for (begin; begin < end; begin++)
	{
		//比较 找小的
		if (nums[begin] < nums[end])
		{
			//小区间扩张
			swap(nums[small++], nums[begin]);
		}
	}
    //标准值放入
	swap(nums[small], nums[end]);
	return small;
}
void QuickSort(vector<int>& nums, int begin, int end)
{
	if (begin >= end)return;
	//指定标准值的最终位置
	int s = Find2(nums, begin, end);
	//根据标准值的位置将数据分成两部分 各部分快速排序
	QuickSort(nums, begin, s - 1);
	QuickSort(nums, s + 1, end);
}
//归并排序
void Merge(vector<int>& nums, int begin, int end)
{
	int b1 = begin;
	int e1 = begin + (end - begin) / 2;
	int b2 = e1 + 1;
	int e2 = end;
	//空间
	vector<int>tmp;
	//遍历两个数组
	while (b1 <= e1 && b2 <= e2)
	{
		if (nums[b1] > nums[b2])
		{
			tmp.push_back(nums[b2 ++]);
		}
		else
		{
			tmp.push_back(nums[b1++]);
		}
	}

	//将剩余的元素向数组中放
	while (b1 <= e1)
	{
		tmp.push_back(nums[b1++]);
	}
	while (b2 <= e2)
	{
		tmp.push_back(nums[b2 ++]);
	}
	//放回
	for (int v : tmp)
	{
		nums[begin++] = v;
	}

}
void MergeSort(vector<int>& nums, int begin, int end)
{
	if (begin >= end)return;
	int mid= begin + (end - begin) / 2;
	//拆成两部分
	MergeSort(nums, begin, mid);
	MergeSort(nums, mid + 1, end);

	//合并
	Merge(nums, begin, end);
}


void print(vector<int>nums)
{
	for (int v : nums)
	{
		cout << v << " ";
	}
	cout << endl;
}
int main()
{
	vector<int>arr= {2,7,4,5,8,9,11,6};
	//int a[10] = { 2,55,96,47,23,56,89,25,77,98 };
	//BubbleSort(arr);
	//SelectSort(arr);
	//InsertSort(arr);
	//QuickSort(arr,0,7);
	MergeSort(arr, 0, 7);
	print(arr);
}*/