class Solution {
public:

    static bool comparator(pair<int,char> a,
                           pair<int,char> b) {

        // Same frequency -> lexicographical order
        if(a.first == b.first)
            return a.second < b.second;

        // Higher frequency first
        return a.first > b.first;
    }

    string frequencySort(string s) {

        // ASCII characters
        pair<int,char> freq[256];

        // Initialize
        for(int i = 0; i < 256; i++) {
            freq[i] = {0, char(i)};
        }

        // Count frequency
        for(char ch : s) {
            freq[(unsigned char)ch].first++;
        }

        // Sort
        sort(freq, freq + 256, comparator);

        // Build answer
        string ans = "";

        for(int i = 0; i < 256; i++) {

            if(freq[i].first > 0) {

                ans += string(freq[i].first,freq[i].second);
            }
        }

        return ans;
    }
};