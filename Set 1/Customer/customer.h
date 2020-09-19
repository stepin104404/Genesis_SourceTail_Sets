#include<string>

class Customer
{
    int m_custid;
    int m_phone;
    double m_balance;
    std::string m_type;
    std::string m_custname;
public:
    Customer();
    Customer(int,int,std::string,std::string,double);
    Customer(const Customer &);
    int credit(double);
    int makecall();
    int getbalance();
    void display();
};