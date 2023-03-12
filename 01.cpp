// (1)	 Create	an	Array	of	size	10	of	integers.	Take	input	from	the	user	for	these	
//       10	elements	and	print	the	entire	array	after	that.	

#include<iostream>

using namespace std;
#include <iomanip>
using std::setw;


int main(){

    int a[6];

    cout<< "Enter the numbers of array elements : "<<endl;

    for(int i=0 ; i<= 5 ; i++){

        cin>>a[i];
        
    }

    for(int i=0 ; i<+ 5 ; i++){

        cout<<"Array elements are "<<a[i]<<endl;
        
    }

    swap(a[1],a[2]);

    for(int i=0 ; i<+ 5 ; i++){

        cout<<"Array elements are "<<a[i]<<endl;
        
    }



}