#include <stdio.h>     // สำหรับใช้ฟังก์ชัน printf()

int main() {
    char nameInitial = 'A';           // char: ใช้เก็บตัวอักษร 1 ตัว
    int age = 19;                     // int: ใช้เก็บเลขจำนวนเต็ม
    float weight = 70.5;              // float: ใช้เก็บเลขทศนิยม
    char gender[] = "Man";         // char array (string): ใช้เก็บข้อความหลายตัวอักษร

    // แสดงผลค่าที่เก็บไว้
    printf("nameInitial = %c\n", nameInitial);
    printf("age = %d\n", age);
    printf("weight = %.1f\n", weight);       // %.1f แสดงทศนิยม 1 ตำแหน่ง
    printf("gender = %s\n", gender);

    return 0;    // จบโปรแกรมแบบไม่มี error
}