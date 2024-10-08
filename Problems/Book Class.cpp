/*

    Build a Simple Books Class.

    About the Class:

    - ISBN
    - Title
    - Auther 
    - PagesNumber 
    - BuyPrice
    - CopyRight
    - RentPrice
    - Fees
    - CanRent

    - Check if the ISBN is Valid.

*/

#include <iostream>

using namespace std;

class clsBooks{

private:

    string _ISBN, _Title, _Auther, _ReleaseDate, _PagesNumber, _CopyRight;
    short _BuyPrice,_RentPrice,_Fees;
    bool _CanRent;

    bool IsValidISBN(string ISBN) {

        if (ISBN.length() != 7)
            return false;

        if (!isalpha(ISBN.back()))
            return false;

        for (int i = 0; i < ISBN.length(); i++) {

            if ((i == 0 || i == 2 || i == 4)) {

                if (!isdigit(ISBN[i]))
                    return false;

            }

            if ((i == 1 || i == 3 || i == 5)) {

                if (ISBN[i] != '-')
                    return false;

            }

        }

        return true;

    }

public:

    clsBooks(string ISBN,string Title,string Auther,string CopyRight,string ReleaseDate,string PagesNumber,
             short Price) {

        SetISBN(ISBN);
        _Title = Title;
        _Auther = Auther;
        _CopyRight = CopyRight;
        _ReleaseDate = ReleaseDate;
        _PagesNumber = PagesNumber;
        _BuyPrice = Price;
    }

    void SetISBN(string ISBN) {

        while (!IsValidISBN(ISBN)) {

            cout << "the ISBN of the book is wrong we need Valid ISBN.\n";
            cout << "enter a right ISBN for the book: ";
            cin >> ISBN;

        }

        _ISBN = ISBN;

    }
    string GetISBN() {

        return _ISBN;

    }

    void SetTitle(string Title) {

        _Title = Title;

    }
    string GetTitle() {

        return _Title;

    }

    void SetAuther(string Auther) {

        _Auther = Auther;

    }
    string GetAuther() {

        return _Auther;

    }

    void SetCopyRight(string CopyRight) {

        _CopyRight = CopyRight;

    }
    string GetCopyRight() {

        return _CopyRight;

    }

    void SetReleaseDate(string ReleaseDate) {

        _ReleaseDate = ReleaseDate;

    }
    string GetReleaseDate() {

        return _ReleaseDate;

    }

    void SetPagesNumber(string PagesNumber) {

        _PagesNumber = PagesNumber;

    }
    string GetPagesNumber() {

        return _PagesNumber;

    }

    void SetPrice(short Price) {

        _BuyPrice = Price;

    }
    short GetPrice() {

        return _BuyPrice;

    }

    void PrintInfo() {

        cout << "Book Info:\n";
        cout << "________________________\n";
        cout << "Title       : " << _Title << endl;
        cout << "Auther      : " << _Auther << endl;
        cout << "Release Date: " << _ReleaseDate << endl;
        cout << "Pages Number: " << _PagesNumber << endl;
        cout << "Price       : " << _BuyPrice << endl;
        cout << "CopyRight   : " << _CopyRight << endl;
        cout << "ISBN        : " << _ISBN << endl;
        cout << "________________________\n";

    }

};

int main()
{
   
    clsBooks Book1("1-2-3-m","programming 101","mohammad","yes","1-1-2023","1500",120);

    Book1.PrintInfo();

    return 0;
}
