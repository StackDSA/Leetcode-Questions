class MyCalendar {
    vector<pair<int,int>>cal;
public:
    
    MyCalendar() {
        //nothing to do bcz we have created calendar array globally
    }
    bool checkForCommonInterval(pair<int,int>&cal,pair<int,int>event){
        int start=event.first;
        int end=event.second;
        
        if(start>=cal.first && start<=cal.second)return true;
        if(end>=cal.first && end<=cal.second)return true;
        if(cal.first>=start && cal.first<=end)return true;
        if(cal.second>=start && cal.second<=end)return true;
        return false;
    }
    bool book(int start, int end) {
        end--;
        for(int i=0;i<cal.size();i++){
            if(checkForCommonInterval(cal[i],{start,end}))
                return false;
        }
        
        //I can book so, add the event in calendar
        cal.push_back({start,end});
        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */