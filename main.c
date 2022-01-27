#include <stdio.h>
#include <stdlib.h>

// Tugas 2 PMC (Round Robin)
// Nama: Kadhan Dalilurahman
// NIM : 13220001


int main()
{
    // KAMUS
    int i, n, P[99], w_masuk[99], tar_eks[99], kuantum;

    // INISIASI
    printf("Masukkan banyaknya proses(P): ");
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        printf("\nMasukkan detil dari P%d\n", i);
        printf("   Waktu Masuk P%d: ", i);
        scanf("%d", &w_masuk[i]);
        printf("   Target durasi eksekusi P%d: ", i);
        scanf("%d", &tar_eks[i]);
    }
    printf("\nMasukkan waktu kuantum: ");
    scanf("%d", &kuantum);

    //ALGORITMA
    printf("\n==================");
    printf("\nMohon maap nih Pak, saya belum bisa");
    printf("\nmenyelesaikan programnya");
    printf("\n===================\n");

}
