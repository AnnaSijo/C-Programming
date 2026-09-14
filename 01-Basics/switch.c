#include <stdio.h>
int main(){
    int choice;

    printf("Enter your choice 1-4: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("You selected option 1.C programing\n");
            break;
        case 2:
            printf("You selected option 2.C++ programing\n");
            break;
        case 3:
            printf("You selected option 3.Java programing\n");
            break;
        case 4:
            printf("You selected option 4.Python programing\n");
            break;
    }
    return 0;
}