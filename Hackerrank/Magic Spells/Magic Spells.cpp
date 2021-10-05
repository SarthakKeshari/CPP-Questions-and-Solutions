//While playing a video game, you are battling a powerful dark wizard. He casts his spells from a distance, giving you only a few seconds to react and conjure your counterspells. For a counterspell to be effective, you must first identify what kind of spell you are dealing with.

//The wizard uses scrolls to conjure his spells, and sometimes he uses some of his generic spells that restore his stamina. In that case, you will be able to extract the name of the scroll from the spell. Then you need to find out how similar this new spell is to the spell formulas written in your spell journal.

//Spend some time reviewing the locked code in your editor, and complete the body of the counterspell function.

//Check Dynamic cast to get an idea of how to solve this challenge.

//Full Application Based Question.


#include <iostream>
#include <vector>
#include <string>
using namespace std;
// Spells code.
class Spell { 
    private:
        string scrollName;
    public:
        Spell(): scrollName("") { }
        Spell(string name): scrollName(name) { }
        virtual ~Spell() { }
        string revealScrollName() {
            return scrollName;
        }
};
//Fireball Code.
class Fireball : public Spell { 
    private: int power;
    public:
        Fireball(int power): power(power) { }
        void revealFirepower(){
            cout << "Fireball: " << power << endl;
        }
};
//Frostbite Code.
class Frostbite : public Spell {
    private: int power;
    public:
        Frostbite(int power): power(power) { }
        void revealFrostpower(){
            cout << "Frostbite: " << power << endl;
        }
};
//Thunderstorm Code.
class Thunderstorm : public Spell { 
    private: int power;
    public:
        Thunderstorm(int power): power(power) { }
        void revealThunderpower(){
            cout << "Thunderstorm: " << power << endl;
        }
};
//Waterbolt Code.
class Waterbolt : public Spell { 
    private: int power;
    public:
        Waterbolt(int power): power(power) { }
        void revealWaterpower(){
            cout << "Waterbolt: " << power << endl;
        }
};
//SpellJournal Code.
class SpellJournal {
    public:
        static string journal;
        static string read() {
            return journal;
        }
}; 
string SpellJournal::journal = "";

void counterspell(Spell *spell) {
//if-else ladder.
  
  if (Fireball *fb = dynamic_cast<Fireball*>(spell))
    {
        fb->revealFirepower();
    }
    else if (Frostbite *fb = dynamic_cast<Frostbite*>(spell))
    {
        fb->revealFrostpower();
    }
    else if (Thunderstorm *ts = dynamic_cast<Thunderstorm*>(spell))
    {
        ts->revealThunderpower();
    }
    else if (Waterbolt *wb = dynamic_cast<Waterbolt*>(spell))
    {
        wb->revealWaterpower();
    }
    else
    {
        std::string strA = spell->revealScrollName();
        std::string strB = SpellJournal::read();
   
    int m = strA.length();
    int n = strB.length();

    std::vector<std::vector<int>> vLCSMatrix(m + 1, std::vector<int>(n + 1));
//for loop and if-else ladder.
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (strA[i - 1] == strB[j - 1])
            {
                vLCSMatrix[i][j] = 1 + vLCSMatrix[i - 1][j - 1];
            }
            else
            {
                vLCSMatrix[i][j] = std::max(vLCSMatrix[i - 1][j], vLCSMatrix[i][j - 1]);
            }
        }
    }

     std::cout << vLCSMatrix[m][n] << std::endl;
    }

}
//If-else ladder.
class Wizard {
    public:
        Spell *cast() {
            Spell *spell;
            string s; cin >> s;
            int power; cin >> power;
            if(s == "fire") {
                spell = new Fireball(power);
            }
            else if(s == "frost") {
                spell = new Frostbite(power);
            }
            else if(s == "water") {
                spell = new Waterbolt(power);
            }
            else if(s == "thunder") {
                spell = new Thunderstorm(power);
            } 
            else {
                spell = new Spell(s);
                cin >> SpellJournal::journal;
            }
            return spell;
        }
};

int main() {
    int T;
    cin >> T;
    Wizard Arawn;
    while(T--) {
        Spell *spell = Arawn.cast();
        counterspell(spell);
    }
    return 0;
}
