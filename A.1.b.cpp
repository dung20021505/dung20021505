# include <iostream>
	using namespace std;
	int a[4] = {1, 2, 3, 4};    // N > 4
	int main()
	{
	    int c[4] = {1, 2, 3, 4};    // N > 4
	    for (int i=0; i<4; i++)
	        cout << a[i] << " ";
	    cout << endl;
	    for (int i=0; i<4; i++)
	        cout << c[i] << " ";
	    return 0;
	}

