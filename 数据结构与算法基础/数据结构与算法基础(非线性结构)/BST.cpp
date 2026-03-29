//#include<iostream>
//#include<vector>
//#include<stack>
//using namespace std;
//class node
//{
//public:
//	int value;
//	node* left;
//	node* right;
//	node(int num)
//	{
//		value = num;
//		left = nullptr;
//		right = nullptr;
//	}
//};
//class BST
//{
//public:
//	node* root;
//	BST()
//	{
//		root = nullptr;
//	}
//	void bst(int num)
//	{
//		//创建节点，添加数据
//		node* p = new node(num);
//		node* p2 = root;
//		//若树为空，节点为根节点，本次添加结束
//		if (root == nullptr)
//		{
//			root = p;
//			return;
//		}
//		while(1)
//		{
//			//等于直接返回
//            if (num == p2->value)return;
//			if (num < p2->value && p2->left == nullptr)
//			{
//				p2->left = p;
//				return;
//			}
//			else if (num > p2->value && p2->right == nullptr)
//			{
//				p2->right = p;
//				return;
//			}
//			else if (num < p2->value && p2->left != nullptr)
//			{
//				p2 = p2->left;
//			}
//			else if (num > p2->value && p2->right != nullptr)
//			{
//				p2 = p2->right;
//			}
//		}
//	}
//	void CreatBST(vector<int>& arr)
//	{
//		for(int v:arr)
//		{
//			bst(v);
//		}
//	}
//	void PreorderTraversal()
//			{
//				if (root == nullptr)return;
//				node* tree = root;
//				stack<node*>s;
//		
//				//遍历
//				while (1)
//				{
//					if (!(tree == nullptr))
//					{
//						cout << tree->value << " ";
//						s.push(tree);
//						tree = tree->left;
//					}
//					else
//					{
//						if (s.empty())break;
//						tree = s.top()->right;
//		
//						s.pop();
//					}
//				}
//				cout << endl;
//			}
//	void Search(node* tree, int num, node*& del, node*& parent)
//	{
//		while (tree)
//		{
//			if (tree->value == num)
//			{
//				del = tree;
//				return;
//			}
//			else if(tree->value>num)
//			{
//				parent = tree;
//				tree = tree->left;
//			}
//			else
//			{
//				parent = tree;
//				tree = tree->right;
//			}
//		}
//		parent = nullptr;
//	}
//	void DelNode(int num)
//	{
//		node* del = nullptr;
//		node* parent = nullptr;
//		Search(root, num, del, parent);
//		if (del == nullptr)return;
//		node* mark = nullptr;
//		if (del->left != nullptr && del->right != nullptr)
//		{
//			mark = del;
//			parent = del;
//			del = del->left;
//			while (del->right)
//			{
//				parent = del;
//				del = del->right;
//			}
//			mark->value = del->value;
//		}
//		if (parent == nullptr)
//		{
//			root = del->left ? del->left : del->right;
//			delete del;
//			del = nullptr;
//			return;
//		}
//		if (parent->left == del)
//		{
//			parent->left = del->left ? del->left : del->right;
//		}
//		else
//		{
//			parent->right = del->left ? del->left : del->right;
//		}
//		delete del;
//		del = nullptr;
//	}
//	void BSTToList(node* tree, node*& head, node*& tail)
//	{
//		if (tree == nullptr)return;
//		//左子树
//		BSTToList(tree->left, head, tail);
//		//父亲
//		//尾添加
//		if (head == nullptr)
//		{
//			head = tree;
//		}
//		else
//		{
//			tail->right = tree;
//			tree->left = tail;
//
//		}
//		tail = tree;
//		//右子树
//		BSTToList(tree->right, head, tail);
//	}
//};
//int main()
//{
//	BST tree1;
//	vector<int>a = { 1,2,3,5,7,6,25,55,59 };
//	tree1.CreatBST(a);
//	tree1.PreorderTraversal();
//}