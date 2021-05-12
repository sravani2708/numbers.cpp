//Armstrong number
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int count=0,total=0,n,r,temp,p,restore;
	cin>>n;
	temp=n;
	while(n)
	{
		r=n%10;
		n=n/10;
		count=count+1;
	}
	n=temp;
	while(n)
	{
		r=n%10;
		n=n/10;
		p=pow(r,count);
		total=total+p;
	}
	cout<<total<<endl;;
	n=temp;
	if (total==n)
	{
		cout<<"armstrong number";
	}
	else
	{
		cout<<"not armstrong number";
	}
	
	
		
	
}




