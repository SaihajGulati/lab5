#include <iostream>
#include <set>
#include <map>
#include <string>

template <typename Key, typename Value>
void print_map(const std::map<Key, Value> map)
{
    /* todo
        std::cout << "=================\n";

        for (std::map<std::string, std::string>::const_iterator it = map.begin(); it != map.end(); ++it)
        {
            std::cout << "('" << it->first << "', '" << it->second << "')\n";
        }

        std::cout << "=================\n";
    */
}

int main()
{
    // 0. Declare map of key type = std::string and value type = std::string
    std::map<std::string, std::string> myMap;

    /*
        // 1. Insert ("Key", "Value")
        myMap.insert(std::make_pair("Key", "Value"));

        // 2. print map
        print_map(myMap);
    */

    /*
        // 3. Insert at original position and inspect the returned pair
        //   a. ret->second is true only if a new element is inserted
        //   b. ret->first points to the element inserted if the bool is true;
        //      points to the element preventinginsertion otherwise.

        std::pair<std::map<std::string, std::string>::iterator, bool>
            result1 = myMap.insert(std::make_pair("Key", "New Value"));

        std::cout << "Is insertion successful? " <<  std::boolalpha << result1.second << "\n";

        print_map(myMap);

    */

    /*
        auto result2 = myMap.insert(std::make_pair("Key2", "New Value"));

        std::cout << "Is insertion successful? " << std::boolalpha << result2.second << "\n";

        // 4. print map
        print_map(myMap);
    */

    /*
        // 5. Find key using map.find()
        auto it = myMap.find("Key");
        if (it != myMap.end())
        {
            std::cout << "Value is found using find(): '" << it->second << "'\n";
        }
    */

    /*
        // 6. Find key using operator[]
        std::cout << "Value is found using operator[]: '" << myMap["Key"] << "'\n";
    */

    /*
        // 7. Find none-existant key using operator[] will create an new entry
        //    with default value.
        std::cout << "Value is created using operator[]: '" << myMap["Key3"] << "'\n";
        print_map(myMap);
    */

    /*
        // 8. Erase using an iterator / erasing using the key
        myMap.erase(it);
        // myMap.erase(key);

        print_map(myMap);
    */

    return 0;
}