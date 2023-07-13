
#include <omp.h>
#include <iostream>
using namespace std;

int main()
{
#pragma omp parallel
    {
        printf("C++实战网(www.cppszw.com), I am Thread %d\n", omp_get_thread_num());
    }
#pragma omp parallel for
    for (int i = 0; i < 10; i++)
    {
        printf("C++实战网(www.cppszw.com), I am Thread %d\n", omp_get_thread_num());
    }
    return 0;
}