#include<iostream>
#include<list>
#include<vector>
#include <functional>
#include <algorithm>

using namespace std;
int f(){}
//新标准允许为类模板定义一个类型别名
template<typename T> using twin = pair<T, T>;
twin<string> authors;

class test {
	static const int months2 = 12;//静态int常量
	static const double pi2 = 3.14;//静态double常量
	static constexpr double pi3 = 3.14;
};
void init_msg(initializer_list<string> lis){


}

template<typename T>
auto fun(T* a)->decltype(*a) {
	T&&& a;
	T&&&&&&&&& a;
}
template <typename T,typename... Args>
void foo(const T& T,const Args&... rest);

vector<int> vi;
void transform(vector<int>::iterator) {

}
void test1(string a, string b) {

}
int main() {
	//sum的类型是f被调用将会返回的类型
	decltype(f()) sum = 2;
	int i = 42, *r = &i;
	//c是int&类型
	int q = 2;
	decltype(*r) c= q;
	int ia[] = { 0,1,2,3,4,5 };
	//begin和end函数可以遍历数组
	int* beg = begin(ia);
	int* last = end(ia);
	//使用initializer_list初始化相同类型的多个实参
	string a("aaa");
	init_msg({ a ,a,a,a,a});

	//使用insert在特定位置反复插入元素
	string word;
	list<string> lst;
	auto iter = lst.begin();
	while (cin >> word)
		//返回值指向新的元素
		iter = lst.insert(iter, word);

	auto bindTest = std::bind(test1, std::placeholders::_1, std::placeholders::_2);
	//对右值进行赋值是允许的，但是我们可以使用引用限定符限定只能向左值赋值
	string a, b;
	a + b = "asdf";
	

}