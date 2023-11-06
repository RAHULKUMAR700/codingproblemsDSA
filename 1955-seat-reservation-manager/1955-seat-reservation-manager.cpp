class SeatManager {
    set<int> st;
    int k;
public:

    SeatManager(int n) {
        k=n;
        for(int i=1;i<=n;i++){
                st.insert(i);
        }
    }
    
    int reserve() {
        int val= *st.begin();
        st.erase(val);
        return val;
    }
    
    void unreserve(int seatNumber) {
        st.insert(seatNumber);
    }
};

/**
 * Your SeatManager object will be instantiated and called as such:
 * SeatManager* obj = new SeatManager(n);
 * int param_1 = obj->reserve();
 * obj->unreserve(seatNumber);
 */