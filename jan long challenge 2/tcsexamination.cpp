#include <iostream>
using namespace std;


// If the total scoreand the DSA score are tied, the person who scored higher in TOC gets a better rank
// If everything is tied, they get the same rank.

int main() {
    int T;
    cin >> T;
    for (T;T > 0;T--) {
        int D_DSA, D_TOC, D_DM;
        int S_DSA, S_TOC, S_DM;
        string winner;

        cin >> D_DSA >> D_TOC >> D_DM;
        cin >> S_DSA >> S_TOC >> S_DM;

        int D_total = D_DSA + D_TOC + D_DM;
        int S_total = S_DSA + S_TOC + S_DM;

        if (D_total > S_total) {
            winner = "DRAGON";
        }
        else if (D_total < S_total) {
            winner = "SLOTH";
        }
        else if (D_total == S_total) {
            if (D_DSA > S_DSA) {
                winner = "DRAGON";
            }
            else if (D_DSA < S_DSA) {
                winner = "SLOTH";
            }
            else if (D_DSA == S_DSA) {
                if (D_TOC > S_TOC) {
                    winner = "DRAGON";
                }
                else if (D_TOC < S_TOC) {
                    winner = "SLOTH";
                }
                else if (D_TOC == S_TOC) {
                    winner = "TIE";
                }
            }
        }
        cout << winner << endl;
    }
}