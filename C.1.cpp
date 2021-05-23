#include<iostream>
using namespace std;

int main(){
	int a[10000] ;
	int i,j,n;
	cin >> n; 
	
	for (i=0;i<n;i++){
		cin >> a[i]; 
	}
	for (i=0;i<n;i++){
		for (j=i+1;j<n;j++){
			if (a[i] == a[j]) {
				cout << "Yes" ; 
				return 0; 
			}
			 
		} 
	} 
	cout << "NO"; 
} 
