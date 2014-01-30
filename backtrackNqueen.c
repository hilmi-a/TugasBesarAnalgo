#include <stdio.h>
#include <stdlib.h>
int jml_queen;
int papan[20];

int main(int argc, char *argv[])
{
  printf("\t\t\tN-Queen Problem Solving dengan Backtrack\n");
  printf("\t\t\t========================================\n\n");
  printf("\t\tMasukan Jumlah Queen : ");
  scanf("%d",&jml_queen);
  printf("\nSolusi yang Ditemukan:\n");
  return 0;
}

//Fungsi membuat papan matriks
void cetak_papan(int jml_queen,int q[])
{
 //identifield
 int i,j;
 char array[10][10];
 
 //proses
 for(i=1;i<=jml_queen;i++)
 {
   for(j=1;j<=jml_queen;j++)
   {
    array[i][j]='.';
   }
 }
 
 for(i=1;i<=jml_queen;i++)
 {
   array[i][q[i]]='Q';
 }
  
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
           
