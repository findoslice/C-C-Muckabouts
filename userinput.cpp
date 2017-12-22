#include <iostream>

char getUserValue(){
	std::cout << "Enter a number: ";
	char a;
	std::cin>>a;
	return a;
}
int main(){
	char x;
	x = getUserValue();
	std::cout << ~x << " " << x << std::endl;
	return 0;
}
