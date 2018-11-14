#include<iostream>
#include <cmath>

using namespace std;

int main(){
  long int n, m, a;
  cin>>n>>m>>a;

  long long int x = ceil((double)n/a);
  long long int y = ceil((double)m/a);

  cout<<x*y<<endl;

  return 0;


}
