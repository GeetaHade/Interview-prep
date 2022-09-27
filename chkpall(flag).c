 //case sensitive //flag (amisha patel)
#include <stdio.h>
#include<stdbool.h>
bool checkpallindrome(char *str)
{ 
    char *start= NULL;
    char *end= NULL;
    bool flag = true;  // 1 bit 
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
        {  flag = false;
            break;
            
        }
    
    start++;
    end--;
    }
    
    return flag;
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
