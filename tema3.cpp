#include <iostream>
#include <memory>


class Investment{
    public:
        int capital;
        Investment():capital(1){};
        static Investment* createInvestment(){
            return new Investment();
        }
        Investment(const Investment& a) = delete;
        Investment& operator=(const Investment& a) = delete;
};

void f(){

    std::auto_ptr<Investment> plnv(Investment::createInvestment());

    std::auto_ptr<Investment> plnv1(new Investment());

    std::auto_ptr<Investment> plnv2(plnv1);
}

void f1(){

    std::shared_ptr<Investment> plnv(Investment::createInvestment());
}

int main(){
    f1();
}