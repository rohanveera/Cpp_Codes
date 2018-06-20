#include <bits/stdc++.h>
using namespace std;


int main() {
	//code
	int t,n,k;
	cin >>t;
	while(t){
	    cin >>n;
	    int a[n];
	    for(int i=0;i<n-1;i++){
	        
	        cin>>k;
	        a[i]=k;
	        
	    }
	    sort(a,a+(n-1));
	    
	    for(int i=0;i<n;i++){

	        if(a[i]!=i+1){
	            
	            cout<<i+1 <<endl;
	            break;
	        }
	    }
	    t--;
	}
	
	return 0;
}
