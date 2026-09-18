#pragma once
#include "Figure.h"
#include "GArc.h"
#include "GLine.h"
#include "GLine2.h"
#include <cmath>

class MSector : public Figure, public GArc, public GLine, public GLine2 {
public:
    MSector(float centerX = 0, float centerY = 0, float rad1 = 50,
        float start1 = 0, float end1 = 180,
        float r1 = 255, float g1 = 255, float b1 = 255)
        : Figure(),
        GArc(centerX, centerY, rad1, start1, end1, r1, g1, b1),
        GLine(centerX, centerY,
            centerX + rad1 * cos(start1 * 3.14159f / 180.0f),
            centerY + rad1 * sin(start1 * 3.14159f / 180.0f),
            r1, g1, b1),
        GLine2(centerX, centerY,
            centerX + rad1 * cos(end1 * 3.14159f / 180.0f),
            centerY + rad1 * sin(end1 * 3.14159f / 180.0f),
            r1, g1, b1)
    {
        Figure::r = r1; Figure::g = g1; Figure::b = b1;

        float startRad = start1 * 3.14159f / 180.0f;
        float endRad = end1 * 3.14159f / 180.0f;
        float xs = centerX + rad1 * cos(startRad);
        float ys = centerY + rad1 * sin(startRad);
        float xe = centerX + rad1 * cos(endRad);
        float ye = centerY + rad1 * sin(endRad);

        Figure::x = (centerX + xs + xe) / 3.0f;
        Figure::y = (centerY + ys + ye) / 3.0f;

        draw();
    }

    void draw() {
        GArc::draw();
        GLine::draw();
        GLine2::draw();
    }

    void erase() {
        GLine2::erase();
        GLine::erase();
        GArc::erase();
    }
};