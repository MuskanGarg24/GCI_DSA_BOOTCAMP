/*
Write a program that takes as input your gross salary and your total saving and uses another function named taxCalculator() to calculate your tax. The taxCalculator() function takes as parameters the gross salary as well as the total savings amount. The tax is calculated as follows:
(a) The savings is deducted from the gross income to calculate the taxable income. Maximum deduction of savings can be Rs. 100,000, even though the amount can be more than this.
(b) For up to 100,000 as taxable income the tax is 0 (Slab 0); beyond 100,000 to 200,000 tax is 10% of the difference above 100,000 (Slab 1); beyond 200,000 up to 500,000 the net tax is the tax calculated from Slab 0 and Slab 1 and then 20% of the taxable income exceeding 200,000 (Slab 2); if its more than 500,000, then the tax is tax from Slab 0, Slab 1, Slab 2 and 30% of the amount exceeding 500,000.
*/

#include<iostream>
using namespace std;


int taxCalculator(int Gross, int savings){

    int taxable_Income = Gross-savings;
    cout<<"Taxable income = "<<taxable_Income<<endl;
    int slab0, slab1, slab2,slab3;

    if(taxable_Income<=100000){
        slab0=0;
        return slab0;
    }
    else if(taxable_Income>100000 && taxable_Income<=200000){
        slab1=(0.1*(taxable_Income-100000));
        return slab1;
    }
    else if(taxable_Income>200000 && taxable_Income<=500000){
        slab2=(slab0+slab1+(0.2*(taxable_Income-200000)));
        return slab2;
    }
    else if(taxable_Income>500000){
        slab3=slab0+slab1+slab2+(0.3*(taxable_Income-500000));
        return slab3;
    }
}


int main(){

    int Gross;
    cout<<"Enter your gross salary: ";
    cin>>Gross;

    int savings;
    cout<<"Enter your savings: ";
    cin>>savings;

    cout<<"Tax\n"<<taxCalculator(Gross,savings);

    return 0;
}




