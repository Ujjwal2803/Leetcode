class MedianFinder {
public:

    priority_queue<int>p1;//max heap 
    priority_queue<int,vector<int>,greater<int>>p2;// min heap
    // MedianFinder() {
        
    // }
    
    void addNum(int num) {
        p2.push(num);//p2 mean heap p1 max heap
        p1.push(p2.top());
        p2.pop();
        if(p2.size()<p1.size()){
            p2.push(p1.top());
            p1.pop();
        }
    }
    
    double findMedian() {
        if(p1.size()==p2.size()){
            double x=p1.top();
            double y=p2.top();
            return (x+y)/2.0;
        }
        return p2.top();
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */