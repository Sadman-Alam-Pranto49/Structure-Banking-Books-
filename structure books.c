#include<stdio.h>
#include<string.h>
struct books{
    char name[20];
    int price;
    int page_number;
    };
int main(){
    struct books b[3];
    int i;
    printf("Enter the informations of the books:\n");
    for(i=0;i<3;i++){
    printf("\nEnter the name of the book:");
    scanf("%s",b[i].name);
    printf("Enter the price of the book:");
    scanf("%d",&b[i].price);
    printf("Enter the number of pages of the book:");
    scanf("%d",&b[i].page_number);
    printf("\n");
    }
    printf("\nThe details:\n");
    for(i=0;i<3;i++){
        printf("\nBook's Name: ");
        printf("%s",b[i].name);
        printf("\nPrice:%d\n",b[i].price);
        printf("Total number of pages:%d\n",b[i].page_number);
        printf("\n");
    }
    return 0;
}
