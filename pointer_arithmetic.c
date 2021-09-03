# include<stdio.h>

int main()
{
    int a =4;
    int* ptra = &a;
    printf("The value of a is %d\n",a);
    printf("The address of a is %x\n",&a);
    printf("The integer value of address of a is %d\n",ptra);
    printf("The integer value of address of a is %d\n",ptra+1);

    /*
        In case of pointer arithmetic, for eg. ptra+1
        compiler will add ptra+ sizeof(1)
        and this size depends on the architecture. In my case it is 4 bytes.
    */

    int arr[] = {1,0};
    int* ptrarr = arr;
    printf("The address of arr[0] is %d\n",&arr[0]);
    printf("The address of arr[0] is %d\n",arr);
    printf("The address of ptrarr is %d\n",ptrarr);
    printf("The address of arr[1] is %d\n",&arr[1]);
    printf("The address of arr[1] is %d\n",arr+1);
    /*
        Similarly in arrays,
        arr==arr[0]; arr[i]==arr[0]+i;
        for example,
        if &arr[0]=1000;
        &arr[1] = 1000 + sizeof(1);

        arr is the pointer for arr[0]; arr[i] is the pointer for arr[0]+1;
    */
    return 0;
}