#include <queue>
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

class MedianFinder
{
    priority_queue<int, vector<int>> maxHeap;
    priority_queue<int, vector<int>, std::greater<>> minHeap;

public:
    MedianFinder()
    {
    }

    void addNum(int num)
    {
        if (maxHeap.empty() || maxHeap.size() < minHeap.size())
        {
            maxHeap.push(num);
        }
        else
        {
            minHeap.push(num);
        }
    }

    double findMedian()
    {
        if ((maxHeap.size() + minHeap.size()) % 2 == 0)
        {
            return (maxHeap.top() + minHeap.top()) / 2.0;
        }
        return maxHeap.top();
    }
};

int main()
{
    MedianFinder *obj = new MedianFinder();
    obj->addNum(2);
    obj->addNum(3);
    obj->addNum(5);
    obj->addNum(6);
    double param_2 = obj->findMedian();
    cout << param_2;
    return 0;
}

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */
