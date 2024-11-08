#include<stdio.h>
#include<string.h>

int getMonthIdx(char month[]){
    char* months[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    int monthIdx = -1;
    for(int i = 0; i < 12; i++){
        if(strcmp(month, months[i]) == 0){
            monthIdx = i;
            break;
        }
    }
    return monthIdx;
}

int isleap(int year){
    if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0){
        return 1;
    }
    return 0;
}

int daysPassed(int monthIdx, int dayofthemonth, int daysofMonths[]){
    int sum = 0;
    for(int i = 0; i < monthIdx; i++){
        sum += daysofMonths[i];
    }
    sum += dayofthemonth;
    return sum;
}

int main(){
    int dayofthemonth, year;
    char month[100];
    printf("Enter day of the month, month and year in format '2 Feb 2024': ");
    scanf("%d%s%d", &dayofthemonth, month, &year);
    int monthIdx = getMonthIdx(month);
    int daysofMonths[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if(isleap(year)){
        daysofMonths[1] = 29;
    }
    int totDays = daysPassed(monthIdx, dayofthemonth, daysofMonths);
    printf("Today is the %dth day of the year %d\n", totDays, year);
    return 0;
}
