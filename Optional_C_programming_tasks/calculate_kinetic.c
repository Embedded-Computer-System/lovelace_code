// K.E = 1/2m v^2
#include<stdio.h>
#include<math.h>

double calculate_kinetic_energy(double velocity, double mass);

int main()
{
    printf("%f", calculate_kinetic_energy(5.0, 0.0));

    return 0;
}

double calculate_kinetic_energy(double velocity, double mass)
{
    if(mass < 0)
    {
        return 0;
    }
    else
    {
        return (0.5) * mass * pow(velocity, 2);;
    }
    
}