class Solution {
public:
    int repeatedStringMatch(string A,string B){
//         if (s2.find(s1) != string::npos)
//         return 1;
//     return -1;
//     }
//     int repeatedStringMatch(string a, string b) {
//         string temp=a;
//         unordered_map<char,int>mp;
//         for(int i=0;i<b.size();i++){
//             mp[b[i]]++;
//         }
//         for(int i=0;i<a.size();i++){
//             if(mp[a[i]]){
//                 mp[a[i]]--;
//             }
//         }
//         int count=0;
//         for(auto i:mp){
//             cout<<"map "<<i.first<<" "<<i.second<<endl;
//             count=max(count,i.second);
//         }
        
//         string three="";
//         for(int i=0;i<count;i++){
//             cout<<"I"<<i<<endl;
            
//             a=a+temp;
//             // if(i==count-1){
//             //     three=three+a;
//             //     three=three+temp;
//             // }
//         }
//         three=three+a+temp;
//         // string three=a+a;
//         cout<<a<<endl;
//         cout<<three;
//         int c1=-1;
//         int c2=-1;
//         c1=check(a,b);
//         c2=check(three,b);
        
       
//         if(c1==1){
//             cout<<"inside c1"<<a.size()/temp.size()<<endl;
//             return a.size()/temp.size();
//         }
//         if(c2==1){
//             cout<<"inside c1"<<a.size()/temp.size()<<endl;
//             return a.size()/temp.size() + 1;
//         }
//         return -1;
        string s="";
        int count = 0;
        while(s.size()<B.size())
        {
            s+=A;
            count++;
        }
        if(s.find(B)!=string::npos){
            return count;
        }
            // return count;
        s+=A;
        count++;
        if(s.find(B)!=string::npos)
        {return count;}
        
        return -1;
    }
};