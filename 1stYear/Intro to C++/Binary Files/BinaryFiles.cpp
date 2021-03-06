#include <string>
#include <fstream>
#include <iostream>

struct Player
{
	char name[32];
	int health;
};

void main()
{
	int choice = 0;
	bool prerequisiteRead = false;
	bool prerequisiteReplace = false;
	bool gamerunning = true;
	while (gamerunning == true)
	{
	int terminate = 0;
		
		if (choice == 0)
		{
			std::cout << "please enter in a number that matches the task you would like to do:" << std::endl;
			std::cout << "1 - write to file." << std::endl;
			std::cout << "2 - read file." << std::endl;
			std::cout << "3 - replace part of file." << std::endl;
			std::cout << "4 - close application." << std::endl;
			std::cout << "please enter a number: ";
			std::cin >> choice;
		}

		//WRITING
		else if (choice == 1)
		{
			//create 3 players
			Player players[3];

			strcpy_s(players[0].name, "Bob");
			players[0].health = 100;

			strcpy_s(players[1].name, "Gary");
			players[1].health = 50;

			strcpy_s(players[2].name, "John");
			players[2].health = 20;


			std::fstream writeFile;

			writeFile.open("file.dat", std::ios_base::out | std::ios_base::binary);

			if (writeFile.is_open())
			{					 //address of first byte , how many bytes
				writeFile.write((char*)&players[0], sizeof(Player) * 3);
				writeFile.close();
			}

			system("pause");
			system("cls");
			std::cout << "file has been written" << std::endl;
			system("pause");
			system("cls");
			prerequisiteRead = true;
			prerequisiteReplace = true;
			choice = 0;
		}

		//READING
		else if (choice == 2)
		{
			if (prerequisiteRead == true)
			{
				std::cout << "Breakpoint to see read data" << std::endl;
				Player loadedPlayers[3];
				std::fstream readFile;
				readFile.open("file.dat", std::ios_base::in | std::ios_base::binary);

				if (readFile.is_open())
				{
					readFile.read((char*)loadedPlayers, sizeof(Player) * 3);
					readFile.close();
				}
			}
			else if (prerequisiteRead == false)
			{
				std::cout << "you can not read a file that you have not made yet." << std::endl;
				choice = 5;
			}
			system("pause");
			choice = 5;
		}

		//REPLACING
		else if (choice == 3)
		{
			if (prerequisiteRead == true)
			{
				std::cout << "Breakpoint to see read data" << std::endl;
				std::fstream replaceFile;

				replaceFile.open("file.dat", std::ios_base::binary | std::ios_base::in | std::ios_base::out);

				if (replaceFile.is_open())
				{
					Player newPlayer;
					strcpy_s(newPlayer.name, "REPLACEMENT");
					newPlayer.health = 666;

					//seek to second player entry and write our new player into the file at that position
					replaceFile.seekp(sizeof(Player), std::ios_base::beg);
					replaceFile.write((char*)&newPlayer, sizeof(Player));

					replaceFile.close();
				}
				system("pause");
				system("cls");
				choice = 0;
			}

			else if (prerequisiteRead == false)
			{
				std::cout << "you can not Edit a file that you have not made yet." << std::endl;
				choice = 5;
			}
			system("pause");
		}

		else if (choice == 4)
		{
			system("cls");
			std::cout << "are you sure you want to quit?" << std::endl;
			std::cout << "1 - Yes" << std::endl;
			std::cout << "2 - No" << std::endl;
			std::cout << "please input your selection: ";
			std::cin >> terminate;
			if (terminate == 1)
			{
				break;
			}
			else
			{
				system("cls");
				choice = 0;
			}
		}

		else
		{
			system("cls");
			choice = 0;
		}
		
	}
}