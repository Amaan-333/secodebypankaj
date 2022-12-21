#include <iostream>
using namespace std;

class publication
{
public:
    string title;
    float price=0;
    void getdata()
    {
        cout<<"Enter title "<<endl;
        cin>>title;
        cout<<"Enter price "<<endl;
        cin>>price;
    }
    void putdata()
    {
        cout<<"Title is :"<<title<<endl;
        cout<<"Price is :"<<price<<endl;
    }
};

class book:public publication
{   public:
    int pages=0;
    void getdata()
    {
        publication::getdata();
        cout<<"Enter pages"<<endl;
        cin>>pages;
    }
    void putdata()
    {
        publication::putdata();
        cout<<"Pages is :"<<pages<<endl;
    }
};

class tape:public publication
{   public:
    float time=0;
    void getdata()
    {
        publication::getdata();
        cout<<"Enter time"<<endl;
        cin>>time;
    }
    void putdata()
    {
        publication::putdata();
        cout<<"Time is :"<<time<<endl;
    }
};

int main()
{
    book b;
    tape t;
    cout<<"Enter book details"<<endl;
    b.getdata();
    cout<<"Enter tape details"<<endl;
    t.getdata();
    cout<<"\nBook details are"<<endl;
    b.putdata();
    cout<<"\nTape details are"<<endl;
    t.putdata();
    return 0;
}
