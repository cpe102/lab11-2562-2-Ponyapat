#include<iostream>

using namespace std;

void mySwap (int &,int &); //Pass variables by references

int main(){
	int x = 6, y = 9;
	cout << "Before swapping:\n";
	cout << "x = " << x << ", y = " << y << "\n";
	mySwap (x,y);
	cout << "After swapping:\n";
	cout << "x = " << x << ", y = " << y << "\n";
	
	return 0;
}

void mySwap(int &a,int &b){
	int temp = a;
	a = b;
	b = temp;
}

//Write function definition here
/*
??? mySwap (???){
}
*/

