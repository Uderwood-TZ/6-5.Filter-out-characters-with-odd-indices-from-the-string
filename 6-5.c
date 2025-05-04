#include <stdio.h>
#include <string.h>
void fun(char *s , char t[ ]) ;
int main( )
{
   char s[60] , t[60];
   scanf("%s",s);
   fun(s,t);   //  新串为t 
   printf("The result is %s",t);   //  输 出 t 数 组 的 串
   return 0 ;
 }
     /* 您的代码嵌入这里。即只需在答题框填fun的设计与实现  */
void fun(char *s,char t[ ] )
{   int i = 0; 
    char *p=t;
    while(*s)
    {i++;
    if(i%2!=0){
    *p=*s;
        p++;
      }
        s++;
    }
 *p='\0';
}