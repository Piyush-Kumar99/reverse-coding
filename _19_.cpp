#include<string>
#include<conio.h>
#include<iostream>
#include<map>
using namespace std;
typedef long long int ll;
int main()
{
	while(1)
	{
		string s;
		cout<<"Enter a string : ";
		cin>>s;
		ll max=INT_MIN,min=INT_MAX;
		for(ll i=0;i<s.size();i++)
		{
			if(s[i]<min)min=s[i];
			if (s[i]>max)max=s[i];
		}
		cout<<(ll)(max-min)<<endl;
	}
	return(0);
}
