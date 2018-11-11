#include <iostream>
#include <string>

template <typename T>
T less(T v1, T v2){
    std::cout << "generic" << std::endl;
    return v1 < v2 ? v1 : v2;
}

template <typename T>
T less(T* v1, T* v2){
    std::cout << "partial" << std::endl;
    return *(v1) < *(v2) ? *v1 : *v2;
}

int main(int argc, const char* argv[]){
    int x=25;
    int *pX = &x;
    int y =30;
    int *pY = &y;

    std::cout << less(pY, pX) << std::endl;
    std::cout << less(10, 2) << std::endl;
    std::cout << less(2.8, 2.9) << std::endl;
    std::cout << less("qwe", "asd123") << std::endl;

    return 0;
}