#include <iostream>
#include "userinput.cpp"

int ascii(){
	char a,b;
        a = userinput::getUserValue();
        std::cout<< a << " has ASCI character code " <<
        static_cast<int>(a) << std::endl;
        std::cout << "would you like to find another code\b\b\b\b\b\a\a\a (y/n)? ";
	std::cin >> b;
	if (b == 'y'){
		ascii();
	}
        return 0;
}

int main(){
	ascii();	
}
