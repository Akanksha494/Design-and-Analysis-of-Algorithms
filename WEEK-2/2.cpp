#include<bits/stdc++.h>
#include<math.h>

using namespace std;
 
 int duplicate(int a[],int n)
 {
    int i,j,k;
    for(i=0;i<n-2;i++)
    {
        for(j=i+1;j<n-1;j++)
        {
           for(k=j+1;k<n;k++)
            {
              if(a[i]+a[j]==a[k])
              {
               cout<<i<<j<<k;
               return 1;
              }
               
            }
        }
    }

    return -1;
 }

int main()
{
    int t,i,j,k;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }

        int p=duplicate(a,n);
        if(p==-1)
        {
            cout<<"No Sequence Found";
        }
        
    }
    return 0;
}
