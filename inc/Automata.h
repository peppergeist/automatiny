/**
 * \class Automata
 */

#include <vector.h>

#include "Label.h"

class Automata
{
public:
    Automata();

private:
    vector<State> states;
    Label initial;

};
