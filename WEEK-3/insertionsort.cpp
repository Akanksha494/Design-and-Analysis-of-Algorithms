#include<bits/stdc++.h>

using namespace std;



int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];

		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}

		int i,j,data,s=0,c=0;
		for(i=1;i<n;i++)
		{
          data=a[i];
          j=i-1;
          c++;
          s++;

          while(j>=0 && a[j]>data)
          {
          	a[j+1]=a[j];
          	j=j-1;
          	s++;
            
          }
          a[j+1]=data;

          
        }
        for(i=0;i<n;i++)
        {
        	cout<<a[i]<<" ";
        }

        cout<<endl<<"Comparisons ="<<c<<endl;
        cout<<"Shifts ="<<s<<endl;
	}
	return 0;
}
