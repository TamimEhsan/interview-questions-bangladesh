#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define MOD 1000000007
#define MAX 1003

typedef long long ll;

#define bitToggle(n, i) ((1LL << i) ^ n)

int deliciousness[MAX], nutrientMask[MAX], numItems, numNutrients;
ll dp[MAX][1035];

ll maximizeDeliciousness(int itemIndex, int nutrientState) {
    if (itemIndex == numItems) {
        if (nutrientState == ((1 << numNutrients) - 1)) return 0LL;
        return -1e15;
    }
    if (~dp[itemIndex][nutrientState]) return dp[itemIndex][nutrientState];
    return dp[itemIndex][nutrientState] = max(
        maximizeDeliciousness(itemIndex + 1, nutrientState),
        deliciousness[itemIndex] + maximizeDeliciousness(itemIndex + 1, nutrientState ^ nutrientMask[itemIndex])
    );
}

void solve() {
    cin >> numItems >> numNutrients;
    for (int i = 0; i < numItems; i++) {
        int numNutrientsInItem; cin >> deliciousness[i] >> numNutrientsInItem;
        nutrientMask[i] = 0;
        for (int j = 0; j < numNutrientsInItem; j++) {
            int nutrient; cin >> nutrient;
            nutrientMask[i] = bitToggle(nutrientMask[i], nutrient - 1);
        }
    }
    memset(dp, -1, sizeof dp);
    cout << max(0LL, maximizeDeliciousness(0, 0)) << "\n";
}

int32_t main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int testCases = 1;
    cin >> testCases;

    for (int caseNum = 1; caseNum <= testCases; caseNum++) {
        cout << "Case #" << caseNum << ": ";
        solve();
    }

    return 0;
}