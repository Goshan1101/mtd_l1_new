#pragma once
#pragma once
#include "MObject.h"
#include "GLine2.h"

class MOLine2 : public GLine2, public MObject {
    std::string parent;  // "секторе", "сегменте" или ""

public:
    MOLine2(float x0, float y0, float x1, float y1,
        float r = 255, float g = 255, float b = 255,
        std::string where = "")
        : GLine2(x0, y0, x1, y1, r, g, b),
        MObject(where.empty() ? "I am line" : "I am line in" + where)
    {}
};