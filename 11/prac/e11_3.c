#include <stdio.h>
#include <string.h>

struct Roll
{
  char name[32];
  int birth;
  int zip;
  char address[82];
  char tel[20];
};

int main(void)
{
  struct Roll data;
  struct Roll *dataP;

  dataP = &data;

  strcpy(dataP->name, "Hinako");
  dataP->birth = 19890225;
  dataP->zip = 1234567;
  strcpy(dataP->address, "Yokohama-shi Kanagawa Pref.");
  strcpy(dataP->tel, "045-123-4567");

  printf("\nNAME         BIRTHDAY   ZIP      "
         "ADDRESS                      TEL\n");
  printf("%-10.10s%11.8d%10.7d  %-10.30s  %-12.12s\n", dataP->name, dataP->birth, dataP->zip, dataP->address,
          dataP->tel);

  return 0;
}