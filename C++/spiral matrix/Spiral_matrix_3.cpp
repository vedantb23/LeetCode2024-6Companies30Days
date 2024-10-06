class Solution {
public:
    vector<vector<int>> spiralMatrixIII(int rows, int cols, int rStart, int cStart) {
         vector<vector<int>> directions={
            {0,1}, // E
            {1,0}, // S
            {0,-1}, // W
            {-1,0}} ; // N
        int step=0;int dir=0;int k=0;
         vector<vector<int>> result;
         result.push_back({rStart, cStart}) ;
         while(result.size()< rows*cols){
            if(dir==0 || dir==2){// dir E or w
                step++;}
            for(int count=0;count<step;count++){
                rStart+=directions[dir][0]; // row
                cStart+=directions[dir][1];
                if(rStart<rows && cStart<cols &&rStart>=0 && cStart>=0){result.push_back({rStart, cStart});}
            }
            //  change direction
            // o123 0123 0123........
            dir=(dir+1)%4;
         }
         return result;
    }
};
