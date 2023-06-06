//8.3
// #include <stdio.h>

// int main(void)
// {
//   char base = 'a';
//   int i;
//   char *p = &base;

//   for (i = 0; i < 5; i++)
//   {
//     printf("%p ", p + i);
//   }

//   printf(" size = %td\n", sizeof(char));

//   return 0;
// }

// 8.4
// #include <stdio.h>

// int main(void)
// {
//   int base = 1;
//   int i;
//   int *p = &base;

//   for (i = 0; i < 5; i++)
//   {
//     printf("%p ", p + i);
//   }

//   printf(" size = %td\n", sizeof(int));

//   return 0;
// }

// 8.5
#include <stdio.h>

int main(void)
{
  int i;
  int base = -4; // -4はダミー
  int *p = &base;

  for (i = 0; i < 5; i++)
  {
    printf("%p ", p);
    p += 3;
  }

  printf(" size = %td\n", sizeof(int));

  return 0;
}