#include "Date.h"
#include <string>

// Constants for month lengths (Non-leap)
const int JANUARY = 31;
const int FEBRUARY = 28;
const int MARCH = 31;
const int APRIL = 30;
const int MAY = 31;
const int JUNE = 30;
const int JULY = 31;
const int AUGUST = 31;
const int SEPTEMBER = 30;
const int OCTOBER = 31;
const int NOVEMBER = 30;
const int DECEMBER = 31;

Date::Date(int year, int month, int day) : year(1900), month(1), day(1) {} // Default date is January 1st, 1900.

Date::~Date() {}; // Destructor

void Date::setDate(int m, int d, int y)
{
    // Find the number of days in the month selected
    int lastDayOfMonth = lastDay();

    if ((y > 0 && m > 0 && d > 0) && (m <= 12 && d <= lastDayOfMonth)) // Ensures input within the minimum and maximum values. Year has no max.
    {
        Date::day = d;
        Date::month = m;
        Date::year = y;
    }
    else // Defaults to this date if input outside range
    {
        Date::day = 1;
        Date::month = 1;
        Date::year = 1900;
    }
}

bool Date::isLeapYear() const
{
    bool leapYear = false;

    if (Date::year % 4 == 0)
    {
        if (Date::year % 100 == 0)
        {
            if (Date::year % 400 == 0)
            {
                leapYear = true;
            }
        }
        else
        {
            leapYear = true;
        }
    }

    return leapYear;
}

bool Date::isLeapYear(int y) const
{
    bool leapYear = false;

    if (y % 4 == 0)
    {
        if (y % 100 == 0)
        {
            if (y % 400 == 0)
            {
                leapYear = true;
            }
        }
        else
        {
            leapYear = true;
        }
    }

    return leapYear;
}

int Date::lastDay() const
{
    if (Date::month == 1)
    {
        return JANUARY;
    }
    if (Date::month == 2)
    {
        if (isLeapYear())
        {
            return FEBRUARY + 1;
        }
        else
        {
            return FEBRUARY;
        }
    }
    if (Date::month == 3)
    {
        return MARCH;
    }
    if (Date::month == 4)
    {
        return APRIL;
    }
    if (Date::month == 5)
    {
        return MAY;
    }
    if (Date::month == 6)
    {
        return JUNE;
    }
    if (Date::month == 7)
    {
        return JULY;
    }
    if (Date::month == 8)
    {
        return AUGUST;
    }
    if (Date::month == 9)
    {
        return SEPTEMBER;
    }
    if (Date::month == 10)
    {
        return OCTOBER;
    }
    if (Date::month == 11)
    {
        return NOVEMBER;
    }
    if (Date::month == 12)
    {
        return DECEMBER;
    }
}

int Date::lastDay(int m, int y) const
{
    if (m == 1)
    {
        return JANUARY;
    }
    if (m == 2)
    {
        if (isLeapYear(y))
        {
            return FEBRUARY + 1;
        }
        else
        {
            return FEBRUARY;
        }
    }
    if (m == 3)
    {
        return MARCH;
    }
    if (m == 4)
    {
        return APRIL;
    }
    if (m == 5)
    {
        return MAY;
    }
    if (m == 6)
    {
        return JUNE;
    }
    if (m == 7)
    {
        return JULY;
    }
    if (m == 8)
    {
        return AUGUST;
    }
    if (m == 9)
    {
        return SEPTEMBER;
    }
    if (m == 10)
    {
        return OCTOBER;
    }
    if (m == 11)
    {
        return NOVEMBER;
    }
    if (m == 12)
    {
        return DECEMBER;
    }
}
