#pragma once

#include "Gate.hpp"

#include "AND.hpp"
#include "OR.hpp"
#include "NOT.hpp"
#include "Buffer.hpp"
#include "NAND.hpp"
#include "NOR.hpp"
#include "XOR.hpp"
#include "XNOR.hpp"

namespace Billyprints {
    extern std::vector<Gate* (*)()> availableGates;
}