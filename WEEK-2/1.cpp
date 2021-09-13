#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int j, n;
        cin>>n;
        int comp=0,shift=0,temp,a[n];

        for(int i=0;i<n;i++)
            cin>>a[i];

        for(int i=1;i<n;i++)
        {
            temp=a[i];
            j=i-1;

            while(1)
            {
                if(a[j]>temp)
                {
                    comp++;
                    shift++;
                    swap(a[j],a[j+1]);
                    temp=a[j];
                }
                else {
                    comp++;
                    break;
                }

                j--;

                if(j==-1)
                {
                    comp++;
                    break;
                }
            }
        }

        for(int i=0;i<n;i++)
            cout<<a[i]<<"  ";

        cout<<"\ncomparision = "<<comp<<"\nshift = "<<shift<<"\n";
    }
}

