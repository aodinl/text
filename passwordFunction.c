#include "passwordFunction.h"
int passwordTest(User user)
{
  char name[10];
  char password[16];
  printf("please enter your name\n");
  scanf("%s", name);
  printf("please enter your password\n");
  scanf("%s", password);
  return !(strcmp(user.name, name) || strcmp(user.password, password));
}

void passwordRegister()
{
  FILE* passwordFile = fopen("password", "w");
  if (passwordFile)
  {
    char name[10];
    char password[16];
    char question[300];
    char answer[100];

    printf("please enter your user name\n");
    printf("only in English and number\n");
    scanf("%s", name);

    printf("please enter your password(less than 16, only in English and number)\n");
    scanf("%s", password); 

    printf("please enter your question to remake your password\n");
    fgets(question, 300, stdin);

    printf("please enter your answer");
    fgets(answer, 100, stdin);

    fprintf(passwordFile, "%s\n", name);
    fprintf(passwordFile, "%s\n", password);
    fprintf(passwordFile, "%s\n", question);
    fprintf(passwordFile, "%s\n", answer);
  }
  else
  {
    printf("please reboost this program again\n");
    exit(0);
  }
}

void flowIn(User* user, FILE* passwordFile)
{
  char* thePosOfEndl = 0;
  fgets(user->name, 10, passwordFile);
  fgets(user->password, 16, passwordFile);
  thePosOfEndl = strchr(user->name, '\n');
  if (thePosOfEndl)
  {
    *thePosOfEndl = '\0';
    thePosOfEndl = 0;
  }
  thePosOfEndl = strchr(user->password, '\n');
  if (thePosOfEndl)
  {
    *thePosOfEndl = '\0';
  }
}
