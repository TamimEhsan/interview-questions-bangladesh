#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define MOD 1000000007
#define MAX 200005

typedef long long ll;
typedef vector<string> Grid; 

string grid[55];
map<Grid, int> farmerMap;
int numRows, numCols, farmerCount, visited[55][55];

int rowOffsets[] = {+1, -1, +0, +0};
int colOffsets[] = {+0, +0, +1, -1};

#define isValid(nx, ny) (nx >= 0 && nx < numRows && ny >= 0 && ny < numCols)

struct Region {
    int xMin, xMax, yMin, yMax;
    Region() {
        xMin = 100;
        xMax = -100;
        yMin = 100;
        yMax = -100;
    }
    Region(int a, int b, int c, int d) {
        xMin = a;
        xMax = b;
        yMin = c;
        yMax = d;
    }
};

Region mergeRegions(Region a, Region b) {
    Region result;
    result.xMin = min(a.xMin, b.xMin);
    result.xMax = max(a.xMax, b.xMax);
    result.yMin = min(a.yMin, b.yMin);
    result.yMax = max(a.yMax, b.yMax);
    return result;
}

Region exploreRegion(int x, int y) {
    visited[x][y] = 1;
    Region result(x, x, y, y);
    for (int i = 0; i < 4; i++) {
        int newX = x + rowOffsets[i];
        int newY = y + colOffsets[i];
        if (isValid(newX, newY) && !visited[newX][newY] && grid[newX][newY] == 'X') {
            result = mergeRegions(result, exploreRegion(newX, newY));
        }
    }
    return result;
}

Grid rotateGrid(Grid v) {
    int curRows = v.size(), curCols = v[0].size();
    Grid rotated;
    for (int j = 0; j < curCols; j++) {
        string row(curRows, '?');
        rotated.push_back(row);
    }

    for (int i = 0; i < curRows; i++) {
        for (int j = 0; j < curCols; j++) {
            rotated[j][curRows - i - 1] = v[i][j];
        }
    }

    return rotated;
}

int checkRegion(Region region) {
    Grid subgrid;
    for (int i = region.xMin; i <= region.xMax; i++) {
        string row = "";
        for (int j = region.yMin; j <= region.yMax; j++) {
            row += grid[i][j];
        }
        subgrid.push_back(row);
    }
    
    if (farmerMap[subgrid]) return 0;
    
    Grid rotated = rotateGrid(subgrid);
    if (farmerMap[rotated]) return 0;
    
    rotated = rotateGrid(rotated);
    if (farmerMap[rotated]) return 0;
    
    rotated = rotateGrid(rotated);
    if (farmerMap[rotated]) return 0;
    
    farmerMap[subgrid] = 1;
    return 1;
}

void solve() {
    string line;
    while (getline(cin, line)) {
        grid[numRows++] = line;
    }
    numCols = grid[0].size();

    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < numCols; j++) {
            if (grid[i][j] == 'X' && !visited[i][j]) {
                Region region = exploreRegion(i, j);
                farmerCount += checkRegion(region);
            }
        }
    }

    cout << farmerCount << "\n";
}

int32_t main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int testCases = 1;
    cin >> testCases;
    cin.ignore(); // Ignore the newline after the number of test cases

    for (int caseNum = 1; caseNum <= testCases; caseNum++) {
        cout << "Case #" << caseNum << ": ";
        solve();
    }

    return 0;
}