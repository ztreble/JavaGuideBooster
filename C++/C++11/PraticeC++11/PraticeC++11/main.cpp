#include<iostream>
#include<list>
#include<vector>
#include <functional>
#include <algorithm>

using namespace std;
int f(){}
//�±�׼����Ϊ��ģ�嶨��һ�����ͱ���
template<typename T> using twin = pair<T, T>;
twin<string> authors;

class test {
	static const int months2 = 12;//��̬int����
	static const double pi2 = 3.14;//��̬double����
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
	//sum��������f�����ý��᷵�ص�����
	decltype(f()) sum = 2;
	int i = 42, *r = &i;
	//c��int&����
	int q = 2;
	decltype(*r) c= q;
	int ia[] = { 0,1,2,3,4,5 };
	//begin��end�������Ա�������
	int* beg = begin(ia);
	int* last = end(ia);
	//ʹ��initializer_list��ʼ����ͬ���͵Ķ��ʵ��
	string a("aaa");
	init_msg({ a ,a,a,a,a});

	//ʹ��insert���ض�λ�÷�������Ԫ��
	string word;
	list<string> lst;
	auto iter = lst.begin();
	while (cin >> word)
		//����ֵָ���µ�Ԫ��
		iter = lst.insert(iter, word);

	auto bindTest = std::bind(test1, std::placeholders::_1, std::placeholders::_2);
	//����ֵ���и�ֵ������ģ��������ǿ���ʹ�������޶����޶�ֻ������ֵ��ֵ
	string a, b;
	a + b = "asdf";
	

}