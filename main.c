#include<stdio.h>

struct user{
int id;
char name[20];
char password[6];
int movie;
int ticket;
};
int a[10]={1,2,3,4,5,6,7,8,9,10};
int b[10]={1,2,3,4,5,6,7,8,9,10};


void show_seats(int);
int num(void);
int Signin(struct user person[]);
int Login(struct user person[]);
int Book_tickect(int x,struct user person[]);
void show_details(int x,struct user person[]);
int cancel(int x,struct user person[]);


int main(){
    struct user person[4];
	int i;

	// initalize id to 0
	for(i =0; i<4;i++){
		person[i].id = 0;
		person[i].movie = 0;
		person[i].ticket = 0;
	}
	for(i=1; i<= 10 ;i++){
		a[i] = i;
		b[i] = i;
	}
	int number = num();
	int x = -1;
	int q,w;
	while(number != 6){
		switch(number){
			case 1:
				x = Login(person);
				break;
			case 2:
				x = Signin(person);
				break;

			case 3:
         		q = Book_tickect(x,person);
         		break;

         	case 4:
         		if(x == -1){
         			printf("\n Please Login or Signin");
				 }
				 else{
				 	show_details(x,person);
				 }
				 break;
			case 5:
				w = cancel(x, person);
				if (w == 1){
					printf("\n The ticket has been cancelled successfully");
				}
				else{
					printf("\n You have not booked a ticket");
				}
				break;
		}

		number = num();
	}
	return 0;
}

int num(void)
{
		int choice;
	printf(" \n                 Movie Ticket Booking System\n");
	printf(" ==================================================================\n");
	printf("||             1- Login \t\t\t\t\t  ||\n");
	printf("||             2- Signin \t\t\t\t\t  ||\n");
	printf("||             3- Book ticket:                              	  ||\n");
	printf("||             4- show details                                    ||\n");
	printf("||             5- Cancel seat                                     ||\n");
	printf("||             6- Exit system:                                    ||\n");
	printf("||================================================================||\n");
	printf("  Enter your choice: ");
	scanf("%d",&choice);
	return choice;
}
