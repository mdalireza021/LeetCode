class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
       
        int count=9;
        vector<set<char>> row(9);
        vector<set<char>> col(9);
        vector<set<char>> box(9);
        
        
        for(int r=0;r<count;r++)
        {
            for(int c=0;c<count;c++)
            {
                
                if(board[r][c]=='.')
                    continue;
                char ch=board[r][c];
                int box_index=(r/3)*3+(c/3);
                if(row[r].count(ch) || col[c].count(ch) || box[box_index].count(ch) )
                {
                    return false;
                }
                
                row[r].insert(ch);
                col[c].insert(ch);
                box[box_index].insert(ch);
            }
        }
      return true;
 
    }
};