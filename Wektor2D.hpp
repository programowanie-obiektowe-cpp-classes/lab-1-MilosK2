class Wektor2D
{
    
public:
    Wektor2D()
    {
        this->x = 0.0;
        this->y = 0.0;
    }
    Wektor2D(double x, double y)
    {
        this->x = x;
        this->y = y;
    }
    void setX(double x) { this->x = x; }
    void setY(double y) { this->y = y; }

    double getX() { return this->x; }
    double getY() { return this->y; }

    static Wektor2D sum(Wektor2D x, Wektor2D y)
    { 
        Wektor2D res; 
        res.setX(x.getX() + y.getX());
        res.setY(x.getY() + y.getY());
        return res;
    }
    static double dotProduct(Wektor2D x, Wektor2D y) 
    {
        double res = 0;
        res        = x.getX() * y.getX() + x.getY() * y.getY();
        return res;
    }
    double norm(double x, double y){return sqrt(x * x + y * y);}
    void   print() { printf("X coordinate: %f, Y coordinate: %f", this->x, this->y);}

private:
    double x;
    double y;

};

Wektor2D operator+(Wektor2D x, Wektor2D y)
{
    return Wektor2D::sum(x, y);
}
double operator*(Wektor2D x, Wektor2D y)
{
    return Wektor2D::dotProduct(x, y);
}