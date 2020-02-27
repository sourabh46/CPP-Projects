#include <bits/stdc++.h>
using namespace std;

/** \brief Function to find non-duplicate numbers in vector
 *
 * \param vector<int> inputVector - Vector of integer numbers
 * \return vector<int> outputVector - Vector of integer numbers
 *
 */
vector<int> findNonDuplicateNumbersInVector(vector<int> inputVector)
{
    static const int outputArray[] = { };

    /**< Prepare empty output vector */
    vector<int> outputVector (outputArray, outputArray + sizeof(outputArray) / sizeof(outputArray[0]) );

    /**< Sort input vector */
    sort(inputVector.begin(), inputVector.end());

    /**< Iterate through input vector */
    for (std::vector<int>::iterator itInputVector = inputVector.begin(); itInputVector != inputVector.end(); ++itInputVector)
    {
        /**< Find element inside output vector, if already existing */
        std::vector<int>::iterator itOutputVector = std::find(outputVector.begin(), outputVector.end(), *itInputVector);
        if (itOutputVector != outputVector.end())
        {
            /**< If already exists, it will be erased */
            outputVector.erase(itOutputVector);
        }
        else
        {
            /**< Otherwise it will be pushed back */
            outputVector.push_back(*itInputVector);
        }
    }
    return outputVector;
}

int main()
{
    static const int inputArray[] = { 1, 1, 5, 2, 2, 3, 4, 4, 7, 7, 8, 6, 3, 9 };

    /**< Insert array elements into input vector */
    vector<int> inputVector (inputArray, inputArray + sizeof(inputArray) / sizeof(inputArray[0]) );

    /**< Call function to find non-duplicate numbers of input vector */
    std::vector<int> outputVector = findNonDuplicateNumbersInVector(inputVector);

    for (std::vector<int>::iterator itOutputVector = outputVector.begin(); itOutputVector != outputVector.end(); ++itOutputVector)
    {
        /**< Print each element of output vector */
        cout << *itOutputVector << " ";
    }
    return 0;
}
