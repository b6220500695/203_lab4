#include<stdio.h>
#include<string.h>

int main()
{
   int x,y;
   char n[200];
   scanf("%s",n);
   y=strlen(n);

   for(x=0;x<y;x++)
   {
      if(n[x]==n[x+1])
      {
         continue;
      }
   else if (n[x]!=n[x+1])
   {
      printf("%c",n[x]);
   }
   }
   return 0;
}
