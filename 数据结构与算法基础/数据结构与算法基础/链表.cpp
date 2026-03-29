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
//
//class List
//{
//public:
//	Node* head;
//
//	List()
//	{
//		head = nullptr;
//	}
//
//	void CreatLink(vector<int>& arr)
//	{
//
//		for (int v : arr)
//		{
//			Add(v);
//		}
//	}
//	void Add(int num)
//	{
//		//申请节点
//		Node* tmp = new Node(num);
//
//		//尾添加
//		if(head==nullptr)
//		{
//			head = tmp;
//			return;
//		}
//		//遍历寻找尾结点
//		Node* p = head;
//		while (p->next)
//		{
//			p = p->next;
//		}
//		p->next = tmp;
//	}
//	void PrintList()
//	{
//		Node* p = head;
//		while (p != NULL)
//		{
//			cout << p->value << " ";
//			p = p->next;
//		}
//		cout << endl;
//	}
//	void RPrintList(Node*p)
//	{
//		if (p == nullptr)return;
//		//后继
//		RPrintList(p->next);
//		//打印当前
//		cout << p->value << " ";
//	}
//	//链表反转
//	void ReverseLink()
//	{
//		Node* NewHead = nullptr;
//		Node* Take = head;
//		Node* Break = Take->next;
//		while (Take != nullptr)
//		{
//			Take->next = NewHead;
//			NewHead = Take;
//			Take = Break;
//			if(Break!=nullptr)Break = Break->next;
//		}
//		head = NewHead;
//	}
//	//拼接两个链表
//	void Merge(Node* h1, Node* h2)
//	{
//		if (h1 == nullptr)
//		{
//			head = h2;
//			return;
//		}
//		if (h2 == nullptr)
//		{
//			head = h1;
//			return;
//		}
//		Node* newhead = nullptr;
//		Node* tail = nullptr;
//
//		//确定头节点
//		if (h1->value, h2->value)
//		{
//			newhead = h1;
//			tail = h1;
//			h1 = h1->next;
//		}
//		else
//		{
//			newhead = h2;
//			tail = h2;
//			h2 = h2->next;
//		}
//		//遍历两条链表
//		while (h1 != nullptr && h2 != nullptr)
//		{
//			if (h1->value <= h2->value)
//			{
//				tail->next = h1;
//				tail = tail->next;
//				h1 = h1->next;
//			}
//			else
//			{
//				tail->next = h2;
//				tail = tail->next;
//				h2 = h2->next;
//			}
//		}
//		if (h1 != nullptr)
//		{
//			tail->next = h1;
//		}
//		else
//		{
//			tail->next = h2;
//		}
//
//		head = newhead;
//	}
//};
//
//int main()
//{
//	vector<int>arr1 = { 1,2,3,4,5,6,7,8,9 };
//	List arr;
//	arr.CreatLink(arr1);
//	arr.PrintList();
//	arr.RPrintList(arr.head);
//	arr.ReverseLink();
//	arr.PrintList();
//    return 0;
//}