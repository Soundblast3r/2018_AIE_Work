#pragma once

#include <list>
#include <string>


static unsigned int calculate_Hash(const char* data, unsigned int size = 0)
{
	unsigned int hash = 0;

	for (unsigned int i = 0; i < size; i++)
	{
		hash = (hash * 1313 + data[i]);
	}

	hash = hash & 0x7fffffff;
	return hash;
}

template<typename T>
static unsigned int calculate_Hash(const T& value)
{
	int hash = 0;

	return hash;
}


template<int Size, typename Keytype, typename ValueType>
class HashMap
{
private:
	struct pair
	{
		Keytype key;
		ValueType value;
	};
public:
	//void NumberChange(int number);

	int numbertest = 10;

	void add(Keytype key, ValueType value)
	{
		int hash = calculate_Hash(key);
		hash = hash % Size;
		pair p;
		p.key = key;
		p.value = value;
		m_data[hash].push_back(p);
	}

	void clear()
	{
		int i;
		for(i = 0; i < 1024;)
		{
			m_data[i].clear();
			i++;
		}
	}


	ValueType& Access(Keytype key)
	{
		int hash = calculate_Hash(key);
		hash = hash % Size;
		auto& list = m_data[hash];

		for (auto it = list.begin(); it != list.end(); ++it)
		{
		
			if(it != list.end() && it->key == key);
			{
				std::cout << "the specified value is: " << it->value <<std::endl;
				std::cout << "the specified Key is: " << it->key << std::endl;
				return it->value;
			}
			
		}
		//forces crash when value isnt found
		///assert(false && "the specified value was not found");
	}

	void destroy(Keytype key)
	{
		int hash = calculate_Hash(key);
		hash = hash % Size;
		auto& list = m_data[hash];

		for (auto it = list.begin(); it != list.end(); ++it)
		{
			//Search for the key
			if(it != list.end())
			{
				list.erase(it);
				break;
			}
			else
			{
				std::cout << "failed" << std::endl;
			}
		}
	}

	int Count()
	{
		int currentNumStoredItems = 0;
		for (int i = 0; i < Size; ++i)
		{
			currentNumStoredItems += m_data[i].size();
		}

		return currentNumStoredItems;
	}

private:
	std::list<pair> m_data[Size];
};

template<>
static unsigned int calculate_Hash(const std::string& value)
{
	return calculate_Hash(value.data(), value.size());
}

template<>
static unsigned int calculate_Hash(const int& value)
{
	return calculate_Hash((const char*)&value, sizeof(int));
}



	