/*
Chef zomo runs a zoo and every afternoon after lunch he comes and makes sure that none of the animals have escaped. He has a huge list of all the animals and checks each 
animal off as he sees it, but thinks this is really inefficient. He only cares about what animal they are, since all similar animals share a cage. So, if he has a Capuchin 
monkey and Squirrel monkey, Chef only wants to know that he has two monkeys. Given an integer n, and n lines describing animals, output in alphabetical order the animals 
Chef has in his zoo, followed by their count.

Input Format
The input will contain multiple test cases, up to Five. Each test case contains a line containing a single integer n (0≤n≤10^3), followed by n lines of animals with at least 
one word on every line. An animal name may consist of multiple lowercase or uppercase words, with the last one describing the kind of animal. Animal names may contain 
apostrophes, hyphens, and periods. The input is terminated when n is 0.

Output Format
For each test case, output the list number, followed by the animals Chef has in his zoo in lowercase and alphabetical order, with each animal followed by one space and the 
delimiter | and then another space and their count.

Sample Input 1 
6
African elephant
White tiger
Indian elephant
Siberian tiger
Tiger
Panda bear
1
Blue Russian Penguin
0

Sample Output 1 
List 1:
bear | 1
elephant | 2
tiger | 3
List 2:
penguin | 1

*/

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <set>

using namespace std;

string lastWord(string s) {
    int index = s.find_last_of(' ') + 1;

    string last = s.substr(index);

    for(auto &c : last) {
        c = tolower(c);
    }

    return last;
}

int main() {
    int n;
    int i = 1;
    while(cin >> n && n != 0) {
        multiset<string> animals;
        vector<string> names;

        cin.ignore();
        for(int i = 0; i < n; i++) {
            string name;
            getline(cin, name);       //input the strings
            name = lastWord(name);

            if(animals.count(name) == 0) {
                names.push_back(name);
            }
            animals.insert(name);
        }

        sort(names.begin(), names.end());

        cout << "List " << i << ":" << endl;      //printing the final output 
        for(auto name : names) {
            cout << name << " | " << animals.count(name) << endl;
        }

        i++;
    }
}
