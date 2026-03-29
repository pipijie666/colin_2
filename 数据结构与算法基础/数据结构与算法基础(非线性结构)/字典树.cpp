//#include<iostream>
//#include<vector>
//#include<string>
//using namespace std;
//class node
//{
//public:
//	int count;
//	vector<node*>character;
//	string str;
//	node() :count(0), character(26, nullptr) {};
//};
//class TrieTree
//{
//public:
//	node* root;
//	TrieTree()
//	{
//		root = new node;
//	}
//public:
//	void AddWord(string& s)
//	{
//
//		node* tree = root;
//		//遍历字符串
//		for (char c : s)
//		{
//			//检查字符对应分组
//			if (tree->character[c - 97] == nullptr)
//			{
//				tree->character[c - 97] = new node;
//			}
//			//下一个字符
//			tree = tree->character[c - 97];
//		}
//		//末尾标记
//		tree->count++;
//		tree->str = s;
//	}
//	void Create(vector<string>& strarr)
//	{
//		//依次添加各个单词
//		for (string s : strarr)
//		{
//			AddWord(s);
//		}
//	}
//	void Preorder(node* tree)
//	{
//		if (tree == nullptr)return;
//		if (tree->count != 0)
//		{
//			cout << tree->str << endl;
//		}
//		for (int i = 0; i < 26; i++)
//		{
//			Preorder(tree->character[i]);
//		}
//	}
//	void Search(string& s)
//	{
//		int i = 0;
//		int len = s.size();
//		node* tree = root;
//		while (i < len)
//		{
//			//检查字符对应分组
//			if (tree->character[s[i] - 97] == nullptr)
//			{
//				//报错
//				cout << "failed" << endl;
//				break;
//			}
//			//下一个
//			tree = tree->character[s[i] - 97];
//			i++;
//		}
//		//检查
//		if (tree->count != 0)
//		{
//			cout << "success" << endl;
//		}
//		else
//		{
//			cout << "failede orz" << endl;
//		}
//	}
//};
//int main()
//{
//
//}