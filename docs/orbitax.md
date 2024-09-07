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