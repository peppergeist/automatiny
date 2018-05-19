/**
 * \class Label
 */

#include <string>
#include <vector>

class Label
{
public:
    Label();

    bool operator==(const std::string& other);

private:
    std::vector<std::string> ids;

};
