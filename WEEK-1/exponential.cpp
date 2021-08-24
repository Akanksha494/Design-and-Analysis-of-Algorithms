#include<bits/stdc++.h>
using namespace std;

int binarysearch(int a[], int, int, int, int&);

int exponential(int a[], int key, int n, int &count)
{
  
  if(a[0] == key)
    return 0;

  int i = 1;

  while(i < n && a[i] <= key)
  {
    i = i * 2;
    count++;
  }
  
   return binarysearch(a, i / 2, min(i, n - 1), key, count);  	
}

int binarysearch(int a[], int l, int r, int key, int &count)
{ 
	
   if(r >= l)
   {
       int mid = l + (r - l) / 2;

       count++;

       if(a[mid] == key)
       {
     	   return mid;
       }

       if(a[mid] > key)
         return binarysearch(a, l, mid - 1, key, count);

       return binarysearch(a, mid + 1, r, key, count);	
    }
 
 return -1;
}

int main()
{
	int t, r;

	cin >> t;

	while(t--)
  {
  	int n, count=0;

  	cin >> n;

  	int a[n];

  	for(int i = 0; i < n; i++)
  	{
  		cin >> a[i];
  	}

  	int key;

  	cin >> key;

    r = exponential(a, key, n, count);
 
    if(r == -1)
      cout << "not present "<< count << endl;
    else
      cout << "present "<< count << endl;
     
    }
    
    return 0;

}