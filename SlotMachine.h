#ifndef SLOT_MACHINE_H
#define SLOT_MACHINE_H
#include "Player.h"
#include "Reel.h"
#include "Field.h"
#include "Symbol.h"
#include "PayLine.h"
#include "Evaluator.h"
#include "Overdrive.h"
#include <vector>
#include <cstddef>

class SlotMachine{
private:
    int spin_count = 0;
    Player player;
    Field field;
    std::vector<PayLine> payl;
    E evaluator;
    od overdrive;
    std::vector<Reel> reels;
public:
    SlotMachine() = default;
    void spin();
};

#endif