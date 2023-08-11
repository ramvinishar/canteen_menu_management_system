#include<stdio.h>
#include<string.h>

#define MAX_ITEMS 10
#define MAX_NAME_LENGTH 50

struct MenuItem
{
  char name[MAX_NAME_LENGTH];
  double  price;
};

int main()
{
  struct MenuItem menu[MAX_ITEMS];
  int itemCount = 0;

   while(1) {
    printf("Canteen Menu Management\n");
    printf("1. Add Item\n");
    printf("2. Display Menu\n");
    printf("3. Exit\n");
    printf("Enter your choice: ");

int i, choice, itemcount;
scanf("%d", &choice);

 switch(choice){
   case 1:
       if(itemCount < MAX_ITEMS){
         printf("Enter item name: ");
         scanf("%s",menu[itemcount].name);

        printf("Enter item price: ");
        scanf("%1f", & menu[itemCount].price);

        itemCount++;
     } else {
        printf("Maximum item limit reached.\n");
     }
     break;
case 2:
    printf("Canteen Menu: \n");
    for( i=0; i< itemcount; i++) {
        printf("%d.%s - $%.21f\n",i+1,menu[i].name,menu[i].price);
     }
     break;
case 3:
    printf("Exiting.\n");
    return 0;
default:
   printf("Invalid choice. Please enter a valid option.\n");
  }
}
return 0;
}
