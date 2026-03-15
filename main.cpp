#include <iostream>
using namespace std;

int main()
{
  // Declare integer variables for the three temperatures readings 
int temp1, temp2, temp3; 
int increase;

// Step 1: Request first and second readings from the user
cout << "Enter the first temperature reading: ";
cin >> temp1;
cout<< "Enter the second temperature reading: ";
cin >> temp2

  // Steo 2: Calculate the difference between the first two readings
  increase = temp2 - temp1

  // Step 3: Check if heat increase is too fast or too slow
  if (increase > 50)
{
cout << "Reduce fryer heat before taking the third reading." << end1;
}
else if (increase < 10)
{
cout << "Increase the fryer heat before taking the third reading." << end1;
}

// Step 4: Request the final temperature reading
cout << "Enter the third temperature reading: ";
cin >> temp3

  // Step 5: Check if oil is within the 150-190 degree frying range
  if (temp3 >= 150 && <= 190)
{
cout << "You may start frying the magwinyas." << end1;
}
else
{
cout << "Oil is not ready for frying!" << end1;
}

return 0;
}
