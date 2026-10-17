#include <stdio.h>

typedef enum {
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
} DayOfWeek;

typedef struct {
    double x;
    double y;
} Point;

int main(void)
{
    const char *day_names[] = {
        "Sunday", "Monday", "Tuesday", "Wednesday",
        "Thursday", "Friday", "Saturday"
    };
    DayOfWeek today = WEDNESDAY;
    Point origin = {0.0, 0.0};

    printf("Enum value %d represents %s.\n", today, day_names[today]);
    printf("Point typedef: (%.1f, %.1f)\n", origin.x, origin.y);
    return 0;
}
