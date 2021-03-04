#include<stdio.h>
int main()
{
   const int N = 55;
   char str[10][55];
   int len[10];
   scanf("%s",str[0]);
   len[0] = strlen(str[0]);
   for(int i=1;i<4;i++){
      scanf("%s",str[i]);
         len[i] = strlen(str[i]);
      }
   for(int i=0;i<4;i++){
      for(int j=0;j<len[i];j++){
            str[i][j] = tolower(str[i][j]);
      }
   }

