#include<stdio.h>
#include<conio.h>
int main(){
int i;
clrscr();
for(i=5;i>=0;i--)
{
textcolor(GREEN+BLINK);
cprintf("%d",i);
sleep(01);
system("cls");
}
cprintf("\n          BOOM");
getch();
return 0;
}
