#include<bits/stdc++.h>
#include<math.h>

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

        int key,i,j,c=0;
        cin>>key;

        for(int i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(abs(a[j]-a[i])==key)
                {
                    c++;
                }
            }
            
        }
        cout<<c<<endl;
    }
    return 0;

}