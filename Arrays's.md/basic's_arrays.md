## Declaration and Initialization:

```
#include <iostream>
using namespace std;

int main() {
    int arr[5];

    int arr[5] = {1, 2, 3, 4, 5};

    return 0;
}
```

## Accessing Array Elements:

```
#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};

    int firstElement = arr[0];
    int thirdElement = arr[2];

    return 0;
}
```


## Iterating Through an Array:

```
#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 5; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

Output:
1 2 3 4 5
```



## Finding the Sum of Array Elements:

```
#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int sum = 0;

    for (int i = 0; i < 5; ++i) {
        sum += arr[i];
    }

    cout << "Sum of array elements: " << sum << endl;

    return 0;
}
Output:


Sum of array elements: 15
Reversing an Array:
```





``` 
#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};

    for (int i = 0, j = 4; i < j; ++i, --j) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    for (int i = 0; i < 5; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
Output:


5 4 3 2 1
```


## Finding the Maximum Element in an Array:

```
#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int maxElement = arr[0];

    for (int i = 1; i < 5; ++i) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }

    cout << "Maximum element in the array: " << maxElement << endl;

    return 0;
}
Output:


Maximum element in the array: 5

```





