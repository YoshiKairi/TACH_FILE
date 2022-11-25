//Student ID: 22127427
//Name: Nguyen Minh Triet
//Class: 22CLC08


#include "thuvien.hpp"
 
int main()
{
    int n;
    float a,b,c;
    cout << "Hay chon menu sau:" << endl;
    cout << "Nhap 1: de xem bai 1" << endl;
    cout << "Nhap 2: de xem bai 2" << endl;
    cout << "Nhap 3: de xem bai 3" << endl;
    cout << "Nhap 0: de thoat khoi ung dung" << endl;
 
    int control;
    cout << "\nMoi ban chon so bai: ";
    cin >> control;
    if (control == 0)
    {
        system ("pause");
        return 0;
    }
 
    switch (control)
    {
        case 1:
        {
            cout << "Ban da chon xem bai 1" << endl;
            cout << "Nhap so nguyen n: ";
            cin >> n;
            bool KT = Kiem_Tra_So_Nguyen_To (n);
            if (KT == true)
            {
                cout << "n la so nguyen to" << endl;
            }
            else
            {
                cout << "n khong la so nguyen to" << endl;
            }
            break;
        }

        case 2:
        {
            cout << "Nhap so nguyen n: ";
            cin >> n;
            bool KT = Kiem_Tra_So_Hoan_Hao (n);
            if (KT == true)
            {
                cout << "n la so hoan hao" << endl;
            }
            else
            {
                cout << "n khong la so hoan hao" << endl;
            }
            break;
        }

        case 3:
        {
            cout << "Nhap so nguyen a: ";
            cin >> a;
            cout << "Nhap so nguyen b: ";
            cin >> b;
            cout << "Nhap so nguyen c: ";
            cin >> c;
            void Giai_Phuong_Trinh_Bac_Hai (float a, float b, float c);
        }
        break;
    }
    return main ();
}