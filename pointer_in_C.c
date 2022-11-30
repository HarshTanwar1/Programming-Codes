#include<stdio.h>


void swap(int a ,int b){         // a = 7   b = 5
    a = a+b;                    // a= 12
    b = a-b;                    // b = 12 - 5 = 7 ---> b = 7
    a = a-b  ;                   // a = 12 - 7 = 5 ---> a = 5
    printf ("In swap function %d %d\n",a,b);

}

void swapreference(int* a,int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
    printf ("In swapReference function %d %d\n",*a,*b);
    
}

int main(){
    // ******************POINTERS******************
    // int a = 30;
    // int* b = &a;       // & ---> Address of operator  // * ---> Dereference operator = whatever the value is present in the stored address of b is being displayed on the screen 
    // printf("the value of a : %d\n",a); 
    // printf("the value of b : %d\n",b); 
    // printf("the value of (*b) : %d\n",*b); 
    // int **c = &b;
    // printf("\n\n\n");
    // printf("The value of &b is %d\n",&b);
    // printf("The value of c is %d\n",c);
    // printf("The value of *c is %d\n",*c);
    // printf("The value of **c is %d\n",**c);



    // ******************POINTER IN ARRAYS******************
    // int arr[5] = {12,3,4,32,23};
    // int* i = arr;
    // printf("address of element of array : %d\n",(i));
    // printf("address of element of array : %d\n",(i+1));
    // printf("address of element of array : %d\n",(i+2));
    // printf("address of element of array : %d\n",(i+3));
    // printf("address of element of array : %d\n",(i+4));
    // printf("\n\n");
    // printf("value of element of array : %d\n",*(i));
    // printf("value of element of array : %d\n",*(i+1));
    // printf("value of element of array : %d\n",*(i+2));
    // printf("value of element of array : %d\n",*(i+3));
    // printf("value of element of array : %d\n",*(i+4));

    // int apni_array[5] = {14,22,421,32,5};
    // int* p = apni_array;
    // printf("%d\n",*(p++));
    // printf("%d\n",*(++p));

    // ******************CALL BY REFERENCE AND CALL BY VALUE******************
    // CALL BY VALUE 
    // int a = 3 ,b = 7;
    // // printf("Before swap %d  %d\n",a,b);
    // // swap(a,b);
    // // printf("After swap %d  %d\n",a,b);          // ACTUAL ARGUMENTS NOT CHANGE IN CASE OF CALL BY VALUE
    // // CALL BY REFERENCE
    // printf("Before swap %d  %d\n",a,b);
    // swapreference(&a,&b);
    // printf("After swap by reference %d  %d\n",a,b);       // ACTUAL ARGUMENTS are CHANGE IN CASE OF CALL BY REFERENCE

    return 0;
}