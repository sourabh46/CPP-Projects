#include <bits/stdc++.h>
using namespace std;

vector<int> findNonDuplicateNumberList(vector<int> inputNumberList)
{
    static const int outputNumberArray[] = { };
    vector<int> outputNumberList (outputNumberArray, outputNumberArray + sizeof(outputNumberArray) / sizeof(outputNumberArray[0]) );
    sort(inputNumberList.begin(), inputNumberList.end());
    for (std::vector<int>::iterator itInputNumberList = inputNumberList.begin(); itInputNumberList != inputNumberList.end(); ++itInputNumberList)
    {
        std::vector<int>::iterator itOutputNumberList = std::find(outputNumberList.begin(), outputNumberList.end(), *itInputNumberList);
        if (itOutputNumberList != outputNumberList.end())
        {
            outputNumberList.erase(itOutputNumberList);
        }
        else
        {
            outputNumberList.push_back(*itInputNumberList);
        }
    }
    return outputNumberList;
}

int main()
{
    static const int inputNumberArray[] = { 1, 1, 5, 2, 2, 3, 4, 4, 7, 7, 8, 6, 3, 9 };
    vector<int> inputNumberList (inputNumberArray, inputNumberArray + sizeof(inputNumberArray) / sizeof(inputNumberArray[0]) );
    std::vector<int> outputNumberList = findNonDuplicateNumberList(inputNumberList);

    for (std::vector<int>::iterator itOutputNumberList = outputNumberList.begin(); itOutputNumberList != outputNumberList.end(); ++itOutputNumberList)
    {
        cout << *itOutputNumberList << " ";
    }
    return 0;
}
