#include "../include/main.h"

void kbscan(void)
{
    scanf("\t%s",key);
}

void stampTime(){
    struct tm* ptr;
    time_t t;
    t = time(NULL);
    ptr = gmtime(&t);
    ptr->tm_hour = ptr->tm_hour+7;
    printf("\t%s", asctime(ptr));
}

void resetKey(){
    memset(key,0,sizeof(key));
}

void printHeader(){
    system("clear");
    printf("\n\n");
    printf("\tMTOOLTUI DEV-1.0.0\n");
    stampTime();
    printf("\n\n");
}

void screenWelcome(){
    printHeader();
    printf("\t====================      INITIAL      ===================\n\n");
    printf("\tThis software has free licence. You are allowed to\n");
    printf("\tuse this for your own purpose. It is just an example\n");
    printf("\tof creating maintenance tool for your embedded IoT system\n");
    printf("\n");
    printf("\tPlease input any key an hit ENTER to continue . . .\n\n");
}

void screenCredential(uint8_t scene){
    printHeader();
    printf("\t====================      CREDENTIAL      ===================\n\n");
    printf("\tFor security purpose, please input software password\n");
    printf("\tContact developer for further information\n\n");
    printf("\tInput software password . . .\n");
    if(scene == 0){
        printf("\n\tINCORRECT PASSWORD !!!\n");
        printf("\tInput 'b' for back\n");
        printf("\tPress ENTER to confirm\n");
    }
}

int main(int argc, char *argv[]){
    //init
    while(1){// enter welcome screen
        resetKey();
        screenWelcome();
        kbscan();
        while(1){// enter credential screen
            resetKey();
            screenCredential(1);
            kbscan();
            if(strcmp(key,PASSWORD)==0){// enter main menu
                while(1){

                }
            }else{
                screenCredential(0);
                kbscan();
            }
        }
    }
    return -1;
}

    