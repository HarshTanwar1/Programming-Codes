#include<stdio.h>
#include<string.h>

int main(){
    // char ch[5];
    // for(int i = 0;i<5;i++){
    //     scanf("%c",&ch[i]);
    // }
    // printf("your character array contains : ");
    // for(int i =0 ;i<5;i++){
    //     printf("%c ",ch[i]);
    // }


    // char s[20];
    // scanf("%s",&s);
    // printf("string is ");
    // printf("%s",s);


    // char ch[50];
    // gets(ch);
    // puts(ch);


    // char ch[50],a[50];
    // gets(ch);
    // int len = strlen(ch);
    // printf("length of the ch string : %d\n",len);
    // printf("lower case of ch : %s\n",strlwr(ch));
    // printf("upper case of ch : %s\n",strupr(ch));
    // printf("reverse of ch string : %s\n",strrev(ch));
    // printf("\n\nenter the second string : ");
    // gets(a);
    // int compare = strcmp(a,ch);
    // printf("comparision of ch and second string : %d\n",compare);
    // printf("copy of ch in second string : %s\n",strcpy(a,ch));
    // printf("concatenat the ch string in second string : %s",strcat(a,ch));


    char s1[50],s2[50];
    printf("Enter a string : ");
    gets(s1);
    printf("1. find string length \n");
    printf("2. convert into upper case \n");
    printf("3. convert into lower case \n");
    printf("4. find its reverse \n");
    printf("5. concatenate the two strings \n");
    printf("6. copy one string into other string \n");
    printf("7. compare the two strings \n\n");
    printf("Enter your choice which operation do you want to perform : ");
    int choice,length;
    scanf("%d",&choice);
    switch(choice){
        case 1:
            length = strlen(s1);
            printf("Length : %d",length);
            break;
        case 2:
            printf("Upper case string : %s",strupr(s1));
            break;
        case 3:
            printf("Lower case string : %s",strlwr(s1));
            break;
        case 4:
            printf("Reverse of string : %s",strrev(s1));
            break;
        case 5:
            printf("Enter second string : ");
            scanf("%s",&s2);
            strcat(s2,s1);
            printf("After concatenation : %s",s2);
            break;
        case 6:
            strcpy(s2,s1);
            printf("Copied String : %s",s2);
            break;
        case 7:
            printf("Enter the second string for comparison : \n");
            scanf("%s",&s2);
            int a = strcmp(s1,s2);
            printf("comparison result : %d",a);
            break;
        default:
            printf("!!! INVALID CHOICE");
            break;
    }  
    
    return  0;
}