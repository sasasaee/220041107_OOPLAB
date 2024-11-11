#ifndef COORDINATE_H
#define COORDINATE_H


class coordinate
{
public:
    coordinate();
    coordinate(float xaxis, float yaxis);
    ~coordinate();
    float operator - (const coordinate& c)const;
    float getdistance()const;
    void move_x(float val);
    void move_y(float val);
    void move(float x_val, float y_val);

    bool operator>(const coordinate& c)const;
    bool operator<(const coordinate& c)const;
    bool operator>=(const coordinate& c)const;
    bool operator<=(const coordinate& c)const;
    bool operator==(const coordinate& c)const;
    bool operator!=(const coordinate& c)const;
    void display();


protected:

private:
    float x;
    float y;
};

#endif // COORDINATE_H
