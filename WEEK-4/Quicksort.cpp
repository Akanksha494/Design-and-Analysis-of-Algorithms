#include<iostream>
using namespace std;
int swaps=0, comparison=0;
void swap(int* val1,int* val2){
    
    int temp = *val1;
    *val1 = *val2;
    *val2 = temp;
}
int partition(int arr[],int first,int last){
    int pivot = first;
    int i = first,j = last;
    while(i<j){
        while (arr[i] <= arr[pivot] && i <= last){
                i++;
                comparison++;
        }
        while (arr[j] > arr[pivot] && j >= first){
                j--;
                comparison++;
        }

        if(i<j){
            swap(&arr[i],&arr[j]);
            swaps++;
        }
    }
    swap(&arr[pivot],&arr[j]);
    swaps++;
    return j;
}
void quickSort(int arr[],int first, int last){
    if(first < last){
        int p = partition(arr,first,last);
        quickSort(arr,first,p-1);
        quickSort(arr,p+1,last);
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
        quickSort(arr,0,n-1);
        for(int i=0;i<n;i++)
            cout<<arr[i]<<" ";
        cout<<"\nComparisons = "<<comparison<<endl;
        cout<<"Swaps = "<<swaps<<endl;
    }
    return 0;
}