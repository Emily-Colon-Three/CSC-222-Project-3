#ifndef DATE_H
#define DATE_H

class NumberArray{
private:
    int size;
    double* data;

    NumberArray(int);
    ~NumberArray();

    void setNumber(int, double);

    inline double getNumber(int index)
    {
        return data[index];
    }

    double getMin() const;
    double getMax() const;
    double getAverage() const;

    void print() const;
};

#endif // DATE_H
