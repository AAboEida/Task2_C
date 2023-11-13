#include<stdio.h>
#include<string.h>

    union uni 
{
    struct active_flag
    {
        char flag[10];
    }a;
        
         
};

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
        union uni u;
        struct Register R;
        struct Login login;

        puts("..........<Register>..........\n");

        printf("Enter your First Name : ");
        scanf("%s",&R.FName);

        printf("Enter your Last Name : ");
        scanf("%s", &R.LName);

        printf("Enter your Email : ");
        scanf("%s",&R.Email);

        printf("Enter your Password : ");
        scanf("%d",&R.Password);

        printf("Enter your flag : ");
        scanf("%s",&u.a.flag);

        puts("_____________________________________\n");

        puts("..........<Login>..........\n");

        printf("Enter your Email : ");
        scanf("%s",&login.Email);

        printf("Enter your Password : ");
        scanf("%d",&login.Password);

        if(strcmp(R.Email , login.Email)==0 && strcmp(R.Password , login.Password)==0)
        {
            if(strcmp(u.a.flag,"1")==0||strcmp(u.a.flag,"true")==0)
                {
                printf("\n user is active and Login is done Successfully !");
                } 
            else if(strcmp(u.a.flag,"1")!=0||strcmp(u.a.flag,"true")!=0)
                printf("\nuser is not active and login Failed");
        
        }

        else
        {
            printf("\nLogin Failed , Wrong Email or Password");
        }

        return 0;   
    }