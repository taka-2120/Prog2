#include <stdio.h>
#include <math.h>

#define MAX_SEAT 10

int main(void)
{
  int seat_no[MAX_SEAT] = {1, 5, 8, 10, 15, 16, 20, 22, 25, 30};
  double point[MAX_SEAT][2] = {
      {1.1, 5.2},
      {3.4, 1.6},
      {4.5, 3.4},
      {2.3, 2.6},
      {6.4, 5.7},
      {7.6, 7.8},
      {5.2, 4.4},
      {1.7, 3.5},
      {3.8, 6.3},
      {5.8, 6.3},
  };

  double min_dis = INFINITY;
  int min_dis_seat[2];

  for (int i = 0; i < MAX_SEAT; i++)
  {
    for (int j = i + 1; j < MAX_SEAT; j++)
    {
      double distance = sqrt(pow(point[i][0] - point[j][0], 2) + pow(point[i][1] - point[j][1], 2));
      if (distance < min_dis)
      {
        min_dis = distance;
        min_dis_seat[0] = seat_no[i];
        min_dis_seat[1] = seat_no[j];
      }
    }
  }

  printf("最小距離: %.2f\n", min_dis);
  printf("最小距離を与える座席番号: %d, %d\n", min_dis_seat[0], min_dis_seat[1]);

  return 0;
}
