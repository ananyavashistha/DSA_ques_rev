// https://www.interviewbit.com/problems/hotel-bookings-possible/

bool Solution::hotel(vector<int> &a, vector<int> &d, int K) {
    int i=0,j=0,count=0;
    sort(a.begin(),a.end());
     sort(d.begin(),d.end());
    while(i<a.size() && j<d.size()){
        if(a[i]<=d[j]){
            count++;
            if(count>K) return false;
            i++;
        }else{
            j++;
            count--;
        }
    }
    return true;
}
