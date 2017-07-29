#include<iostream>
#include<algorithm>
#include<stdlib.h>
#include<string>
#include<queue>
using namespace std;
struct cmp {
	bool operator()(float a,float b) {
		return a > b;
	}
};
int main()
{
	priority_queue<float,vector<float>,cmp> list;
	int N,t;
	float temp;
	cin >> N;
	for (int i = 0;i < N;i++)
	{
		cin >> t;
		list.push((float)t);
	}
	while (list.size() != 1)
	{
		temp = list.top();
		list.pop();
		temp += list.top();
		list.pop();
		temp /= 2;
		list.push(temp);
	}
	cout << (int)list.top();
	system("pause");
}