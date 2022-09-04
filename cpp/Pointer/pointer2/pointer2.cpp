#include <iostream>

void function(int a){
    std::cin >> a;
}

int main(void){
    int *as;
    function(*as);
    std::cout << &as << std::endl;
}