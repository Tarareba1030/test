#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
int main()
{
    int a,b,c;
    std::string s;
    std::cin >> a;
    std::cin >> b >> c;
    std::cin >> s;

    std::cout << a+b+c << " " << s.c_str();
    return 0;
}