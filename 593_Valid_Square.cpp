class Solution {
public:
    double getDist(vector<int> p1, vector<int> p2) {
        return sqrt(pow((p2[0] - p1[0]), 2) + (pow((p2[1] - p1[1]), 2)));
    }
    
    bool validSquare(vector<int>& a, vector<int>& b, vector<int>& c, vector<int>& d) {
        float ad = getDist(a,d);
        float bc = getDist(b,c);
        float ab = getDist(a,b);
        float cd = getDist(c,d);
        float ac = getDist(a,c);
        float bd = getDist(b,d);
        
        if(ad==bc && ab==cd && ac==bd && (ad==ab || ab==ac || ac==ad ) 
            && ab!=0 && ad!=0 && bd!=0)
            return true;
        return false;
        
       
    }
};
