class Point
{
private:
    int x,y;
    static int count;
public:
    Point(int x = 0, int y = 0): x(x), y(y){
        count++;
    }
    Point(const Point &p);

    int getX();
    int getY();

    ~Point(){count--;}
};



