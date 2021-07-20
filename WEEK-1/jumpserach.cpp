#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int n;
		cin>>n;
		int a[n];
		for(int j=0;j<n;j++)
		{
			cin>>a[j];
		}
		int data,count=0;
		cin>>data;
		int l=0,x;
     	int r=sqrt(n);
	    while(a[r]<=data&&r<n)
	   {
	   	count++;
		l=r;
		r+=sqrt(n);
		if(r>n-1){
			r=n;
		}
	   }  
	   for(int i=l;i<r;i++)
	   {
		if(a[i]==data)
		{
		
			x=i;
			break;
		}
		else
		  x=1;
		  
	}
		if(x==1)
		{
			cout<<"element is not present"<<endl;
		}
		else 
		{
			cout<<"element is present at"<<" "<<x<<endl;
		}
		cout<<"number of comparision"<<" "<<count+1<<endl;
	    
  }
}
