#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int calculateProbability(const string& name, const string& teamName) {
    int L = count(name.begin(), name.end(), 'L') + count(teamName.begin(), teamName.end(), 'L');
    int O = count(name.begin(), name.end(), 'O') + count(teamName.begin(), teamName.end(), 'O');
    int V = count(name.begin(), name.end(), 'V') + count(teamName.begin(), teamName.end(), 'V');
    int E = count(name.begin(), name.end(), 'E') + count(teamName.begin(), teamName.end(), 'E');
    
    return ((L + O) * (L + V) * (L + E) * (O + V) * (O + E) * (V + E)) % 100;
}

int main() {
    string yonduName;
    cin >> yonduName;

    int N;
    cin >> N;

    string bestTeamName;
    int bestProbability = -1;

    for (int i = 0; i < N; ++i) {
        string teamName;
        cin >> teamName;

        int probability = calculateProbability(yonduName, teamName);

        if (probability > bestProbability || (probability == bestProbability && teamName < bestTeamName)) {
            bestProbability = probability;
            bestTeamName = teamName;
        }
    }

    cout << bestTeamName << endl;

    return 0;
}
