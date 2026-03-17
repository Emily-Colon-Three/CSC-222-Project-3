#ifndef DATE_H
#define DATE_H

class Date {
private: // Private data members
    int year;
    int month;
    int day;

public:
    Date(int y, int m, int d); // Constructor
    ~Date(); // Destructor

    // Inline accessor functions
    inline int getYear() const
    {
        return year;
    }
    inline int getMonth() const
    {
        return month;
    }
    inline int getDay() const
    {
        return day;
    }

    // Member function prototypes
    void setDate(int m, int d, int y);

    bool isLeapYear() const;
    bool isLeapYear(int y) const;

    int lastDay() const;
    int lastDay(int m, int y) const;


};

#endif // DATE_H
