#include<iostream>
#include<string>
using namespace std;
class product
{
    public:
    int Product_Id;
    string Product_Name;
    float Price;
    int MonthlySales[12];

    void GetData()
    {
        cout << "Enter product Id: ";
        cin >> Product_Id;
        cout << "Enter product Name: ";
        cin >> Product_Name;
        cout << "Enter product Price: ";
        cin >> Price;
        
        cout << "Enter monthly sales: ";
        for (int i=0; i<12; i++)
        {
            cout << "Month" << i + 1 << " : " << endl;
            cin >> MonthlySales[i];
        }
    }
    int Total_Quantity()
    {
        int total=0;
        for (int i=0; i<12; i++)
        {
            total = total + MonthlySales[i];
        }
        return total;
    }

    float Total_Bill()
    {
        return Total_Quantity()* Price;
    }

    void display()
    {
        cout << "\n----------------------------------------------------------\n";
        cout << "product Id                     : " << Product_Id << endl;
        cout << "product Name                   : " << Product_Name << endl;
        cout << "Price                          : " << Price << endl;
        cout << "Total Quantity                 : " << Total_Quantity() << endl;
        cout << "Total Bill                     : " << Total_Bill() << endl;
        cout << "\n----------------------------------------------------------\n";
    }
};

int main()
{
    int n;

    cout << "Enter number of products: ";
    cin >> n;

    product p[n]; //Array of product objects

    for (int i=0; i<n; i++)
    {
        cout << "\n Enter details of product" << i << "\n";
        p[i].GetData();
    }
    cout << "\n==========Product Details==========\n";

    for (int i=0; i<n; i++)
    {
        p[i].display();
    }



    return 0;
}