#include<stdio.h>
#include<string.h>
struct customer
{   int serial;
    char name[50];
    int age;
    char gender[20];
    int balance;
};
int main(){
struct customer c[5];
    int i,m,n,o,flag=0;
    printf("Enter the information of customers:\n");
    for(i=1;i<=3;i++){
    c[i].serial=i;
    printf("\nFor serial no:%d\n",c[i].serial);
    printf("Enter name:");
    scanf("%s",c[i].name);
    printf("Enter age:");
    scanf("%d",&c[i].age);
    printf("Enter gender:");
    scanf("%s",c[i].gender);
    printf("Enter account balance:");
    scanf("%d",&c[i].balance);
    printf("\n");
   }
    printf("The informations:\n");
    for(i=1;i<=3;i++){
        printf("\nSerial no:%d\n",c[i].serial);
        printf("Name: ");
        printf("s",c[i].name);
        printf("\nAge:%d\n",c[i].age);
        printf("Gender: ");
        printf("%s",c[i].gender);
        printf("\nCurrent balance:%d",c[i].balance);
        printf("\n");
     }
     printf("\nEnter your desired serial number:");
     scanf("%d",&n);
        for(i=1;i<=3;i++){
        if(i==n){
        printf("\nSerial no:%d\n",c[i].serial);
        printf("Name: ");
        printf("%s",c[i].name);
        printf("\nAge:%d\n",c[i].age);
        printf("Gender: ");
        printf("%s",c[i].gender);
        printf("\nCurrent balance:%d",c[i].balance);
        printf("\n");
        }
     }
     printf("\nEnter the serial number that you want to delete:");
     scanf("%d",&m);
     for(i=1;i<=3;i++){
        if(i==m){
      flag=1;
        }
     }
     if(flag==1){
     printf("\nYour desired customer's data will be deleted\n");
}
printf("\n Enter the number of new customers that you want:");
scanf("%d",&o);
printf("\nEnter their deatails:\n");
for(i=1;i<=o;i++){
    printf("\nEnter serial no:");
    scanf("%d",&c[i].serial);
    printf("Enter name:");
    scanf("%s",c[i].name);
    printf("Enter age:");
    scanf("%d",&c[i].age);
    printf("Enter gender:");
    scanf("%s",c[i].gender);
    printf("Enter account balance:");
    scanf("%d",&c[i].balance);
    printf("\n");
}
printf("\nDeatails of new customers:\n");
for(i=1;i<=o;i++){
     printf("\nSerial no:%d\n",c[i].serial);
        printf("Name: ");
        printf("%s",c[i].name);
        printf("\nAge:%d\n",c[i].age);
        printf("Gender: ");
        printf("%s",c[i].gender);
        printf("\nCurrent balance:%d",c[i].balance);
        printf("\n");
}
return 0;
}

