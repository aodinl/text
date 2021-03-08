#include "password.h"
int login()
{
  FILE* passwordFile = fopen("password", "r");
  if (passwordFile)
  {
    int isRight;
    User user;
    flowIn(&user, passwordFile);
    isRight = passwordTest(user);
    while (!isRight)
    {
      printf("please enter your password again\n");
      isRight = passwordTest(user);
    }
  }
  else
  {
    passwordRegister();
  }
}
