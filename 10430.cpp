#include<iostream>

class com{
    private:
        int a,b,c;
        int res[4];
        
    public:
        com();
    
        void cal();
        void pri();
        void test();
};

com::com(){
    std::cin>>this->a>>this->b>>this->c;
}

void com::cal(){
    this->res[0]=(this->a+this->b)%this->c;
    this->res[1]=(this->a%this->c+this->b%this->c)%this->c ;
    this->res[2]=(this->a*this->b)%this->c;
    this->res[3]=((this->a%this->c)*(this->b%this->c))%this->c;
}

void com::pri(){
    int i =0;
    while(i<4){
        std::cout<<this->res[i]<<"\n";
        i++;
    }
}

int main(){
    com coo;
    

    coo.cal();
    coo.pri();
    
    return 0;
}

