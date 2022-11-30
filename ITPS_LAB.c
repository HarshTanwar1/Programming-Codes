#include<stdio.h>
#include<string.h>

int main(){
    printf("Enter first string : ");
    char s1[100];
    gets(s1);
    // int count = 0;
    // for(int i = 0;s1[i] != '\0';i++){
    //     count++;
    // }
    // printf("length of the string : %d",count);

    // printf("reverse of string : ");
    // int length = strlen(s1) - 1;
    // for(int i = length;i>=0;i--){
    //     printf("%c",s1[i]);
    // }
    printf("Enter second string : ");
    char s2[100];
    gets(s2);
    // printf("copied string : ");
    // for(int i = 0 ;s1[i] != '\0';i++){
    //     s2[i] = s1[i]; 
    //     printf("%c",s2[i]);
    // }
    // int l1 = strlen(s1);
    // for(int i = 0;s2[i] != '\0';i++){
    //     s1[l1] = s2[i];
    //     l1++;
    // }
    // s1[l1] = '\0';
    // for(int i = 0; s1[i] != '\0';i++){
    //     printf("%c",s1[i]);
    // }

    // palindroma of a string 
    // int start = 0, end = strlen(s1)-1,check = 0;
    // while(start<end){
    //     if(s1[start] != s1[end]){
    //         printf("not palindrome\n");
    //         check++;
    //         break;
    //     }
    //     start++,end--;
    // } 
    // if(check == 0){
    //     printf("palindrome\n");
    // }

    // compare the two string are same
    int count = 0;
    for(int i = 0;s1[i] != '\0';i++){
        if(s1[i] != s2[i]){
            printf("strings not same\n");
            count++;
            break;
        }

    }


    return 0;
}