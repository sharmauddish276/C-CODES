#include <iostream>
#include <string>
using namespace std;

struct Book
{
    int id;
    string title;
    string author;
    bool issued;
};

int main()
{
    Book books[100];
    int count = 0, choice, id;
    string title;

    do
    {
        cout << "\n===== Library Management System =====";
        cout << "\n1. Add Book";
        cout << "\n2. Display Books";
        cout << "\n3. Search Book";
        cout << "\n4. Issue Book";
        cout << "\n5. Return Book";
        cout << "\n6. Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Enter Book ID: ";
                cin >> books[count].id;

                cin.ignore();

                cout << "Enter Book Title: ";
                getline(cin, books[count].title);

                cout << "Enter Author Name: ";
                getline(cin, books[count].author);

                books[count].issued = false;
                count++;

                cout << "Book Added Successfully!\n";
                break;

            case 2:
                cout << "\nBook List\n";
                for(int i=0;i<count;i++)
                {
                    cout << "\nID: " << books[i].id;
                    cout << "\nTitle: " << books[i].title;
                    cout << "\nAuthor: " << books[i].author;
                    cout << "\nStatus: " << (books[i].issued ? "Issued" : "Available");
                    cout << "\n----------------------";
                }
                break;

            case 3:
                cin.ignore();
                cout << "Enter Book Title: ";
                getline(cin,title);

                for(int i=0;i<count;i++)
                {
                    if(books[i].title==title)
                    {
                        cout << "\nBook Found";
                        cout << "\nID: " << books[i].id;
                        cout << "\nAuthor: " << books[i].author;
                    }
                }
                break;

            case 4:
                cout << "Enter Book ID: ";
                cin >> id;

                for(int i=0;i<count;i++)
                {
                    if(books[i].id==id)
                    {
                        books[i].issued=true;
                        cout<<"Book Issued Successfully";
                    }
                }
                break;

            case 5:
                cout<<"Enter Book ID: ";
                cin>>id;

                for(int i=0;i<count;i++)
                {
                    if(books[i].id==id)
                    {
                        books[i].issued=false;
                        cout<<"Book Returned Successfully";
                    }
                }
                break;
        }

    }while(choice!=6);

    return 0;
}