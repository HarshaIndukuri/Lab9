#include<iostream>



using namespace std;



	int myStrLen (char *ptr) {

	int i;
	

	//loop that continues till it finds the null character

	for (i = 0; *(ptr + i) != '\0'; i++) {


	*(ptr + i);

	}


	return i;

	}

	










	int main () {


	char s[10] = "abcde";

	char *charptr = s;

	int l;

	l = myStrLen (charptr);

	cout<<"The length of the string is "<<l<<" ."<<endl;



	}

	





