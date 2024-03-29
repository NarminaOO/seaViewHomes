#include <iostream>
#include <vector>

std::vector<int>seaView(const std::vector<int>& Heights)
{
    std::vector<int> visibleHouse;

    int maxHeight = 0;

    for (int i = Heights.size() - 1; i >= 0; --i)
    {
        if (Heights[i] < 0) 
        {
            throw std::invalid_argument("Negative height");
        }
        if (Heights[i] > maxHeight) 
        {
              maxHeight = Heights[i];
              visibleHouse.push_back(i);
          
        }
    }

    std::reverse(visibleHouse.begin(), visibleHouse.end());
    return visibleHouse;
}

std::vector<int> seaView(const std::vector<std::string>& Heights) 
{
    throw std::invalid_argument("String height");
}

