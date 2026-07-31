class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;i++){
            unordered_set<char>st;
            for(int j=0;j<9;j++){
                if(board[i][j]=='.')
                continue;

                if(st.count(board[i][j]))
                return false;

                st.insert(board[i][j]);
            }
        }
        for(int i=0;i<9;i++){
            unordered_set<char>st;
            for(int j=0;j<9;j++){
                if(board[j][i]=='.')
                continue;

                if(st.count(board[j][i]))
                return false;

                st.insert(board[j][i]);
            }
        }
        for(int rowbox=0;rowbox<9;rowbox+=3){
            for(int colbox=0;colbox<9;colbox+=3){
               unordered_set<char>st;
               for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    char ch=board[rowbox+i][colbox+j];
                    if(ch=='.')
                    continue;

                    if(st.count(ch))
                    return false;

                    st.insert(ch);
                }
               }
            }
        }
        return true;
    }
};
