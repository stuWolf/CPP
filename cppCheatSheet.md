## range based for loop
```cpp
#include <iostream>
#include <vector>
using std::cout;
using std::vector;

int main() {
    
    vector<int> a {1, 2, 3, 4, 5};
    for (int i: a) {    // range based for-loop, takes each element of vector a and writes it into i
        cout << i << "\n";
    }

    vector<vector<int>> b {{1, 2},
                           {3, 4},
                           {5, 6}};

    // Write your double loop here.
    for(auto v : b) { // range based for-loop, takes each row of vector b and writes it into sub vector v
        for(int i : v) {  // range based for-loop, takes each element of sub vector v and writes it into i
            cout << i << " ";
        }
        cout << "\n";
    }
}

```
