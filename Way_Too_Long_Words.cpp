#include<iostream>
#include<string>

using namespace std;

int main(){
  int n;
  cin>>n;
  while(n--){
    string word;
    cin>>word;
    if (word.size() > 10){
      cout<<word[0]<<word.size() -2 <<word[word.size() -1]<<endl;
    }
    else{
      cout<<word<<endl;
    }
  }
  return 0;
}
