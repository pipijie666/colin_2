//#include<iostream>
//#include<vector>
//#include<queue>
//#include<stack>
//using namespace std;
//class node
//{
//public:
//	int value;
//	node* left;
//	node* right;
//	 
//	node(int num)
//	{
//		value = num;
//		left = nullptr;
//		right = nullptr;
//	}
//};
//class BinaryTree
//{
//public:
//	node* root;
//	BinaryTree()
//	{
//		root = nullptr;
//	}
//	void CreatBinaryTree()
//	{
//		//根
//		root = new node(1);
//		//根的左
//		root->left = new node(2);
//		//根的右
//		root->right = new node(3);
//		//根左的左
//		root->left->left = new node(4);
//		//根左的右
//		root->left->right = new node(5);
//	}
//	// 前序(根)遍历
//	void preorder(node* root) {
//		if (root == nullptr) return;
//		cout << root->value << " ";  // 访问根节点
//		preorder(root->left);      // 遍历左子树
//		preorder(root->right);     // 遍历右子树
//	}
//
//	// 中序(根)遍历
//	void inorder(node* root) {
//		if (root == nullptr) return;
//		inorder(root->left);       // 遍历左子树
//		cout << root->value << " ";  // 访问根节点
//		inorder(root->right);      // 遍历右子树
//	}
//
//	// 后序(根)遍历
//	void postorder(node* root) {
//		if (root == nullptr) return;
//		postorder(root->left);     // 遍历左子树
//		postorder(root->right);    // 遍历右子树
//		cout << root->value << " ";  // 访问根节点
//	}
//	//生成树
//	void CreateTree(node*& tree)
//	{
//		//数值
//		int num;
//		cin >> num;
//		//检查
//		if (num == 0)return;
//		//申请结点
//		tree = new node(num);
//		//创建左子树
//		CreateTree(tree->left);
//		//创建右子树
//		CreateTree(tree->right);
//	}
//	node*  CreatTree2()
//	{
//		int num;
//		cin >> num;
//		//检查
//		if (num == 0)return nullptr;
//		node* tree = new node(num);
//		tree->left = CreatTree2();
//		tree->right = CreatTree2();
//		return tree;
//	}
//	//创建完全二叉树
//	void CreatCBT(vector<int>& nums)
//	{
//		int len = nums.size();
//		if (len == 0)return;
//		/*node* tree = new node[len];
//		for (int i = 0; i < len; i++)
//		{
//			tree[i].value = nums[i];
//			tree[i].left = nullptr;
//			tree[i].right= nullptr;
//		}
//		for (int i = 0; i < len / 2; i++)
//		{
//			if (2 * i + 1 < len)
//			{
//				tree[i].left = &tree[2 * i + 1];
//			}
//			if (2 * i + 2 < len)
//			{
//				tree[i].right=&tree[2*i+2]
//			}
//		}*/
//		vector<node*>tree(len, nullptr);
//		for (int i = 0; i < len; i++)
//		{
//			tree[i] = new node(nums[i]);
//		}
//		for (int i = 0; i < len / 2; i++)
//		{
//			if (2 * i + 1 < len)
//			{
//				tree[i]->left = tree[2 * i + 1];
//			}
//			if (2 * i + 2 < len)
//			{
//				tree[i]->right = tree[2 * i + 2];
//			}
//		}
//		root = tree[0];
//	}
//	//层序遍历
//	void OrderTraversal()
//	{
//		if (root == nullptr) return;  
//		queue<node*> q;
//		q.push(root); 
//		while (!q.empty())
//		{
//			node* p = q.front();  // 获取队首节点
//			q.pop();              // 弹出队首节点
//
//			// 处理当前节点（打印值）
//			cout << p->value << " ";
//			// 仅将非空孩子入队
//			if (p->left != nullptr) {
//				q.push(p->left);
//			}
//			if (p->right != nullptr) {
//				q.push(p->right);
//			}
//		}
//	}
// //非递归深层遍历
//	void PreorderTraversal()
//	{
//		if (root == nullptr)return;
//		node* tree = root;
//		stack<node*>s;
//
//		//遍历
//		while (1)
//		{
//			if (!(tree == nullptr))
//			{
//				cout << tree->value << "";
//				s.push(tree);
//				tree = tree->left;
//			}
//			else
//			{
//				if (s.empty())break;
//				tree = s.top()->right;
//
//				s.pop();
//			}
//		}
//		cout << endl;
//	}
//	void InorderTraversal()
//	{
//		if (root == nullptr) return;
//		node* tree = root;
//		stack<node*> s;
//
//		// 遍历
//		while (true)
//		{
//			if (tree != nullptr)
//			{
//
//				s.push(tree);
//				tree = tree->left;  // 继续访问左子树
//			}
//			else
//			{
//				if (s.empty()) break;  // 栈为空则遍历结束
//				tree = s.top();
//				s.pop();
//				cout << tree->value << " ";
//				tree = tree->right;
//			}
//		}
//		cout << endl;
//	}
//	void LastorderTraversal() 
//	{
//	if (root == nullptr)return;
//	node* cur = root;
//	stack<node*>s;
//	node* flag = nullptr;
//	while (cur!=nullptr||!s.empty()) {
//		//非空
//
//		if (cur != nullptr) {
//			s.push(cur);
//			cur = cur->left;
//		}
//		else{
//			if (s.empty())break;
//			//检查栈顶元素的右子树
//			if (s.top()->right == nullptr || s.top()->right == flag) {
//				//弹出 打印 标记
//				cout << s.top() << " ";
//				flag = s.top();
//				s.pop();
//			}
//			else {
//				//右子树
//				cur = s.top()->right;
//			}
//		}
//	}
//	cout << endl;
//}
//	
//};
//
//int main()
//{
//	BinaryTree a;
//	a.CreatTree2();
//	a.OrderTraversal();
//}