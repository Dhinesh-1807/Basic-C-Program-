#include <stdio.h>

int main() {
    int size, key, i, found = 0;


    printf("Enter the size of the array: ");
    scanf("%d", &size);


    int a[size];


    printf("Enter %d elements: ", size);
    for (i = 0; i < size; i++)
        {
        scanf("%d", &a[i]);
    }


    printf("Enter the key to be searched: ");
    scanf("%d", &key);


    for (i = 0; i < size; i++)
        {
        if (a[i] == key)
         {
            found = 1;
            break;
        }
    }


    if (found)
        {
        printf("Key found at index %d.\n", i);
    }
    else
     {
        printf("Key not found in the array.\n");
    }

    return 0;
}
