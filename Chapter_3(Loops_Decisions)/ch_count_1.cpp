//counts characters and words type in
#include <iostream>
#include<conio.h>   //for getche()

using namespace std;

int main(){
  int chcount = 0;     //counts non-space characters
  int wdcount = 1;     // counts spaces between words
  char ch = 'a';       // ensuring it isn't '\r'


  cout <<"Enter a Phrase:" ;

  while(ch!='\r'){     // loop until Enter typed
    ch = getche();     //read every individual character
    if(ch == ' '){     // if it's a space 
      wdcount ++;     //then word count
    }
    else{
      chcount++;      //then character count
    }
  }
  cout <<"You have typed "<<wdcount<<" word(s) and "<<(chcount-1)<<" letters"<<endl;

  return 0;

}
