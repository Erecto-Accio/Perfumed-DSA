
# Types of recursion  

- [Tail Recursion](#tail-recursion)

- [Head Recursion](#head-recursion)

- [Tree Recursion](#tree-recursion)

- [Indirect Recursion](#indirect-recursion)

- [Nested Recursion](#nested-recursion)

---
<a name="tail-recursion"></a>
###  Tail Recursion
> Tail recursion is defined as a recursive function in which the recursive call is the last statement that is executed by the function

> The function doesn’t have to process or perform any operation at  the time of calling and all operations are done at returning time.
 
> **Tail Recursion can be converted into loop easily**

````
#include <iostream>
using namespace std;

void fun(int n) {
    if (n > 0) {
        cout << n << endl;
    }
    fun(n - 1); // call of the tail recursion
}

int main() {
    int x = 3;
    fun(x);
}
// TIME : O(n)
// SPACE : O(n)
````
![Lightbox](https://media.geeksforgeeks.org/wp-content/uploads/20190621015455/tail1.jpg)
---