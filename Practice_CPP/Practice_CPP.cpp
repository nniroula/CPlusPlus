/*
 * Practice_CPP.cpp
 *
 *  Created on: Oct 24, 2020
 *      Author: nabinniroula
 */

//#include <iostream>
//using namespace std;

/*
// Q1 Write a simple function that adds two numbers
int func(){
	int a = 5;
	int b = 6;
	return a + b;
}

int main(){
	func(); // may not need this as it is invokded below too.
	cout<< "the output of the fucntion is "<< func();

	return 0;
}
*/

/*
// Q2 for Q1 above add parameters
int func2(int a,  int b){
	return a + b;
}

int main(){
	func2(2, 3);
	cout<<"The result of above function call is "<< func2(2, 3);
	return 0;
}
*/

//Q3 Now, accept a user input for it, and pass it as an argument.

/*
#include <iostream>
using namespace std;

int func3(int a, int b){
	return a + b;
}

int main(){
	cout<<"enter a first number: \n";
	int x, y;  // or you can do int x; inty; in two separate lines
	cin>>x;
	cout<<"enter your second number: "<< endl;  // endl should be outside of << unlike \n.
	// int y;
	cin>>y;
	cout<< "The function calculation results "<< func3(x, y);
	return 0;
}
*/

//Q4, separate the function into implementation and interface

/*

#include <iostream>
using namespace std;

// INTERFACE is a function declaration
int func4(int, int);  // You need semicolon with function declaration

int main(){
	int x, y;
	cout<<"Please enter your first number: \n";
	cin>>x;
	cout<<"Please enter your second number: \n";
	cin>>y;
	cout<<"The function invocation yields "<< func4(x, y);
	return 0;
}

// This is called implementation
int func4(int a, int b){
	return a + b;
}
*/

//S1 write a program that displays a person's first and last name.
/*

#include <iostream>
#include <string>
using namespace std;


int main(){
	string firstName;
	string lastName;
	cout<<"Please enter your first name\n";
	cin>>firstName;
	cout<<"Please enter your last name"<< endl;
	cin>>lastName;
	cout<<"Your full name is "<< firstName<< lastName<< "."<< endl;
	return 0;
}

*/
// Starting Out with C++, Write a function to calculate pay

/*
//Q1

#include<iostream>
//#include<string>

using namespace std;

double calculatePay(double hours, double rate){
	return hours * rate;
}

int main(){
	double x, y;
	cout<<"Please enter the hours you worked: \n";
	cin>>x;
	cout<<"Please enter your pay rate: "<< endl;
	cin>>y;
	cout<<"Your gross pay is "<< calculatePay(x, y);
	return 0;
}
*/

/*
//Q2 chapter 1 q 33

#include<iostream>

using namespace std;

int main(){
	int x = 0;
	int y = 5;
	x += 1;
	y += 1;
	y += x;
	cout<<"The value of the y is: "<< y <<endl;

	return 0;
}
*/

/*
// Q3 chapter 1 q 34

#include<iostream>
using namespace std;

int main(){
	int j, k, l;
	j = 10;
	k = 2;
	l = 4;
	j = j*k;
	l *= k;
	k = j + l;
	cout<<"The current value of k is: "<< k << endl;

	return 0;
}
*/

// Q4 chapter 1 q 35
#include <iostream>
using namespace std;

int threeVariableFunction(){
	int a = 1;
	int b = 10;
	int c = 100;
	int x = 0;
	x = c*3;
	x+= b*6;
	x = x + 5*a;
	return x;
}

int main(){
	cout<<"The calcualtation of the above fucntion gives "<<\
			threeVariableFunction()<< endl;
	return 0;
}



