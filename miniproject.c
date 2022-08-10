#include "stdio.h"
#include "stdlib.h"
  int menu( );
  int  my();



int main() {
    int ordercode[20] = {000, 001, 002, 003, 004, 005, 006, 007, 010, 012, 013, 104, 015, 016, 017, 020, 021, 022, 023,
                         024};
    int a = 0, b = 0, c = 0, z = 0, e = 0;
    int code = 0;
    FILE *Order;
    printf("*=============[Welcome To CYPRESS RESTAURANT]=============*\n");
    printf("1.Menu\n");
    printf("2.Order\n");
    printf("3.My Orders\n");
    printf("4.Exit!\n");
    printf("Choose a number:");
    scanf("%d", &a);
    if (a == 4) {
        printf("Good Bye!Have a nice day!");
        exit(0);
    }
    while (a == 1) {
        if (a == 1) {
            printf("  Item                 |            Price        |        Order Code\n");
            printf("====================================================================\n\n");
            printf("Pizza(Nomral)          |            20$          |        000\n");
            printf("Pizza(cheese)          |            27$          |        001\n");
            printf("Pizza(sea food)        |            35$          |        002\n");
            printf("Cola                   |            2.5$         |        003\n");
            printf("Spicy Box(small)       |            15$          |        004\n");
            printf("Spicy Box(nomral)      |            18$          |        005\n");
            printf("Spicy Box(big)         |            25$          |        006\n");
            printf("Spicy Box(special)     |            35$          |        007\n");
            printf("Burger(Nomral)         |            10$          |        010\n");
            printf("Burger(Cheese)         |            13$          |        012\n");
            printf("Burger(chicken)        |            18$          |        013\n");

            //while (a == 1) {
            printf("Enter 2 to order!\n");
            e = menu();

            if (e == 2) {
                printf("Enter menu code:");
                scanf("%d", &code);
                for (z = 0; z < 20; z++) {
                    if (ordercode[z] == code) {
                        printf("Order Success!\n\n");

                    }

                }

            } else {
                printf("Your oder code is wrong!\n");
                printf("Please try again!\n\n");
            }

            // }

            printf("Enter 3 to show your order!\n");
            a = menu();
            if (a == 3) {
                printf(" My Orders                                           Charges\n");
                printf("================================================================\n");

                if (code == 000) {
                    printf("Pizza(Nomral)                          |            20$       \n");
                }

                if (code == 001) {
                    printf("Pizza(cheese)                          |            27$       \n");
                }

                if (code == 002) {
                    printf("Pizza(sea food)                        |            35$       \n");
                }

                if (code == 003) {
                    printf("Cola                                   |            2.5$       \n");
                }
                if (code == 004) {
                    printf("Spicy Box(small)                       |            15$           \n");
                }
                if (code == 005) {
                    printf("Spicy Box(nomral)                      |            18$          \n");
                }
                if (code == 006) {
                    printf("Spicy Box(big)                         |            25$          \n");
                }
                if (code == 007) {
                    printf("Spicy Box(special)                     |            35$          \n");
                }
                if (code == 010) {
                    printf("Burger(Nomral)                         |            10$          \n");
                }
                if (code == 012) {
                    printf("Burger(Cheese)                         |            13$        \n");
                }
                if (code == 013) {
                    printf("Burger(chicken)                        |            18$           \n");

                }
                a = menu();

               // Order = fopen("cress.txt","r");


            }

            }
        }
      return 0;
    }
    int menu() {
        int a;
        printf("1.Menu\n");
        printf("2.Order\n");
        printf("3.My Orders\n");
        printf("4.Exit!\n");
        printf("Choose a number:");
        scanf("%d", &a);

        return a;
    }



