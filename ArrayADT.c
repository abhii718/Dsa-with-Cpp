#include <stdio.h>
#include <stdlib.h>

struct Myarray
{
    int total_size;
    int used_size;
    int *ptr;
};
void creatarray(struct Myarray *a, int tSize, int uSize)
{
    // (*a).total_size = tSize;
    // (*a).used_size = uSize;
    // (*a).ptr = (int *) malloc(tSize * sizeof(int));
    a->total_size = tSize;
    a->used_size = uSize;
    a->ptr = (int *)malloc(tSize * sizeof(int));
}
void setVal(struct Myarray *a)
{
    int n;
    for (int i = 0; i < a->used_size; i++)
    {
        printf("Enter  elemnt %d ", i);
        scanf("%d", &n);
        (a->ptr)[i] = n;
    }
}
void show(struct Myarray *a)
{
    for (int i = 0; i < a->used_size; i++)
    {
        printf("%d", (a->ptr)[i]);
    }
}
int main()
{
    struct Myarray marks;
    creatarray(&marks, 10, 2);
    printf("We are running serVAl now\n");
    setVal(&marks);

    printf("We are running show now\n");
    show(&marks);

    return 0;
}
