#include<iostream>
#include<string>

using namespace std;

class Character{
    public : 
        Character(string charName) : name(charName),hp(300), mp(200), Str(10), Dex(10), Int(10), Lux(10){};
        void displayChinter() const{
            cout << "캐릭터 : " << name << endl;
            cout << "Str : " << Str << endl;
            cout << "Dex : " << Dex << endl;
            cout << "Int : " << Int << endl;
            cout << "Lux : " << Lux << endl;
        }
    protected : 
        string name;
        int hp, mp;
        int Str, Dex, Int, Lux;
};

class Warrior : public Character{
    public :
        Warrior(string name) : Character(name){
            Str += 20;
        }
};

class Archer : public Character{
    public :
        Archer(string name) : Character(name){
            Dex += 20;
        }
};

class Magition : public Character{
    public :
        Magition(string name) : Character(name){
            Int += 20;
        }
};

class Theif : public Character{
    public :
        Theif(string name) : Character(name){
            Lux += 20;
        }
};

int main() {
    cout << "Choose your character: \n1. Warrior\n2. Archer\n 3. Magition\n4. Theif\n";
    int choice;
    cin >> choice;

    Character* player;

    if (choice == 1) {
        player = new Warrior("Warrior");
    } else if(choice == 2) {
        player = new Archer("Archer");
    }
    } else if(choice == 3) {
        player = new Magition("Magition");
    }
     else if(choice == 4) {
        player = new Theif("Theif");
    }



    player->displayChinter();
    delete player;
    
    return 0;
}
