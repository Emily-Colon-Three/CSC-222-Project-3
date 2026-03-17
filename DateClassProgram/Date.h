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
    inline int getYear()
    {
        return year;
    }
    inline int getMonth()
    {
        return month;
    }
    inline int getDay()
    {
        return day;
    }

    // Member function prototypes
    void setDate(int m, int d, int y);


};

#endif // DATE_H
