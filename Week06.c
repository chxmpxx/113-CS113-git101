/* สรุปแลปสัปดาห์ที่ 6 เรื่อง " Pass By Reference " */

#include <stdio.h>
int addTen(int *number, int n){ //ประกาศตัวแปรเป็น pointer และ integer
    for (int i = 0; i < n; i++){ //ทำลูป n รอบ
        printf("[%p] = %d\n",number + i, *(number+i)); //ได้ address ของ number ตัวที่ 0 ถึง n, ค่าของ number[i] (4, 5, 6, 7, 8)
        *(number + i)+=10; //ทุกตัวใน array + 10
    }return 1;
}

void addTwenty(int *n){ //รับที่อยู่ของ n มาใส่ pointer จะได้ ค่า n
    *n +=20; //รับค่า n = 5 , n + 20 = 5 + 20
}

int main(){
    int numbers[] = {4, 5, 6, 7, 8};
    int n = 5;
    addTen(numbers,n); //ส่ง number ที่เป็น array เข้าไป กับ n ที่เป็น integer
    for (int i = 0; i < n; i++) //ทำลูป n รอบ
    {
        printf("main [%p] = %d\n",numbers + i, *(numbers +i)); //ได้ค่าจาก array + 10 ใน addTen จะได้ (14, 15, 16, 17, 18)
    }
    addTwenty(&n); //เรียกใช้ฟังก์ชั่น แต่ส่งที่อยู่ของ n เข้าไป
    printf("n = %d\n",n); //ได้ 25 หลังจากเข้าฟังก์ชั่น addTwenty
}