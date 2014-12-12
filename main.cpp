/*
ID: sonny3692
PROG: friday
LANG: C++
*/


#include <iostream>
#include <stdio.h>
#include <string>
#include <string.h>
#include <fstream>

using namespace std;

int count [] = {4,0,0,0,0,0,0,0}; //the four is for counting purposes--actually doesn't count
int days = 365, years, totalDays = 1 , months;
int tDays [101];
int dayCount;//, int getFeb();

int monthArray [] = {0, 31, 29, 31, 30, 31,30,31,31,30,31,30,31 }; //first stack intentionally left blank

//FIRST ASSUMING EVERY MONTH IS 31 DAYS WITH NO LEAP YEARS
 void init (){
    months = 12 * years;
    totalDays = days * years;
}

string getWDays (int day){

    int decider = day%7;

    switch (decider){

        case 0:
            return "Sunday";
        case 1:
            return "Monday";
        case 2:
            return "Tuesday";
        case 3:
            return "Wednesday";
        case 4:
            return "Thursday";
        case 5:
            return "Friday";
        case 6:
            return "Saturday";
    }

}


void generateDays (int increments){
    tDays [0] = 13;
    for (int i  = 1; i < 100; i++){
        tDays[i] = monthArray[++i%12] + tDays [i-1];
        //printf("%d, %s\n",tDays[i], getWDays (tDays[i]));
        cout << tDays [i] << ", " << getWDays(tDays[i]) << endl;
    }

}


int main (){

    years = 20;

    init (); // initialize everything

    //getting the days
    //day 13,

    generateDays (31);


return 0;
}
