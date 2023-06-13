#include <stdio.h>

#define MAX 20
#define STOPS 6

int main()
{
  int stops = 6;
  int passengers = 0;
  int getOn[STOPS] = { 12, 3, 8, 2, 0, 9 };
  int getOff[STOPS] = { 0, 2, 6, 7, 1, 8 };

  for (int i = 0; i < STOPS; i++) 
  {
    passengers += getOn[i];
    passengers -= getOff[i];

    if (passengers > MAX)
    {
      printf("ERROR: OVER CAPACITY\n");
      passengers = 20;
    }
    else
    {
      printf("Passengers: %d\n", passengers);
    }
  }

  return 0;
}