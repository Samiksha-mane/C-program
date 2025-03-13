#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>  // For sleep() function (Use <windows.h> and Sleep() if on Windows)

#define RED_DURATION 5      // Duration of Red light in seconds
#define YELLOW_DURATION 2    // Duration of Yellow light in seconds
#define GREEN_DURATION 4     // Duration of Green light in seconds

void displayLight(const char *color) {
    system("clear");  // Use "cls" if you are on Windows
    printf("******************************\n");
    printf("       Traffic Light System    \n");
    printf("******************************\n");
    printf("CURRENT LIGHT: %s\n", color);
    printf("******************************\n");
}

int main() {
    while (1) {
        // Red Light
        displayLight("RED");
        sleep(RED_DURATION);

        // Yellow Light
        displayLight("YELLOW");
        sleep(YELLOW_DURATION);

        // Green Light
        displayLight("GREEN");
        sleep(GREEN_DURATION);
    }
    return 0;
}

