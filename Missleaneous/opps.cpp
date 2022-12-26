#include<iostream>
using namespace std;
int main(){
    class hero{


        public:
        char level;

        void sethealth(int h){
            health=h;
        }

         hero(){
            cout<<"Class is called\n";
        }

        int gethealth(){
            return health;
        }

        
        private:

        int health;

        

    };
    hero h1;
    cout<<h1.gethealth()<<endl;
    h1.sethealth(50);
    cout<<h1.gethealth()<<endl;
    return 0;
}