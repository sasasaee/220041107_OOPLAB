#ifndef COORDINATE_H
#define COORDINATE_H

using namespace std;


class coordinate
{
    public:
        coordinate();
        ~coordinate();
        float operator - (const coordinate& c)const;
        float getdistance();
        void move_x(float val);
        void move_y(float val);
        void move(float x_val, float y_val);

        bool operator>(const coordinate& c)const;
        bool operator<(const coordinate& c)const;
        bool operator>=(const coordinate& c)const;
        bool operator<=(const coordinate& c)const;
        bool operator==(const coordinate& c)const;
        bool operator!=(const coordinate& c)const;


    protected:

    private:
        float x;
        float y;
};

#endif // COORDINATE_H
