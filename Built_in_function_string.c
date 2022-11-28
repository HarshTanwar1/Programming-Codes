#include<stdio.h>
#include<string.h>

void length(char s[]){
    int count = 0;
    for(int i=0;s[i]!='\0';i++){
        count++;
    }
    printf("Lenth of your string : %d\n",count);
} 

void lower(char s[]){
    printf("lower case string : ");
    for(int i = 0;s[i]!='\0';i++){
        if(s[i]>='a' && s[i]<='z'){
            printf("%c",s[i]);
        }
        else if(s[i]==' '){
            printf(" ");
        }
        else{
            char ch = s[i] + 32;
            printf("%c",ch); 
        }
    }
}

void upper(char s[]){
    printf("\nUpper case string : ");
    for(int i = 0;s[i]!='\0';i++){
        if(s[i]>='A' && s[i]<='Z'){
            printf("%c",s[i]);
        }
        else if (s[i]==' '){
            printf(" ");
        }
        else{
            char ch = s[i] - 32 ;
            printf("%c",ch);
        }
    }
}

void reverse(char s[]){
    printf("\nReverse of the string : ");
    int len = strlen(s) - 1;
    for(int i = len;i>=0;i--){
        printf("%c",s[i]);
    }
}

void concatenate(char s[],char s2[]){
    printf("\nconcatenate the two strings : ");
    char s3[100];
    int i = 0, j= 0;
    while(s[i]!='\0'){
        s3[j] = s[i];
        i++;
        j++;
    }
    i = 0;
    while(s2[i] != '\0'){
        s3[j] = s2[i];
        j++;
        i++;
    }
    s3[j] = '\0';
    for(int i = 0;i<strlen(s3);i++){
        printf("%c",s3[i]);
    }

}

void checksame(char s[],char s2[]){
    int check = 0;
    for(int i = 0;s[i]!='\0';i++){
        if(s[i]!=s2[i]){
            printf("\nstrings are not same \n");
            check++;
            break;
        }
    }
        if(check==0){
            printf("\nstrings are same \n");
        }
}

int palidrome(char s[]){
    int l = 0, h = strlen(s)-1;
    while(l<h){
        if(s[l++] != s[h--]){
            printf("\nnot palindrome\n");
            return 0;
        }
    }
    printf("palindrome\n");
    return 0;

}

int main(){
    char s[100];
    printf("Enter a string : ");
    gets(s);
    reverse(s);
    char s2[100];
    printf("\nEnter second string : ");
    gets(s2);
    checksame(s,s2);
    length(s);
    lower(s);
    upper(s);
    concatenate(s,s2);
    palidrome(s);
    return 0;
}