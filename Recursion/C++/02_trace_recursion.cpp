#include <iostream>
using namespace std;

void fun(int n)
{
    if (n > 0)
    {
        fun(n - 1);
        cout << n << endl;
    }
}

int main()
{
    int x = 3;
    fun(x);
    return 0;
}
/* Tracing tree of recursive function

        fun(3)
          /  \
         /    \
       fun(2)  3
           / \  
          /   \
        fun(1) 2
         /  \
        /    \
      fun(0)  1           
        x

OUTPUT : 1 
         2
         3
*/