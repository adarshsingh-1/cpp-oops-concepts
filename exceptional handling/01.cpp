#include<iostream>
using namespace std;


class invalidAmountError : public runtime_error{
  public:

  invalidAmountError(const string &msg): runtime_error(msg){};
};

class insufficientBalanceError: public runtime_error{
  
  insufficientBalanceError(const string &msg): runtime_error(msg){};
};

// class runtime_error: public exception{
//   public:

//   runtime_error(const string &msg) : exception(msg);
// }

class Customer{
  string name;
  int balance, accNo;

  public:
  Customer(string name, int balance, int accNo){
    this->name = name;
    this->balance = balance;
    this->accNo = accNo;
  }

  //deposit
  void deposit(int amount){
    if(amount <= 0){
      throw invalidAmountError ("Amount should be greater than 0");
    }
      balance+=amount;
      cout<<amount <<" rs is credited successfully"<<endl;
    
  }

  //withdraw

  void withdraw(int amount){
    if(amount > 0 && amount <= balance){
      balance-=amount;
      cout<<amount<<" rs is debited successfully"<<endl;

    }else if(amount<0){
      throw invalidAmountError("amount should be greater than 0 \n");

    }else{
      throw insufficientBalanceError("Your balance is low");
    }
  }
};

int main(){

  Customer c1("Adarsh", 500, 10);
  try{
    c1.deposit(100);
    c1.withdraw(4000);
    c1.deposit(400);
  }
  catch(const invalidAmountError &e){
    cout<<"Exception Occured: "<<e.what()<<endl;
  }
  catch(const insufficientBalanceError &e){
    cout<<"Exception Occured: "<<e.what()<<endl;
  }
  catch(...){
    cout<<"Exception Occured"<<endl;
  }

}