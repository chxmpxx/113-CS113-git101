/* สรุปบรรยายสัปดาห์ที่ 4 เรื่อง " Functions and Program Structure  " */

/* // Function Definition : การนิยามฟังก์ชัน
return-value-type function-name (parameter-list)
{
    declarations

    statement
    statement
    :
} */

/* // Function Prototypes : เป็นการประกาศการใช้งานฟังก์ชั่นที่อยู่หลัง main() type
return-value-type function-name (parameter-list); //สามารถละชื่อตัวแปรได้ แต่ละประเภทข้อมูลไม่ได้ */

/* // Math Library
#include <stdio.h>
#include <math.h> //เรียกใช้ math library
main (){
    float c = 13.0, d = 3.0, f = 4.0;
    printf("c + d * f         = %.2f\n", c + d * f);
    printf("sqrt of c + d * f = %.2f\n", sqrt(c + d * f)); //ฟังก์ชัน sqrt อยู่ใน math library
} */

/* // Return Values : ฟังก์ชันจะต้องส่งค่ากลับ หรือไม่ก็ส่งกลับในรูปของ void
//ตัวอย่างเช่น
    return 5;
    return (x > 5);
    return (myFunction()); 
//เมื่อโปรแกรมทำงานจนไปเจอคำสั่ง return ที่ผู้ในฟังก์ชัน การทำงานของโปรแกรมจะกลับไปทำงานต่อจากจุดที่ฟังก์ชันถูกเรียกใช้ */

/* // Recursion : ฟังก์ชันที่สามารถเรียกใช้ตนเองได้
long factorial(long n){
    if (n == 0)
        return 1; //จะคืนค่า 1 เมื่อ n = 0
    else
        return n * factorial(n-1); //เมื่อ n != 1 จะเรียกใช้ฟังก์ชันตนเอง โดยส่ง n-1 ไปในพารามิเตอร์
}

int main(){  
    long n; 

    do { //จะทำลูปนี้เรื่อยๆ จนกว่า n > 0 หรือ n = 0
        printf("Enter n: ");
        scanf("%ld", &n); //รับค่า n จากผู้ใช้
        if (n < 0)
            printf("n is a negative value, please re-enter\n"); 
    } while (n < 0);
    printf("%ld! = %ld\n", n, factorial(n)); //เมื่อหลุดจาก do while จะเรียกใช้ฟังก์ชัน factorial
} */