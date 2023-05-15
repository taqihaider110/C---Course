#include<iostream>
using namespace std;
class shop
{
private:
    int itemId[100];
    int itemPrice[100];
    int counter;
public:
    void initcounter(){
        counter=0;
    }
    void setprice(void);
    void displayprice(void);
};

void shop::setprice(void)
{
    cout<<" Enter Id of your item no "<<counter+1<<endl;
    cin>>itemId[counter];
    cout<<" Enter Price of your item  "<<endl;
    cin>>itemPrice[counter];
    counter++;
}

void shop::displayprice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout<<"The Price of Item with Id "<<itemId[i]<<" is "<<itemPrice[i]<<endl;
    }
    
}

int main(){
    shop dukaan;
    dukaan.initcounter();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.displayprice();
    return 0;
}