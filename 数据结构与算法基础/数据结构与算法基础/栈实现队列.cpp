//#include<iostream>
//#include<stack>//栈
//#include<queue>//队列
//using namespace std;
//
//class Queue
//{
//private:
//	stack<int>s1;
//	stack<int>s2;
//public:
//	void Push(int num)
//	{
//		//检测栈非空
//		while (!s2.empty())
//		{
//			//将栈2元素依次压入栈1
//			s1.push(s2.top());
//			s2.pop();
//		}
//		//新元素入栈1
//		s1.push(num);
//	}
//
//	void Pop()
//	{
//		if (s1.empty() && s2.empty())return;
//		//检测栈1非空
//		while (!s1.empty())
//		{
//			//将栈2元素依次压入栈1
//			s2.push(s2.top());
//			s1.pop();
//		}
//		//从栈2弹出元素
//		cout << s2.top() << endl;
//		s2.pop();
//	}
//};
//
//
//
//
//
//
//
//
//
//
//
//
//int main()
//{
//
//}