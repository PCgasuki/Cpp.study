#include <iostream>

void h(int f1, int f2, int *tasi, int *hiki){
    *tasi = f1 + f2;
    *hiki = f1 - f2;
}

int main(){
    int fa1;
    int fa2;
    int wa;
    int sa;
    std::cin >> fa1;
    std::cin >> fa2;
    h(fa1,fa2,&wa,&sa);
    std::cout << "足し算：：" << wa << std::endl;
    std::cout << "引き算：：" << sa << std::endl;
}