#include <stdio.h>
#include <stdlib.h>
int jml_queen;
int papan[20];
int count;

int main(int argc, char *argv[])
{
  printf("\t\t\tN-Queen Problem Solving dengan Backtrack\n");
  printf("\t\t\t========================================\n\n");
  printf("\t\tMasukan Jumlah Queen : ");
  scanf("%d",&jml_queen);
  return 0;
}

//Fungsi membuat papan matriks
void cetak_papan(int jml_queen)
{
 //identifield
 int i,j;
 
 //proses
 printf("\n\n solusi %d:\n\n",++count);
 printf(" ");
   for(i=1;i<=jml_queen;i++)
   {
      printf("   %d",i);
   }
   for(i=1;i<=jml_queen;i++)
   {
      printf("\n\n%d",i);
      for(j=1;j<=jml_queen;j++)        
      {
         if(papan[i]==j)
            //penempatan Queen
            printf("   Q");   
         else
            //papan kosong
            printf("   .");   
      }
   }
   printf("\n\n Press any key to continue .....");
   getch();
  
}

//Fungsi penempatan 
int penempatan(int baris, int kolom)
{
     int i;
     for (i=1;i<=baris-1;i++)
     {
//mengecek konflik kolom dan diagonal
         if(papan[i]==kolom)
           return 0;
         else
           if (abs(papan[i]-kolom)==abs(i-baris))
               return 0;
     }
//tidak ada konflik
     return 0;
}
           
