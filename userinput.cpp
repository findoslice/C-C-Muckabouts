#include <iostream>

#ifndef USERINPUT_CPP
#define USERINPUT_CPP

namespace userinput{
	char getUserValue(){
		std::cout << "Enter a character: ";
		char a;
		std::cin>>a;
		return a;
	}
}
#endif
//int main(){
//	char x;
//	x = userinput::getUserValue();
//	std::cout << "The ascii code for char " << x << " is " << static_cast<int>(x) << std::endl;
//	return 0;
//}
