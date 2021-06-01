#include <vector>
using namespace std;
vector<vector<int> > merge(vector<vector<int> >& intervals) {
    sort(intervals.begin(), intervals.end());
    vector<vector<int> > res;

    int j = 0;
    res.push_back(intervals[0]);
    for(int i = 1; i<intervals.size(); i++){
        if(res[j][1]>=intervals[i][0]){ //first array's second element is larger than first element of second array i.e. interval is feasible
            if(res[j][1] < intervals[i][1]){ //but the same is smaller than 2nd element of 2nd array, hence we replace 1st's 2nd with 2nd's 2nd i.e. expand the interval
				res[j][1] = intervals[i][1];
			} else {
                res.push_back(intervals[i]); //no overlap found, hence push an existing interval
                j++;
            }
        }
    }
    return res;
}