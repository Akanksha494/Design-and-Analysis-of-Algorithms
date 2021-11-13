#include <bits/stdc++.h>
using namespace std;

void Find(int a[], int n, int key){
    sort(a,a+n);
    int l=0;
    int h=n-1;
    int f=0;

        while(l<h){
            if(a[l]+a[h]==key){
                cout<<a[l]<<" "<<a[h]<<endl;
                h--;
                f=1;
            }
            else if (a[l]+a[h]<key)
                l++;
            else
                h--;
        }
        if(!f)
            cout<<"\nNo Such Pair Exist"<<endl;
}

int main(){
    int n,i,t,key;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n];
        for(i=0;i<n;i++){
            cin>>a[i];
        }
    cin>>key;
    Find(a, n, key);
    }
    return 0;
}