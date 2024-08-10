#include <iostream>
#include <string>
#include <vector>

int finalValueAfterOperations(std::vector<std::string> &operations)
{
    int x = 0;
    for (int i = 0; i < operations.size(); i++)
    {
        if (operations[i] == "X++" || operations[i] == "++X")
            x++;
        else
            x--;
    }

    return x;
}

int main()
{
    std::vector<std::string> v1 = {"--X", "X++", "X++"};
    std::cout << finalValueAfterOperations(v1) << std::endl;
    return 0;
}