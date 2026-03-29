//#include<iostream>
//
//using namespace std;
//class node
//{
//public:
//	int value;
//	node* next;
//
//	node()
//	{
//		value = 0;
//		next = nullptr;
//	}
//	node(int x)
//	{
//		value = x;
//		next = nullptr;
//	}
//};
//class Queue
//{
//public:
//	int count;
//	node* front;
//	node* back;
//	Queue()
//	{
//		count = 0;
//		front = nullptr;
//		back = nullptr;
//	}
//	void Push(int num)
//	{
//		node* tmp = new node(num);
//		count++;
//		if (count == 1)
//		{
//			front = tmp;
//			back = tmp;
//			return;
//		}
//		back->next = tmp;
//		back = tmp;
//	}
//	void Pop()
//	{
//		if (count == 0)return;
//		node* p = front;
//		front = front->next;
//		delete(p);
//		p = nullptr;
//		count--;
//	}
//	bool IsEmpty()
//	{
//		return count == 0;
//	}
//	void Print()
//	{
//		node* p = front;
//		while (p != nullptr)
//		{
//			cout << p->value << " ";
//			p = p->next;
//		}
//		cout << endl;
//	}
//
//};
//
//int main()
//{
//	Queue arr1;
//	arr1.Push(1);
//	arr1.Push(2);
//	arr1.Push(3);
//	arr1.Push(4);
//	arr1.Print();
//	arr1.Pop();
//	cout << arr1.IsEmpty() << endl;
//	arr1.Print();
//	arr1.Pop();
//	arr1.Pop();
//	arr1.Pop();
//	cout << arr1.IsEmpty() << endl;
//
//
//
//}