#include <stdio.h>
int main(){
   int m=0,x=0,g[100],a,b,c,d;
   char i[50];
   scanf("%d\n",&m);
   if((m>0)&&(m<100)){
   for(a=0;a<m;a++){
   fgets(i,50,stdin);
   int j[3]={1,2,3};
for(b=0;i[b]!='\0';b++){
  if(i[b]=='A'){
     x=j[1];
      j[1]=j[0];
      j[0]=x;
  }
  if(i[b]=='B'){
   x =j[2];
  j[2]=j[1];
  j[1]=x;
}
if(i[b]=='C'){
   x =j[0];
  j[0]=j[2];
  j[2]=x;
}
}
for(c=0;c<3;c++){
   if(j[c]==1){
  g[a]=c+1;
}
}
}
}
for(d=0;d<m;d++){
 printf("%d\n",g[d]);
}
}
