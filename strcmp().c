#include <conio.h>
void main ()
{
   char str1[30], str2[30];
   int i=0,flag=0,len1,len2;
  printf("Enter string1");
  gets(str1);
  printf("\n Enter string2");
  gets(str2);
   len1=strlen(str1);
   len2=strlen(str2);
   while(i<len1&&i<len2)
    {
      if(str1[i]==str2[i])
       {
         i++;
         continue;
       }
       if(str1[i]<str2[i])
       {
         flag=-1;
         break;
       }
      if(str1[i]>str2[i])
       {
         flag=1;
         break;
       }
  }
  if (flag==0)
    printf("\n Both strings are equal ");
  if(flag==-1)
    printf("\nstring1 is less than string2 ");
  if( flag == 1)
    printf("\n string1 is greater than string2 ");
}
