class Solution {
public:
    string reorderSpaces(string text) {
        int n = text.size();

        if(n == 1) return text;
        stringstream ss(text);

        int space = 0;
        for(int i=0;i<n;i++) if(text[i] == ' ') space++;

        int count = 0;
        string word;
        while (ss >> word) count++;

        if(count == 1){
            for(int i=0;i<space;i++) word += " ";
            return word;
        }

        int per_word_space = space/(count-1);
        string output (n,' ');
        int index = 0;

        stringstream s(text);
        int w_count = 0;
        while (s >> word){
            w_count++;
            int i = 0;
            for(i;i<word.size();i++) output[index++] = word[i];
            index +=  per_word_space;
        }



        return output;
    }
};
