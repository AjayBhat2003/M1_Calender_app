#ifndef __CALENDER_H_
#define __CALENDER_H_

#include<stdio.h>

int dayNumber(int day,int month,int year);
int getweekname(int day, int month, int year);
char* getMonthName(int monthNumber);
int numberOfDays(int monthNumber, int year);
void printCalendar(int year);

#endif
