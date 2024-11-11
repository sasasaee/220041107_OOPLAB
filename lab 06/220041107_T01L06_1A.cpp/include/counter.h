#ifndef COUNTER_H
#define COUNTER_H


class counter
{
    public:
        counter();
        counter(int step_val);
        ~counter();
        void setincrementstep(int step_val);
        int getcount()const;
        void increment();
        void resetcount(int v=1);

        counter operator+(counter p);
        counter operator+=(counter p);
        counter operator++(int);        //postincrement
        counter operator++();           //preincrement

        bool operator==(counter p)const;
        bool operator!=(counter p)const;
        bool operator>(counter p)const;
        bool operator<(counter p)const;
        bool operator>=(counter p)const;
        bool operator<=(counter p)const;

        friend void testfunction(const counter& c);

    protected:

    private:
        int count;
        int incrementstep;
};

#endif // COUNTER_H
