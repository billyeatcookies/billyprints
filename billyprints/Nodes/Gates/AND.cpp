#include "AND.hpp"
#include <iostream>

namespace Billyprints {
	AND::AND() : Gate("AND", { {"a"}, {"b"} }, { {"out"} }) { }

	bool AND::AND_F(const std::vector<bool>& input, const int& pinCount) {
		if (input.size() < pinCount) return false;

		bool current = input[0];
		for (const bool& pin : input)
			current &= pin;

		return current;
	} 

	bool AND::Evaluate() {
		std::vector<bool> input;
		for (const auto& cn : connections)
			if (cn.inputNode == this)
				input.push_back(((Node*)cn.outputNode)->value);
		
		value = AND_F(input, inputSlotCount);
		return value;
	}
}
