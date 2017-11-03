#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include <map>
#include <fstream> 
using namespace std;
struct node
{
	int add;
	int dat;
	int nadd;
};

int main()
{
	ifstream inFile("infile.txt");
	streambuf *strmin_buf = cin.rdbuf();
	cin.rdbuf(inFile.rdbuf());

	map<int,int> LMap;
	int head, N, K;
	vector<node>inList;
	vector<node>List;
	cin >> head >> N >> K;
	if (K==0)K=1;
	node temp;
	for (int i = 0;i < N;i++)
	{
		cin >> temp.add >> temp.dat >> temp.nadd;
		inList.push_back(temp);
		LMap[temp.add] = i;
	}
	int add = head;
	while (add != -1)
	{
		temp = inList[LMap[add]];
		List.push_back(temp);
		add = temp.nadd;
	}
	for(int i=0;i<List.size()/K;i++)
		reverse(List.begin()+i*K,List.begin()+i*K+K);
	for (int i = 0;i < List.size()-1;i++)
		printf("%05d %d %05d\n", List[i].add, List[i].dat, List[i+1].add);
	printf("%05d %d -1", List[List.size()-1].add, List[List.size()-1].dat);

	inFile.close();
	cin.rdbuf(strmin_buf);
	system("pause");
}