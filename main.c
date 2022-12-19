#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int num1,num2;
    int pilihan,kembali,keluar;
    float hasil;
    char ch;

    kembali:
    system("cls");
    printf("Masukkan angka pertama: ");
    scanf("%d",&num1);
    printf("Masukkan angka kedua: ");
    scanf("%d",&num2);

    printf("Silakan pilih operasinya : (+,-,*,/,%): ");
    scanf(" %c",&ch);

    hasil=0;
    switch(ch)
    {
        case '+':
            hasil=num1+num2;
            break;

        case '-':
            hasil=num1-num2;
            break;

        case '*':
            hasil=num1*num2;
            break;

        case '/':
            hasil=(float)num1/(float)num2;
            break;

        case '%':
            hasil=num1%num2;
            break;
        default:
            printf("Operasi gagal\n");
    }
    printf("Hasilnya adalah : %d %c %d = %.f\n\n",num1,ch,num2,hasil);
    printf("Tekan tombol 1 untuk menghitung lagi, tekan tombol 2 untuk keluar program:");
        scanf("%d", &pilihan);
       switch(pilihan){
        case 1:
            goto kembali;
            break;
        case 2:
            goto keluar;
            break;
       }
    keluar:
    printf("\nProgram by Rafidhiya Bagus Farizki\n");
    printf("NIM 202110370311424\n");
    return 0;
}

