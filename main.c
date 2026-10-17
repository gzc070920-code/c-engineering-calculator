
#include <stdio.h>

int main(void) {
    int choice;
    double voltage, current, resistance, power;

    printf("=================================\n");
    printf("   ENGINEERING CALCULATOR\n");
    printf("=================================\n");
    printf("1. Calculate voltage (V = I * R)\n");
    printf("2. Calculate current (I = V / R)\n");
    printf("3. Calculate resistance (R = V / I)\n");
    printf("4. Calculate power (P = V * I)\n");
    printf("Choose an option (1-4): ");

    if (scanf("%d", &choice) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    switch (choice) {
        case 1:
            printf("Enter current (A): ");
            if (scanf("%lf", &current) != 1) {
                printf("Invalid input.\n");
                return 1;
            }
            printf("Enter resistance (Ohms): ");
            if (scanf("%lf", &resistance) != 1 ||
                resistance < 0) {
                printf("Invalid resistance.\n");
                return 1;
            }
            voltage = current * resistance;
            printf("Voltage = %.2f V\n", voltage);
            break;

        case 2:
            printf("Enter voltage (V): ");
            if (scanf("%lf", &voltage) != 1) {
                printf("Invalid input.\n");
                return 1;
            }
            printf("Enter resistance (Ohms): ");
            if (scanf("%lf", &resistance) != 1 ||
                resistance <= 0) {
                printf("Resistance must be greater than zero.\n");
                return 1;
            }
            current = voltage / resistance;
            printf("Current = %.2f A\n", current);
            break;

        case 3:
            printf("Enter voltage (V): ");
            if (scanf("%lf", &voltage) != 1) {
                printf("Invalid input.\n");
                return 1;
            }
            printf("Enter current (A): ");
            if (scanf("%lf", &current) != 1 ||
                current == 0) {
                printf("Current must not be zero.\n");
                return 1;
            }
            resistance = voltage / current;
            printf("Resistance = %.2f Ohms\n", resistance);
            break;

        case 4:
            printf("Enter voltage (V): ");
            if (scanf("%lf", &voltage) != 1) {
                printf("Invalid input.\n");
                return 1;
            }
            printf("Enter current (A): ");
            if (scanf("%lf", &current) != 1) {
                printf("Invalid input.\n");
                return 1;
            }
            power = voltage * current;
            printf("Power = %.2f W\n", power);
            break;

        default:
            printf("Please choose a number from 1 to 4.\n");
            return 1;
    }

    return 0;
}
