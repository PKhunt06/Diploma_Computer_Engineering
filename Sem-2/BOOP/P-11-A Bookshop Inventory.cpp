// P-11-A WAP for a bookshop that maintain the inventory of books.the list Include details like author, title, price, 
//  publicername and Quantity. Include also member function to add new books and list the books Author wise.

#include<iostream>
#include<string>
#define max 100
using namespace std;

class bookshop
{
    char title[max][25];
    char author[max][25];
    char publishername[max][25];
    float price[max];
    int quantity;
    public:
        bookshop()
        {
            quantity=0;
        }
        void newbook()
        {
            cout<<"Enter Title of book:-\t";
            cin>>title[quantity];
            cout<<"Enter Author of book:-\t";
            cin>>author[quantity];
            cout<<"Enter Publisher Name:-\t";
            cin>>publishername[quantity];
            cout<<"Enter price of book:-\t";
            cin>>price[quantity];
            quantity++;
        }
        void authorwise()
        {
            char tmp_title[25];
            char tmp_author[25];
            char tmp_publishername[25];
            float tmp_price;
            for (int i = 0; i < quantity-1; i++)
            {
                for (int j = i+1; j < quantity; j++)
                {
                    if (strcmp(author[i],author[j])>0)
                    {
                        strcpy(tmp_author,author[i]);
                        strcpy(author[i],author[j]);
                        strcpy(author[j],tmp_author);

                        strcpy(tmp_title,title[i]);
                        strcpy(title[i],title[j]);
                        strcpy(title[j],tmp_title);

                        strcpy(tmp_publishername,publishername[i]);
                        strcpy(publishername[i],publishername[j]);
                        strcpy(publishername[j],tmp_publishername);

                        tmp_price=price[i];
                        price[i]=price[j];
                        price[j]=tmp_price;
                    }
                    
                }
                
            }
            cout<<"\n\nAuthor wise listing:-"<<endl;
            for (int i = 0; i < quantity; i++)
            {
                cout<<"Author:-\t"<<author[i]<<endl;
                cout<<"Title:-\t"<<title[i]<<endl;
                cout<<"Publisher:-\t"<<publishername[i]<<endl;
                cout<<"Price:-\t"<<price[i]<<endl;
            }
            
        }
};

int main()
{
    bookshop b;
    for (int i = 0; i < 3; i++)
    {
        cout<<"Book:-\t"<<i+1<<endl;
        b.newbook();
    }
    
    //b.newbook();
    //b.newbook();
    //b.newbook();
    b.authorwise();
    return 0;
}
