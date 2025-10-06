#include <stdio.h>

int main() {

    // ประกาศตัวแปรพื้นฐาน
    int days;     // จำนวนวันทำงานล่วงเวลา
    float OT_per_day,total_ot;    // ชั่วโมง OT แต่ละวัน
    char level ;    // ระดับรายได้ต่อเดือน
    float ot_income,tax_rate,net_income

    

    // รับข้อมูลจากผู้ใช้งาน
    printf("กรอกข้อมูลจำนวนวันทำงานล่วงเวลา(1-10): ");
    scanf("%d", &days);

    printf("กรอกข้อมูลจำนวนOTต่อวัน: ");
    scanf("%2.f", &OT_per_day,days);

    printf("กรอกระดับรายได้ต่อเดือน(L=ต่ำ,M=กลาง,H=สูง): ");
    scanf(" %c", &level);

        // แสดงผลลัพธ์
     printf("ชม.otที่ทำงานรวม:%2.fชม.\n");
      printf("รายได้otรวมพื้นฐาน:%2.fบ.\n",ot_income);
       printf("ชม.otที่ทำงานรวม:%2.fชม.\n");
        printf("อัตราภาษีหัก:%2.fบ..\n");
         printf("รายได้สุทธิ:%2.fบ.\n");


    

return 0; }
     
      