/* สรุปแลปสัปดาห์ที่ 5 เรื่อง " Array and Pointer " */

#include <stdio.h>
int main(){
    
    /* int x = 100; //เลขฐานสิบ
    int q = 0144; //เลขฐานแปด
    int w = 0x64; //เลขฐานสิบหก
    printf("x = %d\n", x);
    printf("Reference of x = %lu\n", &x); //จะได้ค่า address ของ x ฐานสิบ
    printf("Reference of x = %p\n", &x); // %p จะได้ค่า address ของ x ฐานสิบหก */

    /* int number[99] = {3, 4, 5, 6, 7};
    printf("index 1 = %d\n", number[1]); //จะได้ index 1 = 4 
    printf("Reference number[1] = %p\n", &number[1]+1); //จะได้ address ของ number[2] เพราะมีการ +1 
    printf("Reference number[0] = %p\n", &number[0]); //จะได้ address ของ number[0]
    printf("Reference number = %p\n", &number); //จะได้ address ของ number ฐาน 16 */

    /* int x = 100 , number[] = {1, 2, 3, 4, 5, 6};
    int *ptr = &x; //ประกาศตัวแปร pointer ชื่อ ptr โดยชี้ไปที่ x 
    int *arrPtr; //ประกาศตัวแปร pointer ชื่อ arrPtr
    arrPtr = number; //ให้ arrPtr ชี้ไปที่ address ของ number
    arrPtr += 3; //บวกค่า address
    *arrPtr += 3; //ตอนนี้ arrPtr ชี้ไปที่ number[3] คือ 4 เมื่อ +3 จะมีค่าคือ 7
    printf("arrPtr = %p, *arrptr = %d\n", arrPtr, *arrPtr); //จะได้ค่าของ address number[3] และ 7 */

}