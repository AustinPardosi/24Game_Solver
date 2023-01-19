#include "function.cpp"

// ALGORITMA UTAMA 

             

int main() {
    time_t process = time(NULL);

    printf("Selamat Datang di Permainan Kartu 24                       ");
    printf("%s\n", ctime(&process));
    printf("Pilihan input :\n");
    printf("1. Random Generator\n");
    printf("2. Input Manual\n");
    printf("Silahkan memilih jenis inputan : " );

    int inp;
    scanf("%d", &inp);
    while (inp != 1 && inp != 2) {
        printf("\nMasukkan tidak sesuai\n");
        printf("Silahkan memilih kembali jenis inputan : ");
        scanf("%d", &inp);
    }
    fstream newfile;

    if(inp == 1) {
        int N = 12;
        srand(time(0));
        int a1 = (rand() % N) + 1;
        int a2 = (rand() % N) + 1;
        int a3 = (rand() % N) + 1;
        int a4 = (rand() % N) + 1;
        string x1, x2, x3, x4;
        x1 = changeData(a1);
        x2 = changeData(a2);
        x3 = changeData(a3);
        x4 = changeData(a4);
        printf("%s %s %s %s\n", x1.c_str(), x2.c_str(), x3.c_str(), x4.c_str());
        auto start = high_resolution_clock::now();
        // Algoritma Utama Dipanggil
        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<milliseconds>(stop - start);
        printf("Waktu yang dibutuhkan : ");
        printf("%.2lf", duration.count());
        printf(" millisecond\n");
        printf("\n");
        printf("Apakah ingin menyimpan solusi? (Y/N) : ");

        char opt;
        scanf("%c", &opt);
        // while (opt != 'Y' || opt != 'y' || opt != 'N' || opt != 'n') {
        //     printf("\nMasukkan tidak sesuai\n");
        //     printf("Silahkan memilih kembali apakah ingin menyimpan solusi : ");
        //     scanf("%c", &opt);
        // }
        if(opt == 'Y' || opt == 'y') {
            // newfile.open("Jawaban.txt", ios::out);
            // if (newfile.is_open()) {
            //     newfile
            // }
        } else if (opt == 'N' || opt == 'n') {
            printf("Baik, terima kasih sudah mau bermain!\n");
        }

    } else {
        printf("Ketik 4 buah angka/huruf pada kartu yang diinginkan : ");
        char a[3], b[3], c[3], d[3];
        scanf("%s %s %s %s", a, b, c, d);
        string x1, x2, x3, x4;
        x1 = a;
        x2 = b;
        x3 = c;
        x4 = d;
        int a1, a2, a3, a4;
        a1 = changeType(x1);
        a2 = changeType(x2);
        a3 = changeType(x3);
        a4 = changeType(x4);
        // Validasi Inputan belum selesai
        auto start = high_resolution_clock::now();
        // Algoritma Utama Dipanggil
        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<microseconds>(stop - start);
        printf("Waktu yang dibutuhkan : ");
        printf("%.2lf", duration.count());
        printf(" microsecond\n");
    }

  

}