# Orbitax Bangladesh Limited 

## Coding Round Questions
<details>
<summary>
You are given an HTML string. Your task is to determine the number of characters encompassed by each HTML tag in the string. For each tag, count the number of characters that are enclosed between the opening (<tag>) and closing (</tag>) tags.

A tag is composed of one or more lowercase English letters (a-z). For example: `<div> ... </div>`, `<span>..</span>`. It can be followed by digits (0-9) i.e `<h1>..</h1>`.

The content between the tags can consist of:
1. English characters (a-z, A-Z).
2. Digits (0-9).
3. Punctuation marks: period (.), comma (,), and spaces(' ').

Note:
When a character is encompassed by a same tag multiple times, count only once for that tag.
A tag can have 0 characters. In that case don't print that tag.
Spaces(' ') between the tags are not counted.

</summary>
<hr>

[**💻 Submit Code**](https://www.hackerrank.com/contests/orbitax-associate-software-engineer-recruitment-2024-phase-1/challenges/count-between-tags/problem)

```C++
string consume(string &s,int st){
    string tag;
    while(s[st]!='>') tag+=s[st++];
    return tag;
}

void solve(string s) {
    // the total character inside a tag
    map<string,int> totalCharCount;
    // to find the nesting level of a tag
    // eg. <p><p></p></p>, here p is nested two times
    map<string,int> nestedTagLevel;

    vector<string> tags;
    vector<int> charCount;

    // signifies root level tag
    // helps to simplify code logic
    tags.push_back("");
    charCount.push_back(0);

    for(int i=0;i<s.size();i++){
        if( s[i] == '<' and s[i+1]!='/'  ){
            // starting tag
            string tag = consume(s,i+1);
            // advance pointer by the consumer
            // character count
            i+=tag.size()+1;
            tags.push_back(tag);
            charCount.push_back(0);
            nestedTagLevel[tag]++;
        }else if( s[i] == '<' and s[i+1] == '/' ){
            // ending tag
            string tag = consume(s,i+2);
             // advance pointer by the consumer
            // character count
            i+=tag.size()+2;
            int cnt = charCount.back();
            nestedTagLevel[tag]--;

            // increment count only if it has no parent
            // tag of same type
            if( nestedTagLevel[tag] == 0 ){
                totalCharCount[tags.back()] += cnt;
            }
            charCount.pop_back();
            tags.pop_back();
            // propagate the character count to its
            // parents too
            charCount.back()+=cnt;

        }else{
            if(s[i] != ' ') charCount.back()++;
        }
    }

    for(auto [tag,cnt]:totalCharCount){
        if(cnt) {
            cout<<tag<<": "<<cnt<<endl;
        }
    }
}
```
</details>


<details>
<summary>
You are given a string S of length N and an integer K. Your task is to find the total number of subsequences in S that match the pattern P = "orbitaxian", where the difference in position between every consecutive character in the subsequence is no more than K.

More formally, let the subsequence of P be represented by an array pos, where (1 ≤ pos[i] ≤ N) and S[pos[i]] = P[i]. Then for each i > 1, the condition pos[i] − pos[i-1] ≤ K must hold.

The result should be returned modulo 10^9+7
</summary>
<hr>

```C++
#define M 1000000007
map<char,queue<pii> > pos;
map<char,int> cntStack;
int k;
void calc(char prev, char cur,int ind){
    while(pos[prev].size() and ind-pos[prev].front().first>k) {
        cntStack[prev]-=pos[prev].front().second;
        cntStack[prev] %= M;
        cntStack[prev] += M;
        cntStack[prev] %= M;

        pos[prev].pop();
    }
    if( pos[prev].size() ) {
        pos[cur].push({ind,cntStack[prev]});
        cntStack[cur]+=cntStack[prev];
        cntStack[cur] %= M;
    }
}

void solve() {
    string orbitax = "orbitaxIAn";
    pos.clear();
    cntStack.clear();
    int n;
    cin>>n>>k;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        char cur = s[i];
        char prev;
        if( s[i] == 'o' ){
            pos[cur].push({i,1});
            cntStack[cur]++;
        }else if( s[i] == 'r' ){
            calc('o','r',i);
        }else if( s[i] == 'b' ){
            calc('r','b',i);
        }else if( s[i] == 'i' ){
            calc('b','i',i);
            calc('x','I',i);
        }else if( s[i] == 't' ){
            calc('i','t',i);
        }else if( s[i] == 'a' ){
            calc('t','a',i);
            calc('I','A',i);
        }else if( s[i] == 'x' ){
            calc('a','x',i);
        }else if( s[i] == 'n' ){
            calc('A','n',i);
        }
    }
    cout<<cntStack['n']<<endl;
}

signed main() {
    FASTIO;
    int tc=1;
    cin>>tc;
    while(tc--) solve();
}
```
</details>