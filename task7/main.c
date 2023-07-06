#include <stdio.h>
#include <math.h>

// Function to count the number of intersection points between two circles
int countIntersectionPoints(double x1, double y1, double r1, double x2, double y2, double r2) {
    // Calculate the distance between the centers of the circles
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // Calculate the absolute difference and sum of the radii
    double radiusDiff = fabs(r1 - r2);
    double radiusSum = r1 + r2;

    // Check for intersection conditions
    if (distance < radiusSum && distance > radiusDiff) {
        return 2;  // Two circles intersect
    } else if (distance == radiusSum || (distance == radiusDiff && distance != 0)) {
        return 1;  // Circles touch externally or internally
    } else {
        return 0;  // Circles do not intersect
    }
}

int main() {
    // Variables to store input values
    double x1, y1, r1, x2, y2, r2;

    printf("Enter the coordinates and radius of the first circle (x1, y1, r1): ");
    scanf("%lf %lf %lf", &x1, &y1, &r1);

    printf("Enter the coordinates and radius of the second circle (x2, y2, r2): ");
    scanf("%lf %lf %lf", &x2, &y2, &r2);

    // Call the countIntersectionPoints function to determine the number of intersection points
    int intersectionPoints = countIntersectionPoints(x1, y1, r1, x2, y2, r2);

    printf("Number of intersection points: %d\n", intersectionPoints);

    return 0;
}
