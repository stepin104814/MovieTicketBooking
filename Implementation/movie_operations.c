//#include<MOVIE.h>
#include<stdio.h>

struct user{
int id;
char name[20];
char password[6];
int movie;
int ticket;
};


//signin function:
int Signin(struct user person[]){

	int i;
	for(i =0;i< 4;i++){
		if(person[i].id == 0){
			break;
		}
	}

	person[i].id = 100 + i;

	printf("Enter Your Name: ");
	scanf("%s",person[i].name);

	printf("\nEnter Your Password(Must only be 6 Digits): ");
	scanf("%s",person[i].password);

	printf("\n SIGNIN SUCCESSFULLY");
	printf("\n Your ID is %d. Please donot forget this:",person[i].id);
	return i;


}

// Login function

int Login(struct user person[]){

	int check = 0;
	printf("Enter your ID: ");
	scanf("%d",&check);

	int i;
	int count = 0;

	for(i = 0; i < 4 ;i++){
		if (check == person[i].id){
			count = 1;
			break;
		}
	}
	int iterate = i;
	if(count == 0){
		printf("\nThe enter ID is invalid, Retry");
		return 0;
	}
	char ps[6];
	printf("Enter the Password:");
	scanf("%s",ps);

	int flag = 0;
	for(i=0; i< 6;i++){
		if(ps[i] == person[iterate].password[i]){
			continue;
		}
		else{
			flag = 1;
			break;
		}
	}

	if(flag == 1){
		printf("\nThe enter Password is invalid, Retry");
		return 0;
	}

	else{
		printf("LOGIN SUCCESSFULLY");
		return iterate;
	}

}

//showing the seats
void show_seats(int e){
	int i;
	int a[10]={1,2,3,4,5,6,7,8,9,10};
    int b[10]={1,2,3,4,5,6,7,8,9,10};

	if(e == 1){
		for(i=1; i<= 10 ;i++){
			printf("%d ",a[i]);
				if(i == 5){
					printf("\n");
						  }
							}
	}
	else{
			for(i=1; i<= 10 ;i++){
				printf("%d ",a[i]);
					if(i == 5){
						printf("\n");
							  }
								}
	}
}

// Booking tickets

int Book_tickect(int x, struct user person[]){
	int e;
	int a[10]={1,2,3,4,5,6,7,8,9,10};
    int b[10]={1,2,3,4,5,6,7,8,9,10};

	printf("Avaiable Movies :");
	printf("\n   1) Movie1");
	printf("\n   2) Movie2");
	printf("\n   Select your choice: 1 or 2 : ");
	scanf("%d",&e);

	show_seats(e);
	printf("\n");
	printf(" \n0  ---> Not avaiable");

	printf("\n");
	printf("\n");
	if(x == -1){
		printf("Please Login or Sign up");
		return -1;
	}
	else{

	int no;
	printf("\nSelect your seat:");
	scanf("%d",&no);

	if(e == 1){
		if(no >=1 && no <= 10){
			if(a[no] != 0){
				a[no] = 0;
				person[x].movie = 1;
				person[x].ticket = no;
			}
			else{
				printf("\n The seat is booked retry !!");
				return -1;
			}
		}
		else{
			printf("\n Please retry !!!");
			return -1;
		}
	}
	else{
		if(no >=1 && no <= 10){
			if(b[no] != 0){
				b[no] = 0;
				person[x].movie = 2;
				person[x].ticket = no;
			}
			else{
				printf("\n The seat is booked retry !!");
				return -1;
			}
		}
		else{
			printf("\n Please retry !!!");
			return -1;
		}

	 }
	 return 1;
	}
}

// show_details

void show_details(int x, struct user person[]){
	printf("\n		Your Name %s",person[x].name);
	printf("\n 		Your ID : %d",person[x].id);
	printf("\n");
	if(person[x].movie == 1){
		printf("		Booked Movie is Movie1");
	}
	else if(person[x].movie == 2){
		printf("		Booked Movie is Movie2");
	}
	else{
		printf("        Not yet booked the ticket");
	}
	printf("\n");
	printf("		Your ticket Number is : %d",person[x].ticket);
	printf("\n");
}

// cancel the seat

int cancel(int x, struct user person[] ){
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int b[10]={1,2,3,4,5,6,7,8,9,10};

	if(person[x].ticket == 0){
		return 0;
	}
	else{
		if(person[x].movie == 1){
			a[person[x].ticket] = person[x].ticket;
			person[x].ticket = 0;
			person[x].movie = 0;
		}
		else if(person[x].movie == 2){
			b[person[x].ticket] = person[x].ticket;
			person[x].ticket = 0;
			person[x].movie = 0;
		}
		return 1;
	}
}

