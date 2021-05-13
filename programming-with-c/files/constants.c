#define VAT     0.07
#define TXT     "Product Price"

#include <stdio.h>

int main(void) {
    const float discount = 0.5; 

    float full_price = 20000;
    float disc_price;

    disc_price = full_price * discount;

    printf("*** SHOCK PRICE SALES %d% ***\n\n", 50);
    printf("%s\t\t%5.2f baht\n", TXT, full_price);
    printf("Special price \t\t%5.2f Baht\n", disc_price);
    printf("VAT include   \t\t%5.2f Baht\n", disc_price * VAT);
    printf("Net           \t\t%5.2f Baht\n", disc_price * (1 + VAT));
}