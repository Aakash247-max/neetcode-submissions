class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<double,double>> car;
        vector<double> time;
        int n = position.size();
        
        for(int i=0;i<n;i++){
            car.push_back({position[i],speed[i]});
        }
        sort(car.begin(),car.end(),[](pair<double,double>&a,pair<double,double>&b){
            return a.first>b.first;
        });
        for(int i=0;i<n;i++){
            time.push_back((target-car[i].first)/car[i].second);
        }
        stack<double>timing;
        timing.push(time[0]);
        int cnt = 1;
        for(int i=1;i<n;i++){
            if(timing.top()<time[i]){
                timing.push(time[i]);
                cnt++;
            }
        }
        return cnt;
    }
};
