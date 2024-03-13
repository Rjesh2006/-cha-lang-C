

```cpp
#include <iostream>

int main() {
    int arr[3][4];

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j) {
            arr[i][j] = i * 4 + j + 1;
        }
    }

    std::cout << "2D Array elements:" << std::endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
```
