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
