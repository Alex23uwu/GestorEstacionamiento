#pragma once
using namespace System;
public ref class ComboBoxItem
{
public:
	int Value;
	String^ Data;

	ComboBoxItem(int value) {
		this->Value = value;
	}

	String^ ToString() override {
		Data = Convert::ToString(Value);
		return this->Data;
	}
};