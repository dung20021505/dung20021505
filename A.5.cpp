# include <iostream>
# include <cstdlib>
# include <ctime>
using namespace std;
   int main()
   {
   	srand (time(NULL));
   	    int i,j,temp; 
	    int a[30];
	    for ( i=0; i<30; i++){
	        a[i] = rand ()%100 +1;
	    }
	    for ( i=0; i<30; i++){
	        for ( j=i+1; j<30; j++){
	            if(a[i]>a[j]){
	                 temp = a[i];
	                a[i] = a[j];
	                a[j] = temp;
	            }
	        }
	    }
	    for ( i=0; i<30; i++){
	        cout << a[i] << " ";
	    }
	    return 0;
	}
