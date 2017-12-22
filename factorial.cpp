#include <iostream>
long long fac(long long n){
	if (n == 0){
		return 1;
	}
	else {
		return n * fac(n-1);
	}
}
int main(){
	long long a;
	std::cout << "enter the number bitch: ";
	std::cin >> a;
	std::cout << fac(a) << std::endl;
}
