#include<iostream>



using namespace std;







	int main () {

	

	char arr[10] = "abcde";

	char *chrptr = arr; //chrptr is a ptr that pts to the char array arr
	
	
		
	//loop to print in reverse order
	
	for (int i = 0 ; i <= 4; i++) {

	cout<<*((4-i)+chrptr);


	}




	cout<<endl;











	}
