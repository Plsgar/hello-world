#include<iostream>
using namespace std;
void move(char a,char c);
void Hanoi(int n,char a,char b,char c);

void Hanoi(int n,char a,char b,char c)
{
	if(n==1)
		move(a,c);
	else
	{
		Hanoi(n-1,a,c,b);
		move(a,c);
		Hanoi(n-1,b,a,c);
	}
}
void move(char a,char c)
{
	cout<<a<<"-->"<<c<<endl;
}
int main()
{
	int sum;
	cout<<"enter num: ";
	cin>>sum;
	Hanoi(sum,'A','B','C');
	return 0;
}
