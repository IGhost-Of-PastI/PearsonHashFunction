#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

vector<uint8_t> T(256);

size_t pearsonHash(const std::string& str) {
    uint8_t hash = 0;
    for (char c : str) {
        hash = T[hash ^ static_cast<uint8_t>(c)];
    }
    return hash % 100; 
}

int main()
{
    iota(T.begin(), T.end(), 0); 
    random_shuffle(T.begin(), T.end());

    string temp ="asdasd";
    string temp2 = "asdads";
    cout << pearsonHash(temp) <<endl;
    cout << pearsonHash(temp2) << endl;
}


