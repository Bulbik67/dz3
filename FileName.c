#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

   
    const double G = 6.67430e-11;   
    const double M = 5.972e24;    
    const double R = 6.371e6;      

    double mass;    
    double height;   
    double force;    

    printf("Введите массу тела (кг): ");
    scanf("%lf", &mass);

    printf("Введите высоту над поверхностью Земли (м): ");
    scanf("%lf", &height);

    
    force = G * M * mass / ((R + height) * (R + height));

    printf("\n--- Расчёт силы тяжести ---\n");
    printf("Масса тела:         %.3f кг\n", mass);
    printf("Высота над Землёй:  %.3f м\n", height);
    printf("--------------------------------\n");
    printf("Сила тяжести:       %.6f Н\n", force);

    return 0;
}