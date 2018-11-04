#include<iostream>





using namespace std;






	double *maximum (double ar[], int k) {



	double *ptr = ar;

	double max = *ptr;

	double t;


	if (ar == NULL) { return NULL;}

	

	

	//Sorting elements in descending order

	for (int i=0; i<k; i++) {


	for (int j=i+1; j<k; j++) {

	//Switching elements if the element on right side is greater than the one on the left
	if (*(ptr +j) > *(ptr +i)) {
		
	t = *(ptr +i);
	
	*(ptr +i) = *(ptr +j);

	*(ptr +j) = t;

	}

	//If element on rt side is equal to the number then it becomes the next element of the array
	if (*(ptr +j) == *(ptr +i)) {

	t = *(ptr +(i+1));
	
	*(ptr +(i+1)) = *(ptr +j);

	*(ptr +j) = t;

	}
	

	}


	}


	double *ptr1 = ar;

	cout<<"The largest value of the array is "<<*ptr1<<" ."<<endl;


	return ptr1;


	}


	

	




























	int main () {


	int n;


	cout<<"Enter the number of elements you want in your array ";

	cin>>n;


	cout<<endl;


	double arr[n];

	double *pt;


	cout<<"Enter the elements of the array "<<endl;
	
	//Loop to take elements of array

	for (int i = 0; i<n; i++) {


	cin>>arr[i];

	}

	


	pt = maximum (arr, n);


	cout<<"The address to the maximum value of the array is "<<pt<<" .";
	


	cout<<endl;



	}
