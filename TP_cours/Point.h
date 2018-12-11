#ifndef DEF_POINT
#define DEF_POINT

class Point{
    
    public:

    Point();
    Point(int x,int y=0);
    ~Point();
    
    void show();

    void shift(int x, int y);
    void moveTo(int x, int y);
    void moveTo(Point p);

    void set_x(int x);
    void set_y(int y);

    int get_x();
    int get_y();

    private:
    int x;
    int y;
};

#endif