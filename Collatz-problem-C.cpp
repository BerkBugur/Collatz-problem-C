#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

//Fork yap�s� a�a� yap�s� oldu�undan linux i�letim sisteminde �al���yor.
//H.Berk Bu�ur - 1721012012 - �.�

int main()
{
    int sayi = 0;
    int pid,durum;
 
    printf("Bir sayi giriniz: \n");
    scanf("%d", &sayi);
 
       if(sayi < 0)
    {
          printf("Pozitif sayi giriniz ! 0'dan b�y�k olmal� \n");
      scanf("%d", &sayi);
    }
 
    pid = fork();
 
    if(pid < 0)
    {
      printf("Child Process olu�turulamad�.\n");
      exit(-1);
    }
 
    else if(pid == 0)
    {
             do
        {
        if(sayi%2 != 0)
        {
          sayi = (sayi*3)+1;
                }
         
        else if(sayi%2 == 0)
        {
          sayi = sayi/2;
        }
 
        printf("%d \n",sayi);
        }while(sayi != 1);
    }
 
    else
    {
 
        printf("pid %d \n",pid);
    printf("Child process bitirilmesi bekleniyor. \n");
      wait(&durum);
      }     
     
     
return 0;   
}
