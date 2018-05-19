#include "Label.h"

Label::Label()
{

}

bool Label::operator==(const std::string& other)
{
    for (int i = 0; i < ids.size(); ++i)
    {
        if (ids[i] == other)
        {
            return true;
        }
    }

    return false;
}
