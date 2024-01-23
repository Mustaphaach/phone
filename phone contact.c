
#include <stdio.h>

void addContact(char name[], int age, int phone, int dob, char address[]) {
    printf("--------------\n");
    printf("Name : %s\n", name);
    printf("Age : %d\n", age);
    printf("Phone Number: %d\n", phone);
    printf("Date Of Birth: %d\n", dob);
    printf("Address: %s\n", address);
    printf("----------------\n");
}

int main() {
    char n[50];
    int a;
    int p;
    int d;
    char add[50];

    char na[50];
    int ag;
    int ph;
    int da;
    char addr[50];

    printf("Welcome to phone book \n\n");
    printf("Menu\n");
    printf("Press 1 to add contact \n\n");

    int x;
    printf("Enter: ");
    scanf("%d", &x);

    if (x == 1) {
        printf("--------------\n");
        printf("Name : ");
        scanf("%49s", n);
        printf("Age : ");
        scanf("%d", &a);
        printf("Phone Number: ");
        scanf("%d", &p);
        printf("Date Of Birth: ");
        scanf("%d", &d);
        printf("Address: ");
        scanf("%49s", add);
        printf("----------------\n");

        printf("--------------\n");
        printf("Name : ");
        scanf("%49s", na);
        printf("Age : ");
        scanf("%d", &ag);
        printf("Phone Number: ");
        scanf("%d", &ph);
        printf("Date Of Birth: ");
        scanf("%d", &da);
        printf("Address: ");
        scanf("%49s", addr);
        printf("----------------\n");

        printf("Press 2 to see the entered contacts\n");
        printf("Press 3 to exit the phone book\n");

        int z;
        printf("Enter: ");
        scanf("%d", &z);

        if (z == 2) {
            int num;
            printf("Enter the number of contacts to be viewed: ");
            scanf("%d", &num);

            if (num == 1) {
                addContact(n, a, p, d, add);
            } else if (num == 2) {
                addContact(n, a, p, d, add);
                addContact(na, ag, ph, da, addr);
            }
        } else if (z == 3) {
            printf("Are you sure you want to close the phone book\n");
            printf("Press 1 for yes\n");
            printf("Press 2 for no\n");

            int ans;
            printf("Enter: ");
            scanf("%d", &ans);

            if (ans == 1) {
                printf("The phone book has closed\n");
                printf("Have a good day\n");
            } else if (ans == 2) {
                printf("The phone book has not closed\n");
                printf("You can continue\n");
            }
        }
    } else {
        printf("Invalid choice\n");
    }

    return 0;
}
