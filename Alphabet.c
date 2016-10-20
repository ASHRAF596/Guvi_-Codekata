#include<stdio.h>
#include<conio.h>
void main()
{    char f;
clrscr();
        scanf("%c",&f);
    if( (f>='a'&& f<='z') || (f>='A' && f<='Z'))
       printf("%c is an alphabet",f);
    else
       printf("%c is an Not an alphabet",f);
getch();
}
