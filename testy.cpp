#include <iostream>

int main(){
    int x = 51;
    int i;
    for (i = 1; i <= 50; i++){
        if (51 % i == 0){
            std::cout << i << std::endl;
        }
        else{
            continue;
        }
    }
    return 0;
}

struct arrayStruct{
    int array[][];
};

arrayStruct getMultiples(int target){
    int arr[static_cast<int>(target/2)+1][2] = {{0,0}};
    int index;
    for (int i = 2; i <= target; i++){
        if (target%i == 0){
            arr[index][0] = i;
            arr[index][1] = static_cast<int>(i/2);
        }
    }
    arrayStruct struc = {arr};
    return struc;
}