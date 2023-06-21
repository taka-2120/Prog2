#include <stdio.h>

#define N 10

struct Student
{
  int no;
  int eng;
  int math;
  int science;
  int total;
};
typedef struct Student Student;

void calculateTotal(Student data[N])
{
  for (int i = 0; i < N; i++)
  {
    data[i].total = data[i].eng + data[i].math + data[i].science;
  }
}

void printStudent(Student a)
{
  printf("%d/%d,%d,%d,%d\n", a.no, a.eng, a.math, a.science, a.total);
}

int main(void)
{
  Student students[N] = {
      {1005, 86, 75, 92, 0},
      {1012, 65, 91, 80, 0},
      {1043, 45, 75, 58, 0},
      {1173, 97, 75, 82, 0},
      {1224, 77, 77, 77, 0},
      {1397, 27, 62, 35, 0},
      {1500, 58, 85, 62, 0},
      {1734, 80, 52, 46, 0},
      {1888, 98, 93, 96, 0},
      {1920, 60, 60, 60, 0},
  };

  for (int i = 0; i < N; i++)
  {
    printStudent(students[i]);
  }
  calculateTotal(students);

  int studentNo = 0;
  int taken = 0;
  printf("Enter a student number in 4 digits >> ");
  scanf("%d", &studentNo);

  for (int i = 0; i < N; i++)
  {
    if (students[i].no == studentNo)
    {
      taken = 1;
      printStudent(students[i]);
      break;
    }
  }
  if (taken == 0)
  {
    printf("They didn't take the exam.\n", studentNo);
    return 1;
  }

  int passScore;
  int passedTotalScore;
  double totalAverage = 0;
  double passedTotalAverage = 0;
  int passedStudents = 0;
  printf("Enter the passing score for each subject >> ");
  scanf("%d", &passScore);
  printf("Enter the passing score for total score >> ");
  scanf("%d", &passedTotalScore);

  for (int i = 0; i < N; i++)
  {
    totalAverage += students[i].total;
    if ((students[i].eng >= passScore && students[i].math >= passScore && students[i].science >= passScore) || students[i].total >= passedTotalScore)
    {
      printStudent(students[i]);
      passedStudents += 1;
      passedTotalAverage += students[i].total;
    }
  }

  totalAverage /= N;
  passedTotalAverage /= passedStudents;

  printf("Average of total score: %g\n", totalAverage);
  if (passedStudents > 0)
  {
    printf("Average of total score in passed students: %g\n", passedTotalAverage);
  }
  else
  {
    printf("No students passed.\n");
  }

  return 0;
}
