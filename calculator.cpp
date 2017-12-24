#include <iostream>
//I just made this to practice input sanitisation
char getOperator(){
    char ch;
    Invalid: 
            std::cout << "Please select a mathematical operator, either +, -, /, or *: ";
            std::cin >> ch;
            std::cin.ignore(32768, '\n');
            if ((ch == '+') || (ch == '-') || (ch == '*') || (ch == '/')){
                return ch;
            }
            else{
                std::cout << "oops that doesn't look like a valid mathematical operator you fucking retard\n";
                goto Invalid;
            }
        
}
int main(){
    getOperator();
    return 0;
}