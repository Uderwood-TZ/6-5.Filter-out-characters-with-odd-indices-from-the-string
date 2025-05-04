# 6-5.Filter-out-characters-with-odd-indices-from-the-string
函数fun的功能是：将s所指字符串中下标为奇数的字符删除。串中剩余字符形成一个新串放在t所指的数组中。 例如，当s所指字符串："ABCDEFGHIJK"时，t所指的数组的内容应是："ACEGIK"。

函数接口定义：

void fun(char *s,char t[ ] ) ;

裁判测试程序样例：

#include <stdio.h>

#include <string.h>

void fun(char *s , char t[ ]) ;

int main( ）

{
   char s[60] , t[60];
   
   scanf("%s",s);
   
   fun(s,t);   //  新串为t 
   
   printf("The result is %s",t);   //  输 出 t 数 组 的 串
   
  return 0 ;
  
 }
 
     /* 您的代码嵌入这里。即只需在答题框填fun的设计与实现  */
输入样例：

ABCDEFGHIJK

输出样例：

The result is ACEGIK

代码长度限制

16 KB

时间限制

400 ms

内存限制

64 MB
