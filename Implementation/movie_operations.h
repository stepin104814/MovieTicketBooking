#ifndef MOVIE_OPERATIONS_H_INCLUDED
#define MOVIE_OPERATIONS_H_INCLUDED

#include<stdio.h>


void show_seats(int);

int num(void);

int Login(struct user person[]);

int Signin(struct user person[]);

int Book_tickect(int x, struct user person[]);

void show_details(int x, struct user person[]);

int cancel(int x, struct user person[]);

int a[10]={1,2,3,4,5,6,7,8,9,10};
int b[10]={1,2,3,4,5,6,7,8,9,10};

#endif // MOVIE_OPERATIONS_H_INCLUDED
