// If cost price and selling price of an item is input through the keyboard,
// write a program to determine whether the seller has made profit or incurred loss.
// Also determine how much profit he made or loss he incurred


#include<stdio.h>
#include<conio.h>
int main()
{
    float cp, sp, p, l;
    printf("\n Enter Cost Price and Selling Price : ");
    scanf("%f %f", &cp, &sp);
    p= sp-cp;
    l= cp-sp;
    if (p>0)
        printf("The seller made profit of Rs %f\n", p);
    if (l>0)
        printf("The seller incurred loss of Rs %f\n", l);
    if (p==0)
         printf("There is no loss, no profit\n");
     return 0;
}
