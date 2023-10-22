#include <stdio.h>
int linearsearch(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }
    return -1;
}

int main()
{

    int arr[100] = {1, 2, 13, 16, 23, 34, 45, 65, 67, 78, 89, 90, 99, 100};
    int size = sizeof(arr) / sizeof(arr[0]);
    int element = 34;
    int searchIndex = linearsearch(arr, size, element);
    printf("The element %d was found at index  %d \n", element, searchIndex);

    return 0;
}