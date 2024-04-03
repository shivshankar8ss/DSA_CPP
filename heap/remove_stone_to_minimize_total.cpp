// problem no: 1962

// class Solution
// {
// public:
//     int minStoneSum(vector<int> &piles, int k)
//     {
//         priority_queue<int> maxHeap;
//         for (int i = 0; i < piles.size(); i++)
//         {
//             maxHeap.push(piles[i]);
//         }

//         while (k--)
//         {
//             int tp_ele = maxHeap.top();
//             maxHeap.pop();
//             tp_ele = tp_ele - floor(tp_ele / 2);
//             maxHeap.push(tp_ele);
//         }
//         int sum = 0;
//         while (!maxHeap.empty())
//         {
//             sum += maxHeap.top();
//             maxHeap.pop();
//         }
//         return sum;
//     }
// };