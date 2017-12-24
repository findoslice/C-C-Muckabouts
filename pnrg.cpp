#include <iostream>
#include <ctime>
#include <list>

unsigned int PNRG(){
    static unsigned long seed(12409323424);
    seed = (static_cast<unsigned int>(time(0))*seed + 893476);
    return seed%32768;
}

int averageArray(int x[]){
    int sum(0);
    int size = (sizeof(x)/sizeof(*x));
    for (int i = 0; i < size; ++i){
        sum += x[i];
    }
    return sum/size;
}

int* populateArray(){
    std::list<int> a;
    int count = 0;
    while (true){
        char* temp;
        std::cout << "Enter an integer to be added to the array, enter n if you wish to enter no more values: ";
        std::cin >> temp;
        if (temp == "n"){
            return static_cast<int*>(a);
        } else{
            a[count] = std::atoi(temp);
            ++count;
            temp = "";
        }
    }
}

int main(){
    int* x = populateArray();
    std::cout << averageArray(x) << std::endl;
    return 0;
}