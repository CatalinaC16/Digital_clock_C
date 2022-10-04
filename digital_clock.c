#include <stdlib.h>
#include <stdio.h>
#include <windows.h>

int cresc,desc,hold;
int hours, min, sec, a=2;
int delay=1000;

void func()
{
    while(2){


        if(hold==1){
            printf("The clock is: %02d : %02d : %02d", hours, min, sec);
            Sleep(delay);
            system("cls");
        }
        else if(cresc==1) {
            ++sec;
            if (sec > 59) {
                ++min;
                sec = 0;

            }
            if (min > 59) {
                ++hours;
                min = 0;
            }
            if (hours > 12) {
                hours = 0;
            }
            printf("The clock is: %02d : %02d : %02d", hours, min, sec);
            Sleep(delay);
            system("cls");
        }
        else {
            if(sec > 0) --sec;
            else if(min > 0) {sec=59;--min;
            }
            else if(hours > 0 ){
                min= 59;
                sec= 59;
                -- hours;
            }
            else if(hours==0 && min == 0){
                sec=0;
            }


            printf("The clock is: %02d : %02d : %02d", hours, min, sec);
            Sleep(delay);
            system("cls");
        }
    }
}
int main() {

    printf("Set the start time:\n");
    scanf("%d %d %d",&hours,&min,&sec);
    ///out of borders
    if( hours > 12 || min > 60 || sec>60){
        printf("Stop");
        exit(3);

    }
    printf("cresc desc hold\n");
    scanf("%d %d %d",&cresc,&desc,&hold);
   func();
    return 0;
}
