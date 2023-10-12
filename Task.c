#include<stdio.h>
#include<string.h>

struct Register
{
    char FName[10];
    char LName[10];
    char Email[25];
    char Password[10];
};

struct Login
{
    char Email[25];
    char Password[10];
};

int main(void)
{
    struct Register registerr;
    struct Login login;

    puts("..........<Register>..........\n");
    printf("Enter your First Name : ");
    gets(registerr.FName);

    printf("Enter your Last Name : ");
    gets(registerr.LName);

    printf("Enter your Email : ");
    gets(registerr.Email);

    printf("Enter your Password : ");
    gets(registerr.Password);

    puts("____________________________________\n");

    puts("..........<Login>..........\n");

    printf("Enter your Email : ");
    gets(login.Email);

    printf("Enter your Password : ");
    gets(login.Password);

    if(strcmp(registerr.Email , login.Email)==0 && strcmp(registerr.Password , login.Password)==0)
    {
        printf("\nLogin Successfully !");
    }
    else
    {
        printf("\nLogin Failed");
    }

return 0;

  
    
}