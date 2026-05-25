class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int, int> > cars;
        int n= position.size();
        for(int i=0;i<n;i++){
            cars.push_back({position[i], speed[i]});
        }
        sort(cars.rbegin(), cars.rend());
       
        stack<double>st;
        int fleet=0;
        double maxtime=0;
        for(int i=0; i<n;i++){
            double time= (double) (target-cars[i].first)/cars[i].second;
            // st.push(time);
            if(st.empty()){
                st.push(time);
            }
            else {
                if(time>st.top()){
                    st.push(time);
                }
            }
            // if(time>maxtime){
            //     fleet++;
            //     maxtime=time;
            // }
        }
        return st.size();
    }
};
