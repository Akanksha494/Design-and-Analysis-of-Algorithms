#include<iostream>
using namespace std;
int main()
{
int t;
cin>>t;	
for(int i=0;i<t;i++)	
{
	int n;
	cin>>n;
	int a[n+1];
    for(int i=1;i<=n;i++)
    {
    	cin>>a[i];
	}
   int data,flag,count=0;
   cin>>data;
   for(int i=1;i<=n;i++)
   {
    if(a[i]==data)
     {
     	flag=i;
  	  break;
     }	
    else
    {
  	flag=0;
    }
    count++;
}

if(flag!=0)
{
	cout<<"element is present at"<<" "<<flag<<endl;
	
}
else
{
   cout<<"element is not present"<<endl;
   	
}

cout<<"the total no of comparison"<<" "<<count<<endl;
}
return 0;
}


