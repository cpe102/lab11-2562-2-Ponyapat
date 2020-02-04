#include<iostream>

using namespace std;


long long int fibonacci(long long int n);

int main(){
	cout << fibonacci(0) << "\n";
	cout << fibonacci(1) << "\n";
	cout << fibonacci(2) << "\n";
	cout << fibonacci(15) << "\n";
	cout << fibonacci(30) << "\n";
	cout << fibonacci(50) << "\n";
	
	return 0;
}


long long int fibonacci(long long int n){
	 if(n == 0 || n == 1){
      return n;
   } else if(n > 1){
      return n = fibonacci(n-1) + fibonacci(n-2);
   }
}

//Write definition of function fibonacci() here
/*
??? fibonacci(???){
  fibonacci(x-1) + fibonacci(x-2)
}
*/
