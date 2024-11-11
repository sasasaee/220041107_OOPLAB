#ifndef KELVIN_H
#define KELVIN_H

class celsius;
class fahrenheit;

class kelvin
{
    public:
        kelvin();
        kelvin(double temp);
        ~kelvin();
        void assign(double temperature);
        void display()const;
        operator celsius();
        operator fahrenheit();


    protected:

    private:
        double temperature;
};

#endif // KELVIN_H
