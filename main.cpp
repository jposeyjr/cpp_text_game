#include <iostream>
#include <string> 

using namespace std; 


class Hero { 
  private: 
    string name; 
    string classType; 
    int health; 
    int mana; 
    int gold;
  public: 
  void setName(string n) { 
    name = n; 
  }

  void setClass(string c) { 
    classType = c; 
  }

  void setHealth(int h) { 
    health = h; 
  }

  void setMana(int m) { 
    mana = m; 
  }

  void setGold(int g) { 
    gold = g; 
  }

  int getGold() { return gold; }
  int getMana() { return mana; }
  int getHealth() { return health; } 
  string getClass() { return classType; }
  string getName() { return name; } 

};

  void printWelcome() { 
  cout << "Welcome to the most basic adventure game ever! It is not going to be anything insane but it might be fun!"<< '\n'; 
}

  void askForName() { 
    cout << "Please enter a name for your hero: "; 
  }



int main() {
  
  printWelcome();
  askForName(); 
  Hero hero; 
  string n;
  cin >> n; 
  hero.setName(n); 
  cout << "Welcome " << hero.getName() << endl;
}