#include <stdio.h>

int main() {
    int num;
    float fnum;
    char ch;

   
    printf("Enter an integer: ");
    scanf("%d", &num);

 
    printf("Enter a float: ");
    scanf("%f", &fnum);

  
    printf("Enter a character: ");
    scanf(" %c", &ch);  

  
    printf("\nYou entered:\n");
    printf("Integer: %d\n", num);
    printf("Float: %.2f\n", fnum);
    printf("Character: %c\n", ch);

    return 0;
}
