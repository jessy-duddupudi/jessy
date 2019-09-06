#include<stdio.h>
void firdt();
void last();
#pragma startup first
#pragma exit last
int main()
{
printf("\nwithin main..");
return 0;
}
void first()
{
printf("\nwithin first..");
}
void last()
{
printf("\nwithin last..");
}
