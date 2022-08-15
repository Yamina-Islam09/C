//compare two strings where 2nd string have to be similar,if similar then they are brothers
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100],str2[100];
    char newString1[10][10],newString2[10][10];

    int i,j,k,l,ctr2,ctr1;
       printf("\n\n Split string by space into words :\n");
       printf("---------------------------------------\n");

    printf(" Input  a string1 : ");
    fgets(str1, sizeof str1, stdin);
      printf(" Input  a string2 : ");
    fgets(str2, sizeof str2, stdin);
 //first string
    j=0; ctr1=0;
    for(i=0;i<=(strlen(str1));i++)
    {
        // if space or NULL found, assign NULL into newString[ctr]
        if(str1[i]==' '||str1[i]=='\0')
        {
            newString1[ctr1][j]='\0';
            ctr1++;  //for next word
            j=0;    //for next word, init index to 0
        }
        else
        {
            newString1[ctr1][j]=str1[i];
            j++;
        }
    }
      printf("\n Strings or words after split by space are :\n");
    for(i=0;i < ctr1;i++)
        printf(" %s\n",newString1[i]);
    //second string
    k=0,ctr2=0;
    for(i=0;i<=(strlen(str2));i++)
    {
        // if space or NULL found, assign NULL into newString[ctr]
        if(str2[i]==' '||str2[i]=='\0')
        {
            newString2[ctr2][k]='\0';
            ctr2++;  //for next word
            k=0;    //for next word, init index to 0
        }
        else
        {
            newString2[ctr2][k]=str2[i];
            k++;
        }
    }
   printf("\n Strings or words after split by space are :\n");
    for(i=0;i < ctr2;i++){
       printf(" %s\n",newString2[i]);

    }

    if(strcmp(newString1[1],newString2[1])==0)
    {
        printf("ARe Brothers");
    }
     else{
         printf("no");
     }
    return 0;
}
/*
output
 Split string by space into words :
---------------------------------------
 Input  a string1 : yamina islam
 Input  a string2 : lamia islam

 Strings or words after split by space are :
 yamina
 islam


 Strings or words after split by space are :
 lamia
 islam

ARe Brothers
*/
