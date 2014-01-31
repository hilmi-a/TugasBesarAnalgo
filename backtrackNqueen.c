#include <stdio.h>
#include <stdlib.h>
int jml_queen;
int papan[20];
int count;

int main(int argc, char *argv[])
{
  int jml_queen,i,j;
  void queen(int baris, int jml_queen);
  
  do{
  system("cls");
  printf("\t\t\tN-Queen Problem Solving dengan Backtrack\n");
  printf("\t\t\t========================================\n\n");
  printf("\t\tMasukan Jumlah Queen [5..8]: ");
  scanf("%d",&jml_queen);
  }while((jml_queen<5)||(jml_queen>8));
  queen(1,jml_queen);
  printf("\n\n\t\t\t\t======================");
  printf("\n\t\t\t\tSOLUSI TELAH HABIS!!!\n\n");
  system("pause");
  return 0;
}

//Fungsi membuat papan matriks
void cetak_papan(int jml_queen)
{
 //identifier
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
     return 1;
}

void queen(int baris, int jml_queen)
{
     int kolom;
     
     for(kolom=1;kolom<=jml_queen;kolom++)
     {
        if(penempatan(baris,kolom))
        {
           papan[baris]=kolom; //tidak ada konflik jadi tempatkan queen
           if(baris==jml_queen) //jalan buntu
              cetak_papan(jml_queen); //cetak papan
           else                         //coba queen dengan posisi selanjutnya
              queen(baris+1,jml_queen);
        }
     }
}
