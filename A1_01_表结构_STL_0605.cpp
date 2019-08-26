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
//1.1 string 构造函数
/*
string();
string(const string& str);
string(const char* s);
string(int n, char c);
*/

//1.2 string 基本赋值操作
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

//1.3 string 存取字符操作
/*
char& operator[](int n);
char& at(int n);
*/

//1.4 string 拼接操作
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

//1.5 string 查找和替换
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

//1.6 string 比较操作
/*
int compare(const string& s) const;
int compare(const char* s) const; 
*/

//1.7 string 子串
/*
string substr(int pos = 0, int n = npos) const;
*/

//1.8 string插入和删除操作
/*
string& insert(int pos, const char* s);
string& insert(int pos, const string& str);
string& insert(int pos, int n, char c);
string& earse(int pos, int n = npos);
*/

//1.9 string和c-style字符串转换
/*
string str = "itcast";
const char* cstr = str.c_str();

char* s = "itcast";
string str(s);
*/

//2. vector
/*
2.1 vector构造函数
vector<T> v;
vector<v.begin(), v.end());
vector(n, elem);
vector(const vector &vec);

example:
int arr[] = {2,3,4,1,9};
vector<int> v1(arr, arr + sizeof(arr) / sizeof(int));
*/

//2.2 vector 常用赋值操作
/*
assign(beg, end);
assign(n, elem);
vector& operator=(const vector &vec);
swap(vec);
*/

//2.3 vector大小操作
/*
size();
empty();
resize(int num);
capacity();
reserve(int len);
*/

//2.4 vector数据存取操作
/*
at(int idx);
operator[];
front();
back();
*/

//2.5 vector插入和删除操作
/*
insert(const_iterator pos, int count,ele);
push_back(ele);
pop_back();
erase(const_iterator start, const_iterator end);
erase(const_iterator pos);
clear();
*/

//3. deque容器
//3.1 deque构造函数
/*
deque<T> deqT;
deque(beg, end);
deque(n, elem);
deque(const deque &deq);
*/

//3.2 deque幅值操作
/*
assign(beg, end);
assign(n, elem);
deque& operator=(const deque &deq);
swap(deq);
*/

//3.3 deque大小操作
/*
deque.size();
deque.empty();
deque.resize(num);
deque.resize(num, elem);
*/

//3.4 deque双端插入和删除操作
/*
push_back(elem);
push_front(elem);
pop_back();
pop_front();
*/

//3.5 deque数据存取
/*
at(idx);
operator[];
front();
back();
*/

//3.6 deque插入操作
/*
insert(pos,elem);
insert(pos, n, elem);
insert(pos, beg, end);
*/

//3.7 deque删除操作
/*
clear();
erase(beg, end);
erase(pos);
*/

//4. stack容器
//4.1 stack构造函数
/*
stack<T> stkT;
stack(const stack &stk);
*/

//4.2 stack赋值操作
/*
stack& operator=(const stack &stk);
*/

//4.3 stack数据存取操作
/*
push(elem);
pop();
top();
*/

//4.4 stack大小操作
/*
empty();
size();
*/

//5 queue容器
//5.1 queue构造函数
/*
queue<T> queT;
queue(const queue &que);
*/

//5.2 queue存取、插入和删除操作
/*
push(elem);
pop();
back();
front();
*/

//5.3 queue赋值操作
/*
queue& operator=(const queue &que);
*/

//5.4 queuq大小操作
/*
empty();
size();
*/

//6 list容器
//6.1 list构造函数
/*
list<T> lstT;
list(beg, end);
list(n, elem);
list(const list& lst);
*/

//6.2 list数据元素插入和删除操作
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

//6.3 list大小操作
/*
size();
empty();
resize(num);
resize(num, elem);
*/

//6.4 list幅值操作
/*
assign(beg, end);
assign(n, elem);
list& operator=(const list &lst);
swap(lst);
*/

//6.5 list数据的存取
/*
front();
back();
*/

//6.6 list 反转排序
/*
reverse();
sort();
*/

//7. set/multiset容器
//7.1 set构造函数
/*
set<T> st;
mutiset<T> mst;
set(const set &st);
*/

//7.2 set赋值操作
/*
set& operator=(const set &st);
swap(st);
*/

//7.3 set 大小操作
/*
size();
empty();
*/

//7.4 set插入和删除操作
/*
insert(elem);
clear();
erase(pos);
erase(beg, end);
erase(elem);
*/

//7.5 set查找操作
/*
find(key);
count(key);
lower_bound(keyElem);
upper_bound(keyElem);
equal_range(keyElem);
*/

//8 map/mutimap容器
//8.1 map构造函数
/*
map<T1, T2> mapTT;
map(const map &mp);
*/

//8.2 map赋值操作
/*
map& operator=(const map &mp);
swap(mp);
*/

//8.3 map大小操作
/*
size();
empty();
*/

//8.4 map插入数据元素操作
/*
map.insert(..);
map<int, string> mapStu;
mapStu.insert(pair<int, string>(3, "xiaozhao");
mapStu.insert(make_pair(-1, "xiaozhang");
mapStu.insert(map<int, string>::value_type(1, "xiaoli"));
mapStu[3] = "xiaoliu";
mapStu[5] = "xiaowang";
*/

//8.5 map删除操作
/*
clear();
erase(pos);
erase(beg, end);
erase(keyElem);
*/

//8.6 map查找操作
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