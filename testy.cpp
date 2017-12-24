#include <iostream>

int main(){
    int x = 5;
    int *ptr = &x;
    std::cout << ptr << std::endl;
    std::cout << &*&ptr << std::endl;
}