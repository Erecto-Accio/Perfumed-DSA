# Types of recursion

- [Tail Recursion](#tail-recursion)

- [Head Recursion](#head-recursion)

- [Tree Recursion](#tree-recursion)

- [Indirect Recursion](#indirect-recursion)

- [Nested Recursion](#nested-recursion)

---

<a name="tail-recursion"></a>

### Tail Recursion

> Tail recursion is defined as a recursive function in which the recursive call is the last statement that is executed by the function

> The function doesn’t have to process or perform any operation at the time of calling and all operations are done at returning time.

> **Tail Recursion can be converted into loop easily**

```
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
```

## ![Lightbox](https://media.geeksforgeeks.org/wp-content/uploads/20190621015455/tail1.jpg)

<a name="head-recursion"></a>

### Head Recursion

> **Head Recursion**: If a recursive function calling itself and that recursive  
> call is the first statement in the function then it’s known as Head Recursion.

> There’s no statement, no operation before the call.

> The function doesn’t have to process or perform any operation at the time of calling and all operations are done at returning time.

> **Head Recursion cannot be converted into loop easily. But it is possible**

```
#include <iostream>
using namespace std;
void fun(int n) {
    if (n > 0) {
        fun(n - 1); // call of the head recursion
        cout << n << endl;

    }
}
int main() {
    int x = 3;

    fun(x);
    return 0;
}
// TIME : O(n)
// SPACE : O(n)
```

## ![Lightbox](https://media.geeksforgeeks.org/wp-content/uploads/20190621015721/head3.jpg)
