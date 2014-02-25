

#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator> // for ostream_iterator
using namespace std;

class Term {
public:
  vector<bool> theOperators;
  vector< pair<int,int > > theDeltas;
};

void Permute(vector<bool> test, vector <Term> &theTerms){
  int sizeTest = test.size();

  for (int i=0;i<sizeTest;i++){
    if (test[sizeTest-1-i] == 1 && test[sizeTest-2-i] ==0){
      //There is a term that goes a a+
      Term aNewTerm;
      vector<bool> left;
      vector<bool> right;
      
	
    }
    
  }

}


int main(){

  vector <bool> test(4);
  test[0]=0;
  test[1]=1;
  test[2]=0;
  test[3]=1;
  

  bool loop =false;
  while (loop){

    if (test.size() == 0){
      loop = false;
      break;
    }
    
  }



  return 0;
}

//  copy(test.begin(), test.end(), ostream_iterator<bool>(cout, " \n"));
