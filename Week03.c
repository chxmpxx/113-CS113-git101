/* สรุปบรรยายสัปดาห์ที่ 3 เรื่อง " Control Flow " */

#include <stdio.h>
int main(){

/* // If-Else
if (expression) //กำหนดเงื่อนไข if
    statement1 //จะทำคำสั่งนี้เมื่อ if เป็นจริง
else 
    statement2 //จะทำคำสั่งนี้เมื่อ if เป็นจริง */

/* // Else-If : ถ้า expression ตัวไหนมีค่าเป็นจริง statement ที่เกี่ยวข้องก็จะถูกทำงาน
if (expression1)
    statement1
else if (expression2)
    statement2
else if (expression3)
    statement3
else
    statement4 */

/* // Switch : ตรวจสอบเงื่อนไขโดยดู expression ว่าตรงกับ case ใด แล้วจึงทำงาน statement ภายใต้ case นั้นจนกว่าจะเจอ break แล้วจึงออกจาก switch
switch (expression) {
    case const-expr: 
        statements
    case const-expr:
        statements
    default: //คำสั่ง statements ที่อยู่ภายใต้ default จะถูกทำงานเมื่อค่าของ expression ไม่ match กับ case ใดเลย
        statements
} */

/* // While Loops : ถ้า expression เป็นจริง statement จะถูกทำงาน และถูกวนทำงานจนกว่า expression จะเป็นเท็จ
while (expression){
    statement} */

/* // For Loops
for (expr1; expr2; expr3){ //expr1 และ expr3 เป็นการกำหนดค่าหรือการเรียกใช้ฟังก์ชัน ส่วน expr2 มักจะเป็นการเปรียบเทียบค่า
    statement}

for (;;) {
       ...} //เป็น "infinite" loop */

/* // Do-While Loops : statement จะถูกทำงาน 1 ครั้ง แล้วจึงตรวจสอบเงื่อนไขซึ่งถ้ามีค่าเป็นจริง statement จะถูกทำงานวนไปเรื่อยๆ จนกว่าจะเป็นเท็จ
do {
    statement
} while (expression); */

}