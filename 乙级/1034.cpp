#include<iostream>
#include<algorithm>
#include<string>
#include<sstream>
using namespace std;
long long gcd(long long t1, long long t2) {
    return t2 == 0 ? t1 : gcd(t2, t1 % t2);
}
string D2S(long long a1,long long a2)
{
	stringstream tempS;
	string retval;
	int sym=1;
	if(a2==0)
		return "Inf";
	int g=gcd(a1,a2);
	a1/=g;
	a2/=g;
	if(a1*a2<0)
	{
		sym=-1;	
		tempS<<"(-";
		if(a1<0)
			a1*=-1;
		if(a2<0)
			a2*=-1;
	}
	if(a1%a2==0)
	{
		tempS<<a1/a2;
	}
	else
	{
		if(a1 >a2)
		{
			tempS<<a1/a2<<" ";
			a1=a1%a2;
		}
		tempS<<a1<<"/"<<a2;
	}
	
	
	if(sym<0)tempS<<")";
	retval=tempS.str();
	return retval;
}
int main()
{
	long long a1,b1,a2,b2;
	scanf("%lld/%lld %lld/%lld",&a1,&b1,&a2,&b2);
	string a,b;
	a=D2S(a1,b1);
	b=D2S(a2,b2);
	cout<<a<<" + "<<b<<" = "<<D2S(a1*b2+a2*b1,b1*b2)<<endl;
	cout<<a<<" - "<<b<<" = "<<D2S(a1*b2-a2*b1,b1*b2)<<endl;
	cout<<a<<" * "<<b<<" = "<<D2S(a1*a2,b1*b2)<<endl;
	cout<<a<<" / "<<b<<" = "<<D2S(a1*b2,a2*b1);
}