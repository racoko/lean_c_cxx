#include "scan1.h"
#include <iostream>

void lib_say_hello_1(){
    std::cout << "static lib: Hello, from scan (libsan1)!\n";
}

// 在此处实现暴露给 C 的函数
int libCallCPlusPlusFunction1() {
    lib_say_hello_1();
    return 42;
}

