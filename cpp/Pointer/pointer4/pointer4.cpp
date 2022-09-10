#include <iostream>
#include <stdio.h>

struct hito{
    int meibo;  //名簿
    char name[256]; //名前
};

int main(void){
    char a;
    int b;
    std::cout << "あなたの名前を教えてください" << std::endl;
    std::cin >> a;
    hito name = {a};
   std::cout << "あなたの名前は" << a << "ですね。" << std::endl;
   std::cout << "名簿を教えてください。" << std::endl;
   std::cin >> b;
    std::cout << "名簿は" << b << "ですね。" << std::endl;
    hito zyouhou = {a,b};
    hito *p;
    p = &zyouhou;
    printf("あなたの名前のアドレスは%pです。\n", p->name);
    printf("あなたの名簿のアドレスは%dです。", p->meibo);
}