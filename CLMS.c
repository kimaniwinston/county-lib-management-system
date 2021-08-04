#include <stdio.h>
#include <stdlib.h>


//FUNCTIONS
void execute_action(int action);
void close();
int menu ();
void admin_password();
void user_login();
void add_staff();
void edit_staff();
void delete_staff();
void add_book();
void edit_book();
void delete_book();
void add_user();
void edit_user();
void delete_user();
void lend_book();
void mark_book_returned();
void late_return_fine();
void user_borrow_limit();
void book_reserved();
void search_staff();
void search_book();
void search_user();

//FUNCTION DEFINITION
int main()
{
    printf("WELCOME TO WINSTON'S COUNTY LIBRARY MANAGEMENT SYSTEM\n");
    printf("1.MEMBER\n");
    printf("2.OFFICE ADMIN\n");
    printf("3.EXIT\n");
    printf("4.user_login");
printf("5.add_staff");
printf("6.edit_staff");
printf("7.delete_staff");
printf("8.add_book");
printf("9.edit_book");
printf("10.delete_book");
printf("11.add_user");
printf("12.edit_user");
printf("13.delete_user");
printf("14.lend_book");
prinf("15.mark_book_returned");
printf("16.late_return_fine");
printf("17.user_borrow_limit");
printf("18.book_reserved");
printf("19.search_staff");
printf("20.search_book");
printf("21.search_user");
         printf("Select action(1-21): ");
        scanf("%d",&action);
       // validate input
        if (action < 1 || action > 21) {
            printf("Invalid action. Try again\n");
            Sleep (2000);
            system ("cls");
        }
    } while(action < 1 || action > 21);
    return action;
}

    {

        switch ();
    case '1':
        member();
        break;
    case '2':
        OFFICE ADMIN();
        break;
    case '3':
        EXIT(goodbye);
        break;
    }


    return 0;
}
