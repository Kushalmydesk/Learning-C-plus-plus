//demonstrates structures using playing cards
//The Concept i got from the book, But the Modification is completely made by me.
//There is no loopholes, this is completely functionable if the user just put the right inputs.
//This game is totally working.


// i need to add the answering Feature
#include <iostream>
using namespace std;


struct card{
  string number;   //2 to 10, jack,queen,king,ace
  string suit;     //clubs,diamonds,hearts,spades
};


int main(){
    card temp,chosen,prize;
    int position,selection,suffling;

    char play_again,try_again = 'n';

    do {
      card card1, card2, card3;      //Declaring the playing card
      cout << "Enter the First Card Number(Order:2 to 10,  jack,  queen,  king,  ace): \n";
      cin >> card1.number;

      cout << "Enter the First Card Suit(clubs, diamonds, hearts, spades): \n";
      cin >> card1.suit;

      cout << "Enter the Second Card Number(Order:2 to 10,  jack,  queen, king,  ace): \n";
      cin >> card2.number;

      cout << "Enter the Second Card Suit(clubs, diamonds, hearts, spades): \n";
      cin >> card2.suit;

      cout << "Enter the Third Card Number(Order:2 to 10,  jack,  queen,  king,  ace): \n";
      cin >> card3.number;

      cout << "Enter the Third Card Suit( clubs, diamonds, hearts, spades): \n";
      cin >> card3.suit;


      cout << "Your First Card is "<<card1.number<<" of "<<card1.suit<<endl;
      cout << "Your Second Card is "<<card2.number<<" of "<<card2.suit<<endl;
      cout << "Your Third Card is "<<card3.number<<" of "<<card3.suit<<endl;
      for(int star = 0;star<=45; star++){
        cout<<"*";
      }
      cout<<endl;
      //the break; statement working
      do{
        cout <<"Which Card do you want to select for the Prize: "<<endl;
        cin>> selection;
        switch(selection){
          case 1:
            prize = card1;
            cout<<"Your Call has been taken"<<endl;
            break;
          case 2 :
            prize = card2;
            cout<<"Your Call has been taken"<<endl;
            break;
          case 3:
            prize = card3;
            cout<<"Your Call has been taken"<<endl;
            break;
          default:
            cout<<"You have entered a Wrong card :("<<endl;
            cout<<"Do you want to try again:(y/n)"<<endl;
            cin >>try_again;
            break;
        } 
        if(selection == 1 || selection == 2 || selection == 3){
            break;
        }
      }while(try_again == 'y' );

      if(selection == 1 || selection == 2 || selection == 3){
        cout<<"How Many times you want to suffle:"<<endl;
        cin >> suffling;
        cout<<"Suffling the Cards";
        for(int i = 1; i<= suffling; i++ ){
          cout<<".";
          card1 = temp; card1 = card2; card2 = temp;
          temp = card3; card3 = card2; card2 = temp;
          temp = card1; card1 = card3; card3 = temp;
        }
        //this break; statement is also working
        do{
          cout << "\nEnter the position of "<<prize.number<< " of "<<prize.suit<<" : "<<endl;
          cin >> position;
          switch(position)  {
            case 1:
              chosen = card1;
              break;
            case 2 :
              chosen = card2 ;
              break;
            case 3:
              chosen = card3;
              break;
            default:
              cout<<"You have entered a Wrong position :("<<endl;
              cout<<"Do you want to try again:(y/n)"<<endl;
              cin >>try_again;
          }
          if(position == 1 || position == 2 || position == 3){
            break;
          }
        }while(try_again == 'y');
      }


      if(position == 1 || position == 2 || position == 3){
        if(chosen.number == prize.number && chosen.suit == prize.suit){
          cout<<"That's Right! You Win.\n";
        }
        else{
        cout<<"Sorry.You lose!\n";
        }
      }
      else{
        cout << "You gave up :("<<endl;
      }



      cout<<"Do you want to play again:(y/n)"<<endl;
      cin>>play_again;
    } while(play_again == 'y');



  return 0;
}
