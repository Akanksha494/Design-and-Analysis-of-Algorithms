#include<iostream>
using namespace std;
int inversion=0,comparison=0;
void merge(int arr[], int start, int mid, int end, int n);
void mergeSort(int arr[], int start, int end, int n){
    int mid;
    if(start < end){
        mid = (start+end)/2;
        mergeSort(arr,start,mid,n);
        mergeSort(arr,mid+1,end,n);
        merge(arr,start,mid,end,n);
    }
}
void merge(int arr[], int start, int mid, int end, int n){
    int i = start, j = mid+1, k, index = start, temp[n];
    while(i <= mid && j <= end){
        if(arr[i] < arr[j]){
            temp[index] = arr[i];
            i++;
            comparison++;
        }
        else{
            temp[index] = arr[j];
            j++;
            inversion++;
            comparison++;
        }
        index++;
    }
    if(i > mid){
        while(j <= end){
            temp[index] = arr[j];
            index++;
            j++;
        }
    }
    else{
        while(i <= mid){
            temp[index] = arr[i];
            index++;
            i++;
        }
    }
    k = start;
    while(k < index){
        arr[k] = temp[k];
        k++;
    }
}
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        mergeSort(arr,0,n-1,n);
        for(int i=0;i<n;i++)
            cout<<arr[i]<<" ";
        cout<<"\nComparisons = "<<comparison<<endl;
        cout<<"Inversions = "<<inversion<<endl;
    }
    return 0;
}