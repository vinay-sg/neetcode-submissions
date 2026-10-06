class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> temp;
        for(auto &c: operations){
            if(c=="+"){
                temp.push_back((temp[temp.size()-1])+(temp[temp.size()-2]));
            }else if(c=="D"){
                temp.push_back((temp[temp.size()-1])*2);
            }else if(c=="C"){
                temp.pop_back();
            }else{
                temp.push_back(stoi(c));
            }
        }
        int sum = 0;
        for(auto &i: temp)sum+=i;
        return sum;
    }
};