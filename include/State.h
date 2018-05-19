/**
 * \class State
 */

#include <vector.h>

#include "Label.h"
#include "Transition.h"

class State
{

public:
    State();

private:
    Label label;
    vector<Transition> transitions;
    bool final;
};
