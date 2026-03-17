#include "Date.h"
#include <string>

Date::Date(int year, int month, int day) : year(1900), month(1), day(1) {} // Default date is January 1st, 1900.

void Date::setDate(int m, int d, int y)
{
    // Find the number of days in the month selected
    int lastDayOfMonth = 30; // PLACEHOLDER VALUE

    if ((y > 0 && m > 0 && d > 0) && (m <= 12 && d <= lastDayOfMonth)) // Ensures input within the minimum and maximum values. Year has no max.
    {
        Date::day = d;
        Date::month = m;
        Date::year = y;
    }
    else
    {
        Date::day = 1;
        Date::month = 1;
        Date::year = 1900;
    }
}
