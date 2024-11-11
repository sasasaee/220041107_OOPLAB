#ifndef CELSIUS_H
#define CELSIUS_H

class fahrenheit;
class kelvin;

class celsius
{
    public:
        celsius();
        celsius(double temp);
        ~celsius();
        void assign(double t);
        void display()const;
        operator fahrenheit();
        operator kelvin();


    protected:

    private:
        double temperature;
};

#endif // CELSIUS_H
