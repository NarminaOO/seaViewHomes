## Sea View Houses
This project contains a C++ function named **seaView** designed to find the houses with a sea view based on their heights. 
The function accepts a vector of integers representing the heights of houses and returns a vector containing the indices of the houses with a sea view.

### seaView function
The **seaView** function has two overloads:

```std::vector<int> seaView(const std::vector<int>& Heights)```: Accepts a vector of integers representing the heights of houses.

`std::vector<int> seaView(const std::vector<std::string>& Heights)`: Accepts a vector of strings. 
This overload throws an exception with the message "String height" as it's not intended to work with strings.

### Error Handling
The function performs error handling to check for negative heights. If it encounters a negative height, it throws an `std::invalid_argument` exception with the message "Negative height".


