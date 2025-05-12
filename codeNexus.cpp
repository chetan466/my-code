#include<iostream>
using namespace std;

int main(){
   int f;
   cout<<"enter the number of floor :";
   cin>>f;

   int totalring= 0;
   int totaltime = 0;
 
   for(int i = 1; i <= f ; i++){
      if(f %2 != 0){
        totalring += 1;
      }else if( f % 4 == 0){
        totalring += 2;
      }
   } 

    if(f % 4 == 0 && f % 7 == 0){
        totaltime += 10;
    }else if ( f % 7 == 0){
        totaltime += 5;
       }

  cout<<"total ring :"<<totalring<<endl;
  cout<<"toatl time :"<<totaltime<<endl;
   }      