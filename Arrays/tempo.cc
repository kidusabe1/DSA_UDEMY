#include <iostream>
#include <string>
using namespace std;

class fraction{
    public:
    void add(int n1,int d1, int n2, int d2);
    void sub(int& n1,int& d1, int& n2, int& d2);
    void prod(int* n1,int* d1, int* n2, int* d2);
};

void fraction ::add(int n1,int d1, int n2, int d2)
{
    int n_sum= (n1*d2)+(n2*d1);
    int d_prod= d1*d2;
    cout<<"The sum of "<<n1<<"/"<<d1<<" + "<<n2<<"/"<<d2<<" = "<<n_sum<<"/"<<d_prod<<endl;
}

void fraction ::sub(int& n1,int& d1, int& n2, int& d2) 
{
    int n_diff= (n1*d2)-(n2*d1);
    int d_prod= d1*d2;
    cout<<"The difference of "<<n1<<"/"<<d1<<" - "<<n2<<"/"<<d2<<" = "<<n_diff<<"/"<<d_prod<<endl;
}

void fraction :: prod(int* n1,int* d1, int* n2, int* d2)
{
    int n_product= (*n1)*(*n2);
    int d_product= (*d1)*(*d2);
    cout<<"The product of "<<*n1<<"/"<<*d1<<" * "<<*n2<<"/"<<*d2<<" = "<<n_product<<"/"<<d_product<<endl;
}

int main()
{
    fraction f1;
    int num_one, num_two, den_one, den_two;
    cout<<"Give the numerator and denominator of your first fraction\n";
    cin>>num_one >>den_one;
    cout<<"Give the numerator and denominator of your second fraction\n";
    cin>>num_two>>den_two;    
    // defining the reference variables 
    int &NUM_ONE=num_one;
    int &NUM_TWO=num_two;
    int &DEN_ONE=den_one;
    int &DEN_TWO=den_two;
    // defining the pointer varibales
    int *n1=&num_one;
    int *n2=&num_two;
    int *d1=&den_one;
    int *d2=&den_two;
    f1.add(num_one,den_one,num_two,den_two);
    f1.sub(NUM_ONE,DEN_ONE,NUM_TWO,DEN_TWO);
    f1.prod(n1,d1,n2,d2);
    return 0;
    //sub();
}