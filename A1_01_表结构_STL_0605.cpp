#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <stack>
#include <queue>
#include <list>
#include <map>
#include <set>
#include <algorithm>

using namespace std;

//1. string
//1.1 string ���캯��
/*
string();
string(const string& str);
string(const char* s);
string(int n, char c);
*/

//1.2 string ������ֵ����
/*
string& operator=(const char* s);
string& operator=(const string& str);
string& operator=(char c);
string& assign(const char* s);
string& assign(const char*s, int n);
string& assign(const string& s);
string& assign(int n, char c);
string& assign(const string& s, int start, int n);
*/

//1.3 string ��ȡ�ַ�����
/*
char& operator[](int n);
char& at(int n);
*/

//1.4 string ƴ�Ӳ���
/*
string& operator+=(const string& str);
string& operator+=(const char* str);
string& operator+=(const char c);
string& append(const char * s);
string& append(const char * s, int n);
string& append(const string &s);
string& append(const string &s, int pos, int n);
string& append(int n, char c);
*/

//1.5 string ���Һ��滻
/*
int find(const string& str, int pos = 0) const;
int find(const char* s, int pos = 0) const;
int find(const char* s, int pos, int n) const;
int find(const char c, int pos = 0) const;
int rfind(const string& str, int pos = npos) const;
int rfind(const char* s, int pos = npos) const;
int rfind(const char* s, int pos, int n) const;
int rfind(const c, int pos = npos) const;
string& replace(int pos, int n, const string& str);
string& replace(int pos, int n, const char* s);
*/

//1.6 string �Ƚϲ���
/*
int compare(const string& s) const;
int compare(const char* s) const; 
*/

//1.7 string �Ӵ�
/*
string substr(int pos = 0, int n = npos) const;
*/

//1.8 string�����ɾ������
/*
string& insert(int pos, const char* s);
string& insert(int pos, const string& str);
string& insert(int pos, int n, char c);
string& earse(int pos, int n = npos);
*/

//1.9 string��c-style�ַ���ת��
/*
string str = "itcast";
const char* cstr = str.c_str();

char* s = "itcast";
string str(s);
*/

//2. vector
/*
2.1 vector���캯��
vector<T> v;
vector<v.begin(), v.end());
vector(n, elem);
vector(const vector &vec);

example:
int arr[] = {2,3,4,1,9};
vector<int> v1(arr, arr + sizeof(arr) / sizeof(int));
*/

//2.2 vector ���ø�ֵ����
/*
assign(beg, end);
assign(n, elem);
vector& operator=(const vector &vec);
swap(vec);
*/

//2.3 vector��С����
/*
size();
empty();
resize(int num);
capacity();
reserve(int len);
*/

//2.4 vector���ݴ�ȡ����
/*
at(int idx);
operator[];
front();
back();
*/

//2.5 vector�����ɾ������
/*
insert(const_iterator pos, int count,ele);
push_back(ele);
pop_back();
erase(const_iterator start, const_iterator end);
erase(const_iterator pos);
clear();
*/

//3. deque����
//3.1 deque���캯��
/*
deque<T> deqT;
deque(beg, end);
deque(n, elem);
deque(const deque &deq);
*/

//3.2 deque��ֵ����
/*
assign(beg, end);
assign(n, elem);
deque& operator=(const deque &deq);
swap(deq);
*/

//3.3 deque��С����
/*
deque.size();
deque.empty();
deque.resize(num);
deque.resize(num, elem);
*/

//3.4 deque˫�˲����ɾ������
/*
push_back(elem);
push_front(elem);
pop_back();
pop_front();
*/

//3.5 deque���ݴ�ȡ
/*
at(idx);
operator[];
front();
back();
*/

//3.6 deque�������
/*
insert(pos,elem);
insert(pos, n, elem);
insert(pos, beg, end);
*/

//3.7 dequeɾ������
/*
clear();
erase(beg, end);
erase(pos);
*/

//4. stack����
//4.1 stack���캯��
/*
stack<T> stkT;
stack(const stack &stk);
*/

//4.2 stack��ֵ����
/*
stack& operator=(const stack &stk);
*/

//4.3 stack���ݴ�ȡ����
/*
push(elem);
pop();
top();
*/

//4.4 stack��С����
/*
empty();
size();
*/

//5 queue����
//5.1 queue���캯��
/*
queue<T> queT;
queue(const queue &que);
*/

//5.2 queue��ȡ�������ɾ������
/*
push(elem);
pop();
back();
front();
*/

//5.3 queue��ֵ����
/*
queue& operator=(const queue &que);
*/

//5.4 queuq��С����
/*
empty();
size();
*/

//6 list����
//6.1 list���캯��
/*
list<T> lstT;
list(beg, end);
list(n, elem);
list(const list& lst);
*/

//6.2 list����Ԫ�ز����ɾ������
/*
push_back(elem);
pop_back();
push_front(elem);
pop_front();
insert(pos, elem);
insert(pos, n, elem);
insert(pos, beg, end);
clear();
erase(beg, end);
erase(pos);
remove(elem);
*/

//6.3 list��С����
/*
size();
empty();
resize(num);
resize(num, elem);
*/

//6.4 list��ֵ����
/*
assign(beg, end);
assign(n, elem);
list& operator=(const list &lst);
swap(lst);
*/

//6.5 list���ݵĴ�ȡ
/*
front();
back();
*/

//6.6 list ��ת����
/*
reverse();
sort();
*/

//7. set/multiset����
//7.1 set���캯��
/*
set<T> st;
mutiset<T> mst;
set(const set &st);
*/

//7.2 set��ֵ����
/*
set& operator=(const set &st);
swap(st);
*/

//7.3 set ��С����
/*
size();
empty();
*/

//7.4 set�����ɾ������
/*
insert(elem);
clear();
erase(pos);
erase(beg, end);
erase(elem);
*/

//7.5 set���Ҳ���
/*
find(key);
count(key);
lower_bound(keyElem);
upper_bound(keyElem);
equal_range(keyElem);
*/

//8 map/mutimap����
//8.1 map���캯��
/*
map<T1, T2> mapTT;
map(const map &mp);
*/

//8.2 map��ֵ����
/*
map& operator=(const map &mp);
swap(mp);
*/

//8.3 map��С����
/*
size();
empty();
*/

//8.4 map��������Ԫ�ز���
/*
map.insert(..);
map<int, string> mapStu;
mapStu.insert(pair<int, string>(3, "xiaozhao");
mapStu.insert(make_pair(-1, "xiaozhang");
mapStu.insert(map<int, string>::value_type(1, "xiaoli"));
mapStu[3] = "xiaoliu";
mapStu[5] = "xiaowang";
*/

//8.5 mapɾ������
/*
clear();
erase(pos);
erase(beg, end);
erase(keyElem);
*/

//8.6 map���Ҳ���
/*
find(key);
count(keyElem);
lower_bound(keyElem);
upper_bound(keyElem);
equal_range(keyElem);
*/


void main11()
{
	vector<int> arr = { 1, 2, 3 };
	
}