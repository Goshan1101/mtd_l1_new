#pragma once
#include "MObject.h"
#include "GArc.h"

class MOArc : public GArc, public MObject {
    std::string parent;

public:
    MOArc(float cx, float cy, float rad = 50,
        float start = 0, float end = 180,
        float r = 255, float g = 255, float b = 255,
        std::string where = "")
        : GArc(cx, cy, rad, start, end, r, g, b),
        MObject(where.empty() ? "I am arc" : "I am arc in " + where) {}
};