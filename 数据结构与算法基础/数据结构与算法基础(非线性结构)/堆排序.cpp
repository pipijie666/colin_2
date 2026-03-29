//#include<iostream>
//#include<vector>
//#include<stack>
//using namespace std;
//void Heap(vector<int>nums, int size, int root) 
//{
//	int largest = root;
//	int left = 2 * root + 1;
//	int right = 2 * root + 2;
//	if (left <  size && nums[left] > nums[largest])
//	{
//		largest = left;
//	}
//	if (right < size && nums[right] > nums[largest])
//	{
//		largest = right;
//	}
//	if (largest != root) 
//	{
//		
//		swap(nums[root], nums[largest]);
//		Heap(nums, size, largest);
//	}
//}
//
//void HeapSort(vector<int>nums) {
//	int len = nums.size();
//	for (int i = len / 2 - 1; i >= 0; i--) {
//		Heap(nums, len, i);
//	}
//
//	for (int i = len - 1; i > 0; i--) {
//		swap(nums[0], nums[i]);
//		Heap(nums, i, 0);
//	}
//}
//int main()
//{
//
//}