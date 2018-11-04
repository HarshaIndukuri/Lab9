#include<iostream>



using namespace std;




	int main () {

	int arr[10];

	int *p = arr;

	cout<<"Enter the elements of the array ";

	for (int i = 0; i<10; i++) {

	cin>>arr[i];

	cout<<endl;


	}

	//Using standard index notation

	for (int i = 0; i<10; i++) {

	cout<<arr[i]<<endl;


	}

	cout<<endl;

	//Using pointer notation

	for (int i = 0; i<10; i++) {

	cout<<*(p+i)<<endl;


	}


	}
	
	




	

	







