#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;

int main()
{
	int a=0,b,c,d,e,f=0;/*?? */


	for (a=0;a<100;a++)/*????x100*/
	{
		b=rand()%10;
		c=rand()%10;
		cout<<b<<"*"<<c<<"=?";
		cin>>d;
		e=b*c;
		if (e==d)
		{
			cout<<"Yes"<<endl;
			f++;
		}
		else
		{
			cout<<"NO"<<endl;
			f--;
		}
		b=0;
		c=0;
		d=0;
		e=0;

	}
	cout<<"??"<<f<<endl;

	return 0;
}
