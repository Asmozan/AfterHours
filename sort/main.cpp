#include <iostream>
#include <vector>
#include <algorithm>

template<typename T>
void print(const T& toPrint)
{
    for(const auto& i : toPrint)
        std::cout << i << " ";
    std::cout << std::endl;
}

template<typename T>
void swap(T& first, T& second)
{
    T temp{0};
    temp = first;
    first = second;
    second = temp;
}


template<typename T>
std::vector<T> sort(std::vector<T>& vectorToSort)
{
    std::vector<T>& sortedVector (vectorToSort);
    for (unsigned int i = 0; i < vectorToSort.size() - 1; i++)
    {
        if(vectorToSort[i] > vectorToSort[i+1])
        {
            swap(vectorToSort[i], vectorToSort[i+1]);
            sort(vectorToSort);
        }
    }

    return sortedVector;
}

int main()
{
    std::vector<int> noSortedVector { 5, 3 , 4 , 1 , 2 };
    print(noSortedVector);

    std::vector<int> sortedVector = sort(noSortedVector);
    print(sortedVector);
    return 0;
}
