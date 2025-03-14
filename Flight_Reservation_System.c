#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_FLIGHTS 5
#define MAX_SEATS 100

struct Flight {
    int flightNumber;
    char destination[30];
    int availableSeats;
};

struct Flight flights[MAX_FLIGHTS] = {
    {101, "New York", 50},
    {102, "Los Angeles", 40},
    {103, "Chicago", 60},
    {104, "Miami", 30},
    {105, "Dallas", 80}
};

// Function to display available flights
void viewFlights() {
    printf("\nAvailable Flights:\n");
    printf("Flight No.\tDestination\tAvailable Seats\n");
    int i;
    for ( i = 0; i < MAX_FLIGHTS; i++) {
    	
        printf("%d\t\t%s\t\t%d\n", flights[i].flightNumber, flights[i].destination, flights[i].availableSeats);
    }
}

// Function to book tickets
void bookTicket() {
    int flightNumber, seats;

    printf("\nEnter Flight Number to book: ");
    scanf("%d", &flightNumber);

    printf("Enter number of seats to book: ");
    scanf("%d", &seats);
	int i;
	
    for ( i = 0; i < MAX_FLIGHTS; i++) {
        if (flights[i].flightNumber == flightNumber) {
            if (flights[i].availableSeats >= seats) {
                flights[i].availableSeats -= seats;
                printf("Booking successful! %d seats booked on flight %d.\n", seats, flightNumber);
            } else {
                printf("Not enough seats available. Try booking fewer seats.\n");
            }
            return;
        }
    }
    printf("Invalid Flight Number. Please try again.\n");
}

// Function to cancel tickets
void cancelTicket() {
    int flightNumber, seats;

    printf("\nEnter Flight Number to cancel: ");
    scanf("%d", &flightNumber);

    printf("Enter number of seats to cancel: ");
    scanf("%d", &seats);
	int i;
    for ( i = 0; i < MAX_FLIGHTS; i++) {
        if (flights[i].flightNumber == flightNumber) {
            flights[i].availableSeats += seats;
            printf("Cancellation successful! %d seats cancelled on flight %d.\n", seats, flightNumber);
            return;
        }
    }
    printf("Invalid Flight Number. Please try again.\n");
}

int main() {
    int choice;

    while (1) {
        printf("\n=== Flight Reservation System ===\n");
        printf("1. View Available Flights\n");
        printf("2. Book Tickets\n");
        printf("3. Cancel Tickets\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                viewFlights();
                break;
            case 2:
                bookTicket();
                break;
            case 3:
                cancelTicket();
                break;
            case 4:
                printf("Exiting the system. Goodbye!\n");
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}

