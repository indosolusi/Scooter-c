#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

// Definisi fungsi-fungsi
int login();
bool is_admin();

// User List Admin dan User biasa
char admin[]="admin";
char admin_pass[]="admin";

char user[]="user";
char user_pass[]="user";

char user[01]="user01";
char user_pass[01]="user01";


// Main procedure
int main()
{
   int login();
};


//fungsi login: check admin atau user biasa
//date:
//

int login() 
{
   char username[25];
   char password[25];
   char un,pw;
   int i;
   bool loop=true;

   system("clear");
   printf("\n\n");
   printf("SELAMAT DATANG DI APLIKASI SCOOTER\n");
   printf("----------------------------------\n\n");
   printf("Silakan login untuk masuk ke Aplikasi\n\n");

   while (loop) 
   {   
      printf("Username: ");
      gets(username);
      printf("Password: ");
      gets(password);
      printf("%s\r", username);
      printf("%s\r", password);

      for (i = 0; i < 25; i++)
      {
         un = getchar();
         username[i] = un;

         pw = getchar();
         password[i] = un;
      }

      loop = false;
   }
 
   // Nilai kembali 1=admin
   // Nilai kembali 0=user
   return 
}

