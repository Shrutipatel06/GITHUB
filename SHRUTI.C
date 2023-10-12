#include<stdio.h>
#include<conio.h>

int main()
{
int pop=80000,men,lit_men,ill_men,women,lit_women,ill_women,lit;
clrscr();
printf("\nTotal Population: %d",pop);
lit=pop*0.48;
printf("\nNumber of Literate: %d",lit);
men=pop*0.52;
printf("\nNumber of Men: %d",men);
lit_men=pop*0.35;
printf("\nNumber of Literate Men: %d",lit_men);
ill_men=men-lit_men;
printf("\nNumber of Illiterate Men: %d",ill_men);
women=pop-men;
printf("\nNumber of Women: %d",women);
lit_women=lit-lit_men;
printf("\nNumber of Literate Women: %d",lit_women);
ill_women=women-lit_women;
printf("\nNumber of Illiterate Women: %d",ill_women);
lit=pop*0.48;
getch();
return 0;
}