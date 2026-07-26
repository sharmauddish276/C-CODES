#include <iostream>
#include <string>
using namespace std;

struct Product
{
    int id;
    string name;
    int quantity;
    double price;
};

int main()
{
    Product p[100];
    int count=0;
    int choice,id;

    do
    {
        cout<<"\n===== Inventory Management System =====";
        cout<<"\n1. Add Product";
        cout<<"\n2. Display Products";
        cout<<"\n3. Search Product";
        cout<<"\n4. Update Quantity";
        cout<<"\n5. Delete Product";
        cout<<"\n6. Exit";
        cout<<"\nEnter Choice: ";
        cin>>choice;

        switch(choice)
        {
            case 1:
                cout<<"Enter Product ID: ";
                cin>>p[count].id;

                cin.ignore();

                cout<<"Enter Product Name: ";
                getline(cin,p[count].name);

                cout<<"Enter Quantity: ";
                cin>>p[count].quantity;

                cout<<"Enter Price: ";
                cin>>p[count].price;

                count++;
                cout<<"Product Added Successfully!";
                break;

            case 2:
                cout<<"\nProduct List\n";

                for(int i=0;i<count;i++)
                {
                    cout<<"\nID: "<<p[i].id;
                    cout<<"\nName: "<<p[i].name;
                    cout<<"\nQuantity: "<<p[i].quantity;
                    cout<<"\nPrice: "<<p[i].price;
                    cout<<"\n----------------------";
                }
                break;

            case 3:
                cout<<"Enter Product ID: ";
                cin>>id;

                for(int i=0;i<count;i++)
                {
                    if(p[i].id==id)
                    {
                        cout<<"\nProduct Found";
                        cout<<"\nName: "<<p[i].name;
                        cout<<"\nQuantity: "<<p[i].quantity;
                        cout<<"\nPrice: "<<p[i].price;
                    }
                }
                break;

            case 4:
                cout<<"Enter Product ID: ";
                cin>>id;

                for(int i=0;i<count;i++)
                {
                    if(p[i].id==id)
                    {
                        cout<<"Enter New Quantity: ";
                        cin>>p[i].quantity;
                        cout<<"Quantity Updated!";
                    }
                }
                break;

            case 5:
                cout<<"Enter Product ID: ";
                cin>>id;

                for(int i=0;i<count;i++)
                {
                    if(p[i].id==id)
                    {
                        for(int j=i;j<count-1;j++)
                        {
                            p[j]=p[j+1];
                        }
                        count--;
                        cout<<"Product Deleted!";
                        break;
                    }
                }
                break;
        }

    }while(choice!=6);

    return 0;
}