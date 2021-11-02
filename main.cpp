#include <iostream>
#include <vector>
#include<math.h>
using namespace std;

float exp_mod(float p,float g,float x){

  return fmod(pow(g,x),p);
}

int main(){
  int p;
  cout << "p:";
  cin>>p;
  float gmin;
  int x;
  int g;


  for (g=2;g<p; g++){
    for (x=1;x<p-1;x++){
      if (exp_mod((float)p,(float)g,(float)x)== 1.0){
        break;
      }

      if (x==p-2){
      goto end;
      }
    }
   
  }

  
end:
gmin = (float)g;
vector<float> arr;

float y;
  for (int x=1; x<p;x++){
    y=exp_mod(p, gmin, x);
    arr.push_back(y);
    cout << gmin << "^" << x << "mod" << p << "=" << y << endl;
  }

  if (arr.size()==(p-1)){
    cout << gmin << " es p.r=" << "True" << endl;
  }
  else{
    cout << gmin << " es p.r=" << "False" << endl;
  }

  
  


}
