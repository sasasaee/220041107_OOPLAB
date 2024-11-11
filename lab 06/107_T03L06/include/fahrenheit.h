#ifndef FAHRENHEIT_H
#define FAHRENHEIT_H
 class celsius;
 class kelvin;

class fahrenheit
{
    public:
        fahrenheit();
        ~fahrenheit();
        void assign(double t);
        void display();
        operator celsius();
        operator kelvin();

    protected:

    private:
        double temperature;
};

#endif // FAHRENHEIT_H
