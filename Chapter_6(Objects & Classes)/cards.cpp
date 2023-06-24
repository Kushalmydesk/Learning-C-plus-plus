//Taking Cards as objects
//This is gonna very long program
#include<iostream>
using namespace std;

enum Suit{clubs,diamonds,hearts,spades };
const int jack = 11;
const int queen = 12;
const int king = 13;
const int ace = 14;

class card
  {
    private:
      int number;   //2 to 10, jack,queen,king, ace
      Suit suit;    //clubs,diamonds, hearts, spades
    public:
      card(){}
      card(int n, Suit s):number(n),suit(s){}
      void display();
      bool isEqual(card);
  };

  void card :: display(){       //displays the card
    if(number>=2 && number <=10){
      cout<<number<<" of ";
    }
    else{
      switch(number){
        case jack: cout<<"jack of "; break;
        case queen: cout<<"queen of "; break;
        case king: cout<<"king of "; break;
        case ace: cout<<"ace of "; break;
      }
    }
      switch(suit){
        case clubs: cout<<"clubs"; break;
        case diamonds: cout <<"diamonds"; break;
        case hearts: cout <<"hearts"; break;
        case spades: cout<<"spades"; break;
      }
  }

bool card :: isEqual(card c2){    //return true if cards equal
  return(number==c2.number && suit==c2.suit )? true: false;
}

int main(){
  card temp,chosen, prize;
  int position;

  card card1(7,clubs);
  cout << "\nCard 1 is the ";card1.display();

  card card2(jack,hearts);
  cout << "\nCard 2 is the ";card2.display();

  card card3(ace,spades);
  cout << "\nCard 3 is the ";card3.display();

  prize = card3;

  cout<< "\nI'm swapping card 1 and card 3";
  temp = card3; card3 = card1; card1 = temp;

  cout<< "\nI'm swapping card 2 and card 3";
  temp = card3; card3 = card2; card2 = temp;

  cout<< "\nI'm swapping card 1 and card 2"<<endl;
  temp = card2; card2 = card1; card1 = temp;

  cout<<"Now where(1,2 or 3) is the ";
  prize.display();
  cout<<"?";
  cin>>position;
    switch(position){
      case 1: chosen = card1; break;
      case 2: chosen = card2; break;
      case 3: chosen = card3; break;
      default:
      cout << "Wrong Choose.";
    }


  if(chosen.isEqual(prize)){
    cout<<"\nThat's Right,You win!";
  }
  else{
    cout<<"Sorry.You lose";
  }
  cout<<"\n You choose the "; chosen.display();
  cout <<endl;
  return 0;
}
