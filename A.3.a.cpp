# include <iostream>
using namespace std;
	int main()
	{
	    int a[2][12] = {
	     {31,28,31,30,31,30,31,31,30,31,30,31},
	     {31,29,31,30,31,30,31,31,30,31,30,31}
	    };
	    for (int i=0; i<2; i++){
	        for (int j=0; j<12; j++){
	            cout << a[i][j] << " ";
	        }
	        cout << endl;
	    }
	    cout << endl;
	    
		 int b[2][12] = {
	     31,28,31,30,31,30,31,31,30,31,30,31,
	     31,29,31,30,31,30,31,31,30,31,30,31
	    };
	     for (int i=0; i<2; i++){
	        for (int j=0; j<12; j++){
	            cout << b[i][j] << " ";
	        }
	        cout << endl;
	     }

	
	    return 0;
	}
