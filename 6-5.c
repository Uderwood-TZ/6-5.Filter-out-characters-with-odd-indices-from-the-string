#include <stdio.h>
#include <string.h>
void fun(char *s , char t[ ]) ;
int main( )
{
   char s[60] , t[60];
   scanf("%s",s);
   fun(s,t);   //  �´�Ϊt 
   printf("The result is %s",t);   //  �� �� t �� �� �� ��
   return 0 ;
 }
     /* ���Ĵ���Ƕ�������ֻ���ڴ������fun�������ʵ��  */
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