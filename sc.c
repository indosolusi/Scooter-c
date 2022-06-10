//===============================================//
// Program Aplikasi Scooter                     //
// Oleh: 
// Dated:
//==============================================//

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

char user01[]="user01";
char user01_pass[]="user01";

char user02[]="user02";
char user02_pass[]="user02";


// Main procedure
int main()
{
   int role;
   role = login();
   //role 1=Admin, Role 0=User biasa
   if(role ==1) 
   {
      printf("call menu admin");
   } else if (role ==2) 
   {
      printf("call menu user");
   } 
};


//fungsi login: check admin atau user biasa
//date:
//

int login() 
{
   printf("test\n");
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
         //un = getchar();
         un = username[i]; 

         //pw = getchar();
         un = password[i];
      }

      loop = false;
   }
 
   // Nilai kembali 1=admin
   // Nilai kembali 0=user
   return 1;
}

