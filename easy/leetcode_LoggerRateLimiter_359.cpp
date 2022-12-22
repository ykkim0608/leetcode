#include <iostream>
#include <map>
#include <string>
#include <unordered_map>


using namespace std;

class Logger {
public:
    map<string, int> myMap;
    Logger() {

       std::cout << "null"<<" ";

    }

    bool shouldPrintMessage(int timestamp, string message) {

        if (myMap.find(message) != myMap.end())
        {
            if (abs(myMap[message] - timestamp) >= 10)
            {
                myMap[message] = timestamp;
                return true;
            }
            else
                return false;
        }
        else
        {
            myMap[message] = timestamp;
            return true;
        }
    
         

    }

 

};

/**
 * Your Logger object will be instantiated and called as such:
 * Logger* obj = new Logger();
 * bool param_1 = obj->shouldPrintMessage(timestamp,message);
 */

int main()
{
    bool outout;
    Logger *logger = new Logger();
   
   
    outout = logger->shouldPrintMessage(1, "foo");  // return true, next allowed timestamp for "foo" is 1 + 10 = 11
    std::cout << boolalpha << outout <<" ";
    outout = logger->shouldPrintMessage(2, "bar");  // return true, next allowed timestamp for "bar" is 2 + 10 = 12
    std::cout << boolalpha << outout << " ";
    outout = logger->shouldPrintMessage(3, "foo");  // 3 < 11, return false
    std::cout << boolalpha << outout << " ";
    outout = logger->shouldPrintMessage(8, "bar");  // 8 < 12, return false
    std::cout << boolalpha << outout << " ";
    outout =  logger->shouldPrintMessage(10, "foo"); // 10 < 11, return false
    std::cout << boolalpha << outout << " ";
    outout =  logger->shouldPrintMessage(11, "foo"); // 11 >= 11, return true, next allowed timestamp for "foo" is 11 + 10 = 21
    std::cout << boolalpha << outout << " ";



}