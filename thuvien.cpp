#include "thuvien.hpp"

bool Kiem_Tra_So_Nguyen_To (int n)
{
    if (n < 2)
    {
        return false;
    }
    else 
    {
        if (n == 2)
        {
            return true;
        }
        else
        {
            if (n % 2 == 0)
            {
                return false;
            }
            else
            {
                for (int i = 2; i <= n; ++i)
                {
                    if (n % i == 0)
                    {
                        return false;
                    }
                    else
                    {
                        return true;
                    }
                }
            }
        }
    }
    return n;
}

bool Kiem_Tra_So_Hoan_Hao (int n)
{
    int sum;
    sum = 0;
    for (int i = 1; i < n; ++i)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    if (sum == n)
    {
        return true;
    }
    else
    {
        return false;
    }
    return n;
}

void Giai_Phuong_Trinh_Bac_Hai (float a, float b, float c)
{
    if (a == 0)
    {
        if (b == 0)
        {
            if (c == 0)
            {
                cout << "Phuong trinh co vo so nghiem" << endl;
            }
            else
            {
                cout << "Phuong trinh vo nghiem" << endl;
            }
        }
        else
        {
            cout << "Phuong trinh co nghiem: " << -b/c << endl;
        }
    }
    else
    {
        float delta;
        delta = (b * b) - (4 * a * c);
        
        if (delta == 0)
        {
            cout << "Phuong trinh co nghiem kep: " << -b/(2*a) << endl;
        }
        else if (delta < 0)
        {
            cout << "Phuong trinh vo nghiem";
        }
        else
        {
            cout << "Phuong trinh co hai nghiem phan biet: ";
            cout << "x1= " << (-b + sqrt(delta)) / (2*a);
            cout << "x2= " << (-b - sqrt(delta)) / (2*a);
        }
    }
    return;
}