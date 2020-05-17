class Solution {
public:
    string arrangeWords(string text) {

        text[0] = tolower(text[0]);
        stringstream ss(text);
        string word;
        vector<vector<int>> track;
        vector<string> input;
        int index = 0;
        string output;
        while(ss >> word){
            int k = word.size();
            track.push_back({k, index});
            index++;
            input.push_back(word);
        }

        sort(track.begin(), track.end());
        for(int i=0; i<input.size(); i++) output += input[track[i][1]] + " ";

        output.pop_back();
        output[0] = toupper(output[0]);

        return output;
    }
};
