#include <iostream>
#include <map>
using namespace std;
int main()
{
    // Create a map of strings to integers
    map<string, int> m;
    // Insert some values into the map
    m["one"] = 1;
    m["two"] = 2;
    m["three"] = 3;
    // Get an iterator pointing to the first element in the map
    map<string, int>::iterator it = m.begin();
    // Iterate through the map and print the elements
    while (it != m.end())
    {
        cout << "Key: " << it->first << ", Value: " << it->second
             << endl;
        ++it;
    }
    return 0;
}
