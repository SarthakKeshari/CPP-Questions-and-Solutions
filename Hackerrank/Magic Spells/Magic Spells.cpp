//While playing a video game, you are battling a powerful dark wizard. He casts his spells from a distance, giving you only a few seconds to react and conjure your counterspells. For a counterspell to be effective, you must first identify what kind of spell you are dealing with.

//The wizard uses scrolls to conjure his spells, and sometimes he uses some of his generic spells that restore his stamina. In that case, you will be able to extract the name of the scroll from the spell. Then you need to find out how similar this new spell is to the spell formulas written in your spell journal.

//Spend some time reviewing the locked code in your editor, and complete the body of the counterspell function.

//Check Dynamic cast to get an idea of how to solve this challenge.

//Full Application Based Question.

//Logic:- 

//The wizard will read t scrolls, which are hidden from you.
//Every time he casts a spell, it's passed as an argument to your counterspell function.
//Constraints

  //1 <=  t  <=  100
  //1 <=  | s | <= 1000 , where s is a scroll name.

//Each scroll name,  s , consists of uppercase and lowercase letters.

//After identifying the given spell, print its name and power.
//If it is a generic spell, find a subsequence of letters that are contained in both the spell name and your spell journal. Among all such subsequences, find and print the length of the longest one on a new line.







//these are different types of library required for this program.
#include <iostream>
#include <vector>
#include <string>
using namespace std;
// ThIS is the Spells code.
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
//This is the Fireball Code.
class Fireball : public Spell { 
    private: int power;
    public:
        Fireball(int power): power(power) { }
        void revealFirepower(){
            cout << "Fireball: " << power << endl;
        }
};
//This is the Frostbite Code.
class Frostbite : public Spell {
    private: int power;
    public:
        Frostbite(int power): power(power) { }
        void revealFrostpower(){
            cout << "Frostbite: " << power << endl;
        }
};
//This is the Thunderstorm Code.
class Thunderstorm : public Spell { 
    private: int power;
    public:
        Thunderstorm(int power): power(power) { }
        void revealThunderpower(){
            cout << "Thunderstorm: " << power << endl;
        }
};
//This is the Waterbolt Code.
class Waterbolt : public Spell { 
    private: int power;
    public:
        Waterbolt(int power): power(power) { }
        void revealWaterpower(){
            cout << "Waterbolt: " << power << endl;
        }
};
//This is the SpellJournal Code.
class SpellJournal {
    public:
        static string journal;
        static string read() {
            return journal;
        }
}; 
string SpellJournal::journal = "";

void counterspell(Spell *spell) {
//This is the if-else ladder.
  
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
//This is the for loop and if-else ladder.
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
//This is the If-else ladder.
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
