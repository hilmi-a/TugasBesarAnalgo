#include <stdio.h>
#include <stdlib.h>
int jml_queen;

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
