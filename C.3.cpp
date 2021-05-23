#include<iostream>
using namespace std;
   int sodoi (int s)
    { 
		int i,d[100],t;
	    for ( i=0; s>0; i++){
	        d[i]=s%10;
			s=s/10;
	        t=i+1;
	       }
	    for ( i=0;i<t; i++){
	       if (d[i] != d[t-1-i]){
	       	  return 0;
	       }
	    return 1;
	    }
    }
	int main(){
		int n,j,i,t,A,B;
		cin >> n;
		for ( i=0; i<n;i++){
			t=0;
			cin >> A;
		    cin >> B;
		    for ( j=A;j<=B;j++)  {
			    if(sodoi(j)==1){
				t=t+1;
			    }
		    } 
		    cout << t << endl; 
	    }
		return 0;
	} 
