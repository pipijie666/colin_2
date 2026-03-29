//#include<iostream>
//#include<stack>//栈
//#include<queue>//队列
//using namespace std;
//class Stack
//{
//private:
//	queue<int>q1;
//	queue<int>q2;
//public:
//	void Push(int num)
//	{
//		if (q1.empty() && q2.empty()) 
//		{
//			q1.push(num);
//			return;
//		}
//		if (!q1.empty())
//		{
//			q1.push(num);
//		}
//		else
//		{
//			q2.push(num);
//		}
//	}
//	void Pop()
//	{
//		if (q1.empty() && q2.empty())return;
//		//找到非空队列
//		if (!q1.empty())
//		{
//			while (q1.size() > 1)
//			{
//				q2.push(q1.front());
//				q1.pop();
//			}
//			//弹出尾元素
//			cout << q1.front() << endl;
//			q1.pop();
//
//		}
//		else
//		{
//			while (q2.size() > 1)
//			{
//				q1.push(q2.front());
//				q2.pop();
//			}
//			//弹出尾元素
//			cout << q2.front() << endl;
//			q2.pop();
//		}
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