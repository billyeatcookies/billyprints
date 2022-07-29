#include "XNOR.hpp"

namespace Billyprints {
	XNOR::XNOR() : Gate("XNOR", { {"a"}, {"b"} }, { {"out"} }) { }

	bool XNOR::XNOR_F(const std::vector<bool>& input, const int& pinCount) {
		return !XOR::XOR_F(input, pinCount);
	}

	bool XNOR::Evaluate() {
		std::vector<bool> input;
		for (const auto& cn : connections)
			if (cn.inputNode == this)
				input.push_back(((Node*)cn.outputNode)->value);

		value = XNOR_F(input, inputSlotCount);
		return value;
	}
}