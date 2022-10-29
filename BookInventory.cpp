#include<iostream>
using namespace std;
class book
{
private:
    string author;
    string title, publisher;
    float price;
    int stock_position;
public:
    void get_data();
    void edit_data();
    void display_data();
    void search_book(string,string);
    void buy_book();
};
void book ::display_data()
{
    cout<<"Enter the author name"<<endl;
    cout<<"Enter the title name:"<<endl;
    cout<<"Enter the publisher name:"<<endl;
    cout<<"Enter the stock position:"<<endl;
    cout<<"Enter the price:"<<endl;
}
void book:: get_data()
{
    cout<<"Enter the author name"<<endl;
    cin>>author;
    cout<<"Enter the title name:"<<endl;
    cin>>title;
    cout<<"Enter the publisher name:"<<endl;
    cin>>publisher;
    cout<<"Enter the stock position:"<<endl;
    cin>>stock_position;
    cout<<"Enter the price:"<<endl;
    cin>>price;
}
void book :: edit_data()
{
    cout<<"Enter the author name"<<endl;
    cin>>author;
    cout<<"Enter the title name:"<<endl;
    cin>>title;
    cout<<"Enter the publisher name:"<<endl;
    cin>>publisher;
    cout<<"Enter the stock position:"<<endl;
    cin>>stock_position;
    cout<<"Enter the price:"<<endl;
    cin>>price;
}
void book:: search_book(string author_search,string title_search)
{
    if(author_search==author&& title_search==title)
    {
        cout<<"Book is found"<<endl;
    }
    else
    {
        cout<<"Book is not found"<<endl;
    }
}
void book:: buy_book()
{
    int count;
    cout<<"number of copies you rent"<<endl;
    cin>>count;

    if(count<<stock_position)
    {
        stock_position=stock_position-count;
        cout<<"amount to be paid:"<<count*price;
        cout<<"Book bought successfully";
    }
    else
    {
        cout<<" Book not available"<<endl;
    }

}
int main()
{
    book b[50];
    int ch,i=0;
    string title_search ;
    string author_search;
    while(1)
    {


        cout<<"1.enter details\n2.search book\n3.buy book\n4.edit details\n5.Exit"<<endl;
        cout<<"enter choice:";
        cin>>ch;
        switch(ch)
        {
        case 1:
            b[i].get_data();
            i++;
            break;

        case 2:
            cout<<"Enter name and author name to search"<<endl;
            cin>>author_search>>title_search;
            for(int t=0; t<i; t++)
            {
                b[t].search_book(author_search,title_search);
                b[t].display_data();
            }
            break;

        case 3:
            cout<<"Enter name and author name to search"<<endl;
            cin>>author_search>>title_search;
            for(int t=0; t<i; t++)
            {
                b[t].search_book(author_search,title_search);
                b[t].buy_book();
            }
            break;

        case 4:
            b[i].edit_data();
            break;

        case 5:
            exit;
            break;

        default:
            cout<<"Enter the correct choice";
        }
    }
    return 0;

}
