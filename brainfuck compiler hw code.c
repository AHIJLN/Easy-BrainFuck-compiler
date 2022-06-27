#include <stdio.h>
int b;char f[20000],*dp=f;
char *c="++++++++++[>+++++++>++++++++++>+++>+<<<<-]>++.>+.+++++++..+++.>++.<<+++++++++++++++.>.+++.------.--------.>+.>.";
int main(){
while(*c)
switch(*c++){
 case '+':(*dp)++;break;
 case '-':(*dp)--;break;
 case '>':dp++;break;
 case '<':dp--;break;
 case '.':printf("%c",(*dp));break;
 case ']':if((*dp)){b=1;c--;while(b){c--;if(*c=='[')b--;}};break;
}
}
