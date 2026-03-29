//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
////句子中单词不变，单词顺序反转
//void Reverse(string &str,int begin, int end)
//{
//	while(begin<end)
//	{
//		swap(str[begin], str[end]);
//		begin++;
//		end--;
//	}
//}
//void ReverseString(string&str)
//{
//	int len = str.size();
//	if (len == 0)return;
//	//反转整个字符串
//	Reverse(str,0,len-1);
//
//	int p1 = 0,p2=0;
//	int i = 0;
//	while(str[i]!='\0')
//	{
//		while (str[i] != ' '&& str[i] != '\0')
//		{
//			p2 = i;
//			i++;
//		}
//		Reverse(str, p1,p2);
//		if (str[i] == ' ')
//		{
//			i++;  
//			p1 = i;  
//			p2 = p1;    
//		}
//		else
//		{
//			break;
//		}
//	}
//
//}
////KMP
//void GetNext(vector<int>& next, string& match)
//{
//	next[0] = 0;
//
//	//遍历串
//	int len=match.size();
//	int i = 1;
//	int j = i - 1;
//	while (i < len)
//	{
//		if (match[i] == match[next[j]])
//		{
//			next[i] = next[j] + 1;
//			i++;
//			j = i - 1;
//
//		}
//		else if (next[j]==0)
//		{
//			next[0] = 0;
//			i++;
//			j = i - 1;
//		}
//		else
//		{
//			j = next[j] - 1;
//		}
//	}
//}
//int KMP(string& src, string& match)
//{
//	int len1 = src.size();
//	int len2 = match.size();
//	if (len1 == 0 || len2 == 0)return -1;
//	//获得next数组
//	vector<int>next(len2);
//	GetNext(next, match);
//	//匹配
//	int i = 0;
//	int j = 0;
//	while (i < len1 && j < len2)
//	{
//		//比较
//		if (src[i] == match[j])
//		{
//			i++;
//			j++;
//		}
//		else 
//		{
//			//检查
//			if (j == 0)
//			{
//				i++;
//			}
//			else
//			{
//				//匹配串跳转
//				j = next[j - 1];
//			}
//		}
//	}
//	//检查匹配串走完了吗
//	if (j == len2)
//	{
//		return i-j;
//	}
//	else
//	{
//		return -1;
//	}
//}
//int Sunday(string& src, string& match)
//{
//	int len1 = src.size();
//	int len2 = match.size();
//	if (len1 == 0 || len2 == 0)return -1;
//
//	//获得next数组
//	vector<int>next(256, -1);
//	for (int i = 0; i < len2; i++)
//	{
//		next[match[i]] = i;
//	}
//	//匹配
//	int i = 0;
//	int j = 0;
//	int k = i;
//	while (i < len1 && j < len2)
//	{
//		//比较
//		if (src[i] == match[j])
//		{
//			i++;
//			j++;
//		}
//		else
//		{
//			if(k+len2<len1)
//			{
//				i = k + len2 - next[src[k + len2]];
//				j = 0;
//				k = i;
//			}
//			else
//			{
//				return -1;
//			}
//		}
//	}
//	//检查
//	if (j == len2)
//	{
//		return k;
//	}
//	else
//	{
//		return -1;
//	}
//}
//
//
//
//
//
//int main()
//{
//	string a = "hallo world";
//	ReverseString(a);
//	cout << a << endl;
//}