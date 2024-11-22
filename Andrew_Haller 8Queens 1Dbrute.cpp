#include <iostream>
#include <cmath>
using namespace std;
bool ok (int Q[]){
  for (int c=0; c<8; c++)
    for (int i=0; i<c; i++){
      if (Q[c]==Q[i]) return false;
      if ((c-i) == abs(Q[c] - Q[i])) return false;
    }
   return true; 
}

int main() {
int Q[8] = {};
  int C = 0;

  for (int Q0 = 0; Q0 < 8; Q0++){
    for (int Q1=0; Q1<8; Q1++){
      for (int Q2=0; Q2<8; Q2++){
        for (int Q3=0; Q3<8; Q3++){
          for (int Q4=0; Q4<8; Q4++){
            for (int Q5=0; Q5<8; Q5++){
              for (int Q6=0; Q6<8; Q6++){
                for (int Q7=0; Q7<8; Q7++){

                  Q[7] = Q7;
                  Q[6] = Q6;
                  Q[5] = Q5;
                  Q[4] = Q4;
                  Q[3] = Q3;
                  Q[2] = Q2;
                  Q[1] = Q1;
                  Q[0] = Q0;
       
        if (ok(Q)){
          C++;
          cout<<"Solution "<<C<<":"<<endl;
          for (int j=0; j<8; j++){
            cout<<Q[j]<<" ";
          }
          cout<<endl;
                }
               }
             }
           }
         }
       }
     }
   }
}
return 0;
}