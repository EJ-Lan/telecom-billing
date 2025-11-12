#include <stdio.h>
#include <string.h>

// Structure to hold customer information
struct Customer {
  char name[50];
  char phoneNumber[15];
  float usage;
  float totalBill;
};

// Global array to store customer data
struct Customer customers[100];

// Global variable to keep track of the number of customers
int customerCount = 0;

// Function to add a new customer record
void addRecord()
{
  if (customerCount < 100) {
    printf("\nEnter name: ");
    scanf(" %[^\n]s", customers[customerCount].name);
    printf("Enter phone number: ");
    scanf("%s", customers[customerCount].phoneNumber);
    printf("Enter usage (in minutes): ");
    scanf("%f", &customers[customerCount].usage);
    customers[customerCount].totalBill
      = customers[customerCount].usage * 0.1;
    customerCount++;
    printf("\nRecord added successfully!\n");
  }
  else {
    printf("\nMaximum number of records reached!\n");
  }
}
