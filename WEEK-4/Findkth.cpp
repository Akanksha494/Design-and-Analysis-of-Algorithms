#include<iostream>
using namespace std;

void swap(int* val1,int* val2){
    
    int temp = *val1;
    *val1 = *val2;
    *val2 = temp;
}
int partition(int arr[],int first,int last){
    int pivot = arr[last];
    int i = first;
    for(int j=first;j<=last-1;j++){
        if(arr[j] <= pivot){
            swap(&arr[i],&arr[j]);
            i++;
        }
    }
    swap(&arr[i],&arr[last]);
    return i;
}
int kthElement(int arr[],int first, int last,int k){
    if(k > 0 && k <= last-first+1){
        int pos = partition(arr,first,last);
        if(pos-first == k-1)
            return arr[pos];
        else if(pos-first > k-1)
            return kthElement(arr,first,pos-1,k);
        else
            return kthElement(arr,pos+1,last,k-pos+first-1);
    }
    return -1;
}
int main(){
    int t,n,k;
    cin>>t;
    while(t--){
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        cin>>k;
        cout<<kthElement(arr,0,n-1,k);
    }
    return 0;
}