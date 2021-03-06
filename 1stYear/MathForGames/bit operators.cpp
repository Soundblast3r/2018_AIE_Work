#include <iostream>

bool Check(char mask, int pos)
{
	char bitmask = 1 << pos;
	char result = bitmask & mask;
	return(result != 0);
}

void printBinary(unsigned char value)
{
	//Prints value to the console as a binary number.
	for (int i = 7; i >= 0; i--)
	{
		bool isSet = Check(value, i);
		if (isSet == 1)
		{
			std::cout << "1";
		}
		else
		{
			std::cout << "0";
		}
	}
}

char Set(char current, int pos)
{
	char bitmask = 1 << pos;
	char result = current ^ bitmask;

	std::cout << "current is: "; printBinary(current); std::cout << std::endl;
	std::cout << "Result is: "; printBinary(result); std::cout << std::endl;
	return 0;
}

char Unset(char current, int pos)
{
	char bitmask = 1 << pos;
	char result = current ^ bitmask;
	std::cout << "current is: "; printBinary(current); std::cout << std::endl;
	std::cout << "Result is: "; printBinary(result); std::cout << std::endl;
	return 0;
}

char QuestTest(char current)
{
	int QuestResult;
	char prerequisite = 0b11001000;

	~current;
	QuestResult = current ^ prerequisite;

	std::cout << "current is: "; printBinary(current); std::cout << std::endl;
	std::cout << "prerequisite is: "; printBinary(prerequisite); std::cout << std::endl;
	std::cout << "QuestResult is: "; printBinary(QuestResult); std::cout << std::endl;
	return QuestResult == 0;
}

bool IsRightMostBitSet(unsigned int value)
{
	//Returns true if the right most(the least significant) bit of value is set and false otherwise
	bool isSet = Check(value, 0);
	if (isSet == 1)
	{
		std::cout << "True" << std::endl;
		return true;
	}
	else
	{
		std::cout << "False" << std::endl;
		return false;
	}
}

bool IsLeftMostBitSet(unsigned int value)
{
	//Returns true if the left most(the most significant) bit of value is set and false otherwise
	bool isSet = Check(value, 7);
	if (isSet == 1)
	{
		std::cout << "True" << std::endl;
		return true;
	}
	else
	{
		std::cout << "False" << std::endl;
		return false;
	}
}

bool IsBitSet(unsigned int value, unsigned char bit_to_check)
{
	//Returns true if the asked for bit is set, and false otherwise.bit_to_check is zero indexed from the right most bit.i.e 0 is the right most bit and 31 is the left most.
	bool isSet = Check(value, bit_to_check);
	if (isSet == 1)
	{
		std::cout << "True" << std::endl;
		return true;
	}
	else
	{
		std::cout << "False" << std::endl;
		return false;
	}
}

int GetRightMostSetBit(unsigned int value)
{
	/*
	int GetRightMostSetBit(unsigned int value)
	· This function returns the index of the right most bit set to 1 in value
	· If no bits are set, it returns - 1
	· For example
	o 00000001 would return 0
	o 10011100 would return 2
	o 01010000 would return 4
	o 00000000 would return -1
	*/
	//int index1 = -1;
	//int index0 = -1;
	//for (int i = 0; i <= 7; i++)
	//{
	//	bool isSet = Check(value, i);
	//	if (isSet == 1)
	//	{
	//		index1++;
	//	}
	//	else
	//	{
	//		index0++;
	//	}
	//	return index1;
	//}

	int index = -1;
	for (int i = 0; i <= 7; i++)
	{
		bool isSet = Check(value, i);
		if (isSet)
		{
			index = i;
			break;
		}
	}

	return index;

}

int main()
{
	{
		std::cout << "________________________________________________________________________________" << std::endl << std::endl;
		std::cout << "----------------------------------------------" << std::endl << std::endl;
		int result1 = 11111 | 11111;
		std::cout << "11111 | 11111" << std::endl;
		std::cout << result1 << std::endl;

		std::cout << "----------------------------------------------" << std::endl << std::endl;
		int result2 = 11111 ^ 11111;
		std::cout << "11111 ^ 11111" << std::endl;
		std::cout << result2 << std::endl;

		std::cout << "----------------------------------------------" << std::endl << std::endl;
		int result3 = 10101 & 11111;
		std::cout << "10101 & 11111" << std::endl;
		std::cout << result3 << std::endl;

		std::cout << "----------------------------------------------" << std::endl << std::endl;
		int result4 = 10101 | 11111;
		std::cout << "10101 | 11111" << std::endl;
		std::cout << result4 << std::endl;

		std::cout << "----------------------------------------------" << std::endl << std::endl;
		int result5 = 00000 ^ 11111;
		std::cout << "00000 ^ 11111" << std::endl;
		std::cout << result5 << std::endl;

		std::cout << "----------------------------------------------" << std::endl << std::endl;
		int result6 = 1 << 3;
		std::cout << "1 << 3" << std::endl;
		std::cout << result6 << std::endl;

		std::cout << "----------------------------------------------" << std::endl << std::endl;
		int result7 = 100 >> 2;
		std::cout << "100 >> 2" << std::endl;
		std::cout << result7 << std::endl;

		std::cout << "----------------------------------------------" << std::endl << std::endl;
		int result8 = ~10101;
		std::cout << "~10101" << std::endl;
		std::cout << result8 << std::endl;

		std::cout << "----------------------------------------------" << std::endl << std::endl;
		int result9 = 100 << 1;
		std::cout << "100 << 1" << std::endl;
		std::cout << result9 << std::endl;

		std::cout << "----------------------------------------------" << std::endl << std::endl;
		int result10 = 1010 >> 1;
		std::cout << "1010 >> 1" << std::endl;
		std::cout << result10 << std::endl;

		std::cout << "----------------------------------------------" << std::endl << std::endl;
		int result11 = ~11111;
		std::cout << "~11111" << std::endl;
		std::cout << result11 << std::endl;
	}

	std::cout << "_______________________________________________________________________________" << std::endl << std::endl;
	std::cout << "Task 7" << std::endl;
	{

		int current1 = 10111000;
		int pos1 = 3;
		Set(current1, pos1);
		std::cout << "----------------------------------------------" << std::endl << std::endl;

		int current2 = 10111000;
		int pos2 = 4;
		Unset(current2, pos2);

		std::cout << "----------------------------------------------" << std::endl << std::endl;

		int current3 = 11111000;
		QuestTest(current3);
		// should fail
		std::cout << "----------------------------------------------" << std::endl << std::endl;

		int current4 = 11111000;
		QuestTest(current4);
		// should Pass
	}
	std::cout << "_______________________________________________________________________________" << std::endl << std::endl;
	std::cout << "Task 8" << std::endl;
	{
		std::cout << "IsLeftMostBitSet";
		int value1 = 0b01000010;
		int value2 = 0b10000000;
		std::cout << "value is: "; printBinary(value1); std::cout << std::endl;
		std::cout << "IsLeftMostBitSet: "; IsLeftMostBitSet(value1); std::cout << std::endl;
		std::cout << "value is: "; printBinary(value2); std::cout << std::endl;
		std::cout << "IsLeftMostBitSet: "; IsLeftMostBitSet(value2); std::cout << std::endl;

		std::cout << "----------------------------------------------" << std::endl << std::endl;
		std::cout << "IsRightMostBitSet" << std::endl;
		int value3 = 0b00000010;
		int value4 = 0b00000001;
		std::cout << "value is: "; printBinary(value3); std::cout << std::endl;
		std::cout << "IsRightMostBitSet: "; IsRightMostBitSet(value3); std::cout << std::endl;
		std::cout << "value is: "; printBinary(value4); std::cout << std::endl;
		std::cout << "IsRightMostBitSet: "; IsRightMostBitSet(value4); std::cout << std::endl;


		std::cout << "----------------------------------------------" << std::endl << std::endl;
		int bit_to_check = 5;
		std::cout << "IsBitSet" << std::endl;
		int value5 = 0b00001000;
		std::cout << "value is: "; printBinary(value5); std::cout << std::endl;
		std::cout << "IsBitSet: "; IsBitSet(value5, bit_to_check); std::cout << std::endl;
		int value6 = 0b00100000;
		std::cout << "value is: "; printBinary(value6); std::cout << std::endl;
		std::cout << "IsBitSet: "; IsBitSet(value6, bit_to_check); std::cout << std::endl;

		std::cout << "----------------------------------------------" << std::endl << std::endl;
		std::cout << "RightMostSet" << std::endl;
		int value7 = 0b00000000;
		std::cout << "value is: "; printBinary(value7); std::cout << std::endl;
		std::cout << "GetRightMostSetBit: " << GetRightMostSetBit(value7) << std::endl << std::endl;

		int value8 = 0b00100000;
		std::cout << "value is: "; printBinary(value8); std::cout << std::endl;
		std::cout << "GetRightMostSetBit: " << GetRightMostSetBit(value8) << std::endl << std::endl;

		int value9 = 0b01001100;
		std::cout << "value is: "; printBinary(value9); std::cout << std::endl;
		std::cout << "GetRightMostSetBit: " << GetRightMostSetBit(value9) << std::endl << std::endl;

		std::cout << "----------------------------------------------" << std::endl << std::endl;
		std::cout << "PrintBinary" << std::endl;
		//Done
		int current5 = 0b11111000;
		QuestTest(current5);
	}
	system("pause");
}