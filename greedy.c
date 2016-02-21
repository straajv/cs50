#include <cs50.h>
#include <math.h>
#include <stdio.h>

const int quarter = 25;
const int dime = 10;
const int nickle = 5;
const int penny = 1;

int main(void)
{
    float f;
    do{
        printf("O hai! How much change is owed?");
        f = GetFloat();
    }while(f<=0);
    
    int i = (int)round(f*100);
    int coins= 0;
    
    do{
        if(i - quarter >= 0)
        {
            coins++;
            i -= quarter;
        }
        else if(i - dime >= 0)
        {
            coins++;
            i -= dime;
        }
        else if(i - nickle >= 0)
        {
            coins++;
            i -= nickle;
        }
        else
        {
            coins++;
            i -= penny;
        }
    }while(i != 0);
    
    printf("%i\n", coins);
}
