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
   int mn = 0 ;
      for(int z=0;z<=1;z++){
            for(int j=i;j<len[z];++j){
               int cn = 0;
               for(int k=0;k<4;++k){
               int si = j-i+1;
                  bool found = false;
                     for(int cu=0;cu<len[k]-si+1;++cu){
                           bool ffound = true;
                           for(int x=0;x<si;++x){
                           if(str[k][cu+x] != str[z][i+x]){
                                ffound = false;
                                break;


