#include <stdio.h>

int main() {
    int tuoi_benh_nhan[4];
    int co_bao_hiem[4];
    int phi_kham[4];
    
    int tong_doanh_thu = 0;
    int tong_ca_uu_tien = 0;
    const int GIA_GOC = 200000;

    printf("=== HE THONG TIEP NHAN MEDCARE CLINIC ===\n");
    int i; 
    for (i = 0; i < 4; i++) {
        printf("\nNhap thong tin benh nhan thu %d (Index %d):\n", i + 1, i);
        printf("- Do tuoi: ");
        scanf("%d", &tuoi_benh_nhan[i]);
        printf("- Trang thai BHYT (1: Co, 0: Khong): ");
        scanf("%d", &co_bao_hiem[i]);
    }
     
    for (i = 0; i < 4; i++) {
        if (tuoi_benh_nhan[i] <= 0 || tuoi_benh_nhan[i] > 120) {
            phi_kham[i] = 0;
            continue; 
        }

        if (co_bao_hiem[i] != 0 && co_bao_hiem[i] != 1) {
            co_bao_hiem[i] = 0; 
        }

        if (co_bao_hiem[i] == 1) {
            phi_kham[i] = 40000; 
        } else {
            phi_kham[i] = GIA_GOC; 
        }

        tong_doanh_thu += phi_kham[i];
        if (tuoi_benh_nhan[i] > 70) {
            tong_ca_uu_tien++;
        }
    }

    printf("\n================ BAO CAO CA TRUC =================\n");
  
    for ( i = 0; i < 4; i++) {
        printf("Benh nhan %d | ", i + 1);
        
        if (tuoi_benh_nhan[i] <= 0 || tuoi_benh_nhan[i] > 120) {
            printf("Tuoi: %3d | Luong: LOI DU LIEU | Phi kham: 0 VND\n", tuoi_benh_nhan[i]);
        } else {
            char luong[10];
            if (tuoi_benh_nhan[i] > 70) {
                sprintf(luong, "UU TIEN");
            } else {
                sprintf(luong, "THUONG");
            }
            
            printf("Tuoi: %3d | BHYT: %d | Luong: %-8s | Phi kham: %6d VND\n", 
                   tuoi_benh_nhan[i], co_bao_hiem[i], luong, phi_kham[i]);
        }
    }
    
    printf("--------------------------------------------------\n");
    printf("Tong so ca UU TIEN : %d ca\n", tong_ca_uu_tien);
    printf("Tong doanh thu     : %d VND\n", tong_doanh_thu);
    printf("==================================================\n");

    return 0;
}
