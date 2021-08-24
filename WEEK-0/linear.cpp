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
	int a[n];
    for(int j=0;j<n;j++)
    {
    	cin>>a[j];
	}
   int data,flag,count=0;
   cin>>data;
   for(int j=0;j<n;j++)
   {
    if(a[j]==data)
     {
     	flag=j;
     	count++;
  	  break;
     }	
    else
    {
  	flag=0;
  	count++;
    }
    
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


