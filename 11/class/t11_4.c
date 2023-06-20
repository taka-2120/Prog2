#include <math.h>
#include <stdio.h>
#include <float.h>

#define MAX_SEAT 10

struct seat_position
{
  int no;
  double x;
  double y;
};

int main(void)
{
  struct seat_position seat[MAX_SEAT] = {
      {1, 1.1, 5.2},
      {5, 3.4, 1.6},
      {8, 4.5, 3.4},
      {10, 2.3, 2.6},
      {15, 6.4, 5.7},
      {16, 7.6, 7.8},
      {20, 5.2, 4.4},
      {22, 1.7, 3.5},
      {25, 3.8, 6.3},
      {30, 5.8, 6.3},
  };

  double x_dis, y_dis;
  double dis;
  double min_dis = DBL_MAX;
  int min_dis_seat[2] = {0, 0};

  for (int i = 0; i < MAX_SEAT; i++)
  {
    for (int j = i + 1; j < MAX_SEAT; j++)
    {
      x_dis = seat[i].x - seat[j].x;
      y_dis = seat[i].y - seat[j].y;
      dis = sqrt(x_dis * x_dis + y_dis * y_dis);
      if (min_dis >= dis)
      {
        min_dis = dis;
        min_dis_seat[0] = seat[i].no;
        min_dis_seat[1] = seat[j].no;
      }
    }
  }
  printf("最も近い座席は %d と %d です (距離 %f)\n", min_dis_seat[0], min_dis_seat[1], min_dis);

  return 0;
}  