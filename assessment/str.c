#include <stdio.h>

#include<string.h>

#define max 200
 
int main()

{

    char str[max];

    printf("Enter string: \n");
    scanf(" %[^\n]s ",str);

    char ch;

    printf("Enter character to find: ");

    scanf(" %c",&ch);

    int len=strlen(str);

    int index;

    for(int i=0;i<len;i++){

        if(str[i]==ch){

            index=i;

            break;

        }

    }

      printf("character found at position: %d\n",index);

       char string[max];

    printf("Enter string to find: ");

   scanf(" %s",string);

   char *p;

   p=strstr(str,string);

   printf("string found at position: %ld\n",p-str);

   

   printf("sum of positions is: %ld\n",p-str+index);

    return 0;

}
 
 
