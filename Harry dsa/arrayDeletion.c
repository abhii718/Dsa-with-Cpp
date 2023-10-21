#include <stdio.h>

void display(int arr[], int n)
{ // Code for Traversal
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void indDeletion(int arr[], int size, int index)
{
    // Code for insertion
  
    for (int i = index; i < size -1; i++)
    {
        arr[i]=arr[i + 1];
    }

}
int main()

{
    int arr[100] = {1, 2, 4, 6, 7, 9, 11, 98};
    int size = 8, index = 1;
    display(arr, size);
    indDeletion(arr, size, index);
    size -= 1;
    display(arr, size);
    return 0;
}