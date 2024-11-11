#ifndef KELVIN_H
#define KELVIN_H

class celsius;
class fahrenheit;

class kelvin
{
    public:
        kelvin();
        ~kelvin();
        void assign(double temperature);
        void display();
        operator celsius();
        operator fahrenheit();


    protected:

    private:
        double temperature;
};

#endif // KELVIN_H
