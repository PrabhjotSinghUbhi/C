#include <stdio.h>

int main() {
    float km = 5;
    float miles = 0.621 * km; // to miles
    float inch = 5;
    float foots = 0.083 * inch; // to foots
    float cms = 5;
    float inches2 = cms * 0.3937; // inches
    float pound = 5;
    float kgs = pound * 0.453; // to kgs
    float inches = 5;
    float meters = inches * 0.0254; // to meters

    printf("%.2f km in miles is %.2f miles\n", km, miles);
    printf("%.2f inch in foots is %.2f foots\n", inch, foots);
    printf("%.2f cms in inches is %.2f inches\n", cms, inches2);
    printf("%.2f pound in kgs is %.2f kgs\n", pound, kgs);
    printf("%.2f inches in meters is %.2f meters\n", inches, meters);

    return 0;
}
