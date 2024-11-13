class Solution {
public:  // 9 3 2 10
    
   
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>pq;
        
        if(stones.size()==2){
            return abs(stones[0]-stones[1]);
        }
        if(stones.size()==1){
            return stones[0];
        }
        for(int i=0;i<stones.size();i++){
            pq.push(stones[i]);
        }
        while(pq.size()!=1){
            int f = pq.top();
            pq.pop();
            int s = pq.top();
            pq.pop();
            if(pq.size()==0){
                return abs(s-f);
            }
            if(f==s){
                continue;
            }
            pq.push(abs(s-f));
        }
        return pq.top();
    }
};