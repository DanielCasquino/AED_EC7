#include <vector>
#include <queue>
#include <algorithm>
using namespace std;


struct Krow{ int start, end, value;};
class Solution
{
public:
    int maxTwoEvents(vector<vector<int>> &events){
        auto comp = [](Krow a, Krow b){ return a.start > b.end; };
        priority_queue<Krow, vector<Krow>, decltype(comp)> pq(comp);

        Krow aux;

        int index = 1;
        for (auto outer = events.begin(); outer != events.end(); ++outer){
            for (auto inner = outer->begin(); inner != outer->end(); ++inner){
                if(index == 1){
                    aux.value = 2;
                }
                
                if(*inner == 1){
                    aux.start = index;
                }
            }
            index++;
            pq.push(aux);
        }
    }
};

int main()
{
    vector<vector<int>> mat = {
        {1, 1, 1, 0, 0},
        {0, 0, 0, 1, 1},
        {0, 1, 1, 1, 0}};

    return 0;
}
