#pragma once

#include <stdint.h>

#include "graphics.hpp"

void WriteAscii(PixelWriter& writer, int x, int y, char c,
                const PixelColor& color);