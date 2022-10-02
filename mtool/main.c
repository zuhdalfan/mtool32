#include "main.h"

void kbscan(void)
{
    scanf("%s",key);
}

void stampTime(){
    struct tm* ptr;
    time_t t;
    t = time(NULL);
    ptr = gmtime(&t);
    ptr->tm_hour = ptr->tm_hour+7;
    printw("\t%s", asctime(ptr));
}

void printHeader(){
    printf("\n\n");
    printf("\tMTOOL DEV-1.0.0\n");
    stampTime();
    printf("\n\n");
}

void screenWelcome(){
    printHeader();
    printf(
        "\tThis software has free licence. You are allowed to\n"
        "\tuse this for your own purpose. It is just an example\n"
        "\tof creating maintenance tool for your embedded IoT system\n"
        "\n"
        "\tPlease input any key an hit ENTER to continue . . .\n\n"
    );
    kbscan();
}

void screenCredential(){
    printf("\t\n");
}

int main(int argc, char *argv[]){

    if(argv[1] == 'd'){// enter debug mode
        
    }else{// enter normal mode
        while(1){
            screenWelcome();
            while(1){
                screenCredential();
            }
        }
    }

    
    return -1; // 
}