//palindrome number
#include<iostream>
using namespace std;
int main()
{
	int rev=0,n,r,temp;
	cin>>n;
	temp=n;
	while(n)
	{
		r=n%10;
		rev=rev*10+r;
		n=n/10;
		
		
	}
	cout<<rev<<endl;
	if(temp==rev)
    {
    	cout<<"palindrome number";
	}
	else
	{
		cout<<"not palindrome number";
	}	
	
}




