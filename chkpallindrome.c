//case sensitive
#include <stdio.h>
#include<stdbool.h>
bool checkpallindrome(char *str)
{ 
    char *start= NULL;
    char *end= NULL;
    start = str;
    end = str;
    while(*end != '\0')
    {
        end++;
    }
    end--;        //(to omit \0 of end!!)
    
    while(start < end)
    {
        if (*start != *end)
        {break;}
    
    start++;
    end--;
    }
    
    if (start < end)
    { return false;}
    else
    { return true;}
    
}
    


int main()
{ char arr[30];
  bool bret=false;
   
   printf("enter string\n");
   scanf("%[^'\n']s",arr);
   bret= checkpallindrome(arr); //(b add. 50 jatoy)
   if(bret==true)
   {
       printf("it is pallindrome");
   }
   else
   {
       printf("it is not a pallindrome");
   }
   return 0;
}
