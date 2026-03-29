//#include<iostream>
//#include<vector>
//using namespace std;
//class Node
//{
//public:
//	int value;
//	Node* next;
//
//	Node()
//	{
//		value = 0;
//		next = nullptr;
//	}
//	Node(int num)
//	{
//		value = num;
//		next = nullptr;
//	}
//};
//class Stack
//{
//private:
//	Node* top;
//	int count;
//public:
//	Stack()
//	{
//		top = nullptr;
//		count = 0;
//	}
//	void Push(int num)
//	{
//		
//			Node* tmp = new Node(num);
//			count++;
//			tmp->next = top;
//			top = tmp;
//
//	}
//	void Pop()
//	{
//		if (count == 0)return;
//		Node* p = top;
//		top = top->next;
//		delete(p);
//		p = nullptr;
//		count--;
//	}
//	int GetTop()
//	{
//		return top->value ;
//	}
//	int GetCount()
//	{
//		return count ;
//	}
//	void clear()
//	{
//		while (count)
//		{
//			Pop();
//		}
//	}
//	bool IsEmpty()
//	{
//		return count ==0 ;
//	}
//};
//
//
//
//
//
//int main()
//{
//
//}