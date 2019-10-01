#include <stdio.h>                                                                                                                
 #define MAX 100
 
 int main()
   {
     int max[MAX];
     int listview[MAX];
     int c,i,n,list_count,len; 
    len = 0;
    list_count = 0;
  
  
    while (((c = getchar())) != EOF)
  {
     if (c == ' ' || c == '\n' || c == '\t')
     {
      max[list_count] = len;
      ++list_count;
      len = 0;
     }
     else {
      ++len;
     }
     
    }
    printf("%d\n", list_count);
 
//    for (i = 0; i < list_count; ++i)
//    {
//     c = max[i];
//     ++listview;
//    }
    for (i = 0; i < MAX; ++i)
    {
     printf("%d\n", i);
    for (n = 0; n < max[i]; ++n)
    {
     putchar('*');
     printf("\n");
    }
    }
   }
                                
