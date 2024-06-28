#include <iostream>
using namespace std;

void fun(int n)
{
    if (n > 0)
    {
        cout << n << endl;
    }
    fun(n - 1);
}

int main()
{
    int x = 3;
    fun(x);
}

/* Tracing tree of recursive function

        fun(3)
        /  \ 
       /    \
       3  fun(2)
           /  \ 
          /    \ 
          2    fun(1)
                / \  
               /   \
               1   fun(0)
                     \
                      \ 
                       x
       
OUTPUT: 3
        2
        1
*/