#pragma once
#include "MObject.h"
#include "MOArc.h"
#include "MOLine.h"
#include <cmath>

class MOSegment : public MObject, public MOArc, public MOLine {
public:
    MOSegment(float centerX = 0, float centerY = 0, float rad1 = 50,
        float start1 = 0, float end1 = 180,
        float r1 = 255, float g1 = 255, float b1 = 255)
        : MObject("I am segment. In me: line, arc."),
        MOArc(centerX, centerY, rad1, start1, end1, r1, g1, b1, "segment"),
        MOLine(centerX + rad1 * cos(start1 * 3.14159f / 180.0f),
            centerY + rad1 * sin(start1 * 3.14159f / 180.0f),
            centerX + rad1 * cos(end1 * 3.14159f / 180.0f),
            centerY + rad1 * sin(end1 * 3.14159f / 180.0f),
            r1, g1, b1, "segment")
    {}

    void draw() {
        MOArc::draw();
        MOLine::draw();
    }

    void erase() {
        MOLine::erase();
        MOArc::erase();
    }
};