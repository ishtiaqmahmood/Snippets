#include <iostream>

using namespace std;

class MobileUser
{
    public:
        virtual void sendMessage() = 0; //abstract function
};

class jack : public MobileUser
{
    public:
        void sendMessage(){
            cout << "This is jack";
        }
};

int main()
{
    MobileUser *m;
    jack j;

    m = &j;
    m -> sendMessage();

}
