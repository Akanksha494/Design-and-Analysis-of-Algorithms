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
        
        int data;
        cin>>data;
	  
	    int l=0,mid,count=0;
	    int f=n-1;
	
	    while(l<=f)
		{		
    		mid=(l+f)/2;
    		count++;
    		if(a[mid]==data)
    		{
    		   cout<<"element present at "<<" "<<mid<<endl;
    			break;
    	    }
    		else if(a[mid]<data)
    		    l=mid+1;
    		else
    		    f=mid-1;
    	}
    	
		if(f<l)
		{
		    cout<<"Element  not present"<<endl;
    	}
    	cout<<"the total no of comparison is"<<" "<<count<<endl;

	}
	return 0;
}
