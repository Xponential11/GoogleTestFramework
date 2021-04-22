#include<math.h>

// use of ceil function
double ceil_func(const double a)
    {
        double b = ceil(a);

    }
// Floor function
double floor_func(const double x)
    {
        double y = floor(x);
        
    }
// Log Function
double log_func(const double f)
    {
        double ret = log(f);
        
    }
// SquareROOT function
double squareRoot(const double a) 
    {
    double b = sqrt(a);
    if(b != b) // NaN check
        { return -1.0; }
    else
        { return sqrt(a); }
    }
// Power Function

double pow_func(double p,double q)
    {
        double r = pow(p,q);
    }
// MODF function
double modf_func(double x)
    {
        double intpart , fractpart;
        fractpart = modf(x,&intpart);
        
    }
// ADD

double add_func(double d, double e)
    {
        double sum = d + e ;
    }
//SUB
double sub_func(double i ,double j)
    {
        double sub = i - j;
    }

