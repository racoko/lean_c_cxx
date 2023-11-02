#include "scan2.h"
#include <iostream>

int lib_say_hello_2();

// 在此处实现暴露给 C 的函数
int libCallCPlusPlusFunction2() {
    lib_say_hello_2();
    return 42;
}

