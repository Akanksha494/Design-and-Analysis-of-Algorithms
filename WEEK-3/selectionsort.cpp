#include<iostream>

using namespace std;

int main() {
  
  int t;
	
	cin >> t;
	
	while(t--) {
	  
		int n;
		
		cin >> n;
		
		int a[n];
		
		for(int i = 0; i < n; i++) {
		  
			cin >> a[i];
		}
    
        int i, j, min, s = 0,c = 0;
    
        for(i = 0; i < n - 1; i++) {
      
	    	min = i;
	    	
	    	for(j = i + 1; j < n; j++) {
	    	  
	    		if(a[j] < a[min]) {
	    		  
	    			c++;
	    			
                   min = j;
	    		}
	    	}

         int temp = a[i];
	    	a[i] = a[min];
	    	a[min] = temp;
	    	
         s++;
		 c++;    
	    }
	    
	    for(int i = 0; i < n; i++) {
	      
	      cout << a[i] << " ";
	    }
	    
	    cout << endl << "swap = " << s << endl;
    
		  cout << "comparison = " << c << endl;

	}
	
	return 0;
}
