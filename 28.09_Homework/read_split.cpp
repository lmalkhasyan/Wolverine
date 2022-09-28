#include <iostream>
#include <fstream>
#include <string>
#include <cstring>

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Enter only One Argument(filename)" << std::endl;
		return 1;
	}

	std::string buffer;
	std::string source;
	std::ifstream src_file(argv[1]);

	if (!src_file.is_open())
	{
		std::cout << "Can't Open File: " << argv[1] << std::endl;  
	}	
	while(!src_file.eof())
	{
		std::getline(src_file, buffer);
		source += buffer;
	}

	std::ofstream dst_file("dst_file.txt");
	if (!dst_file.is_open())
	{
		std::cout << "Can't open dst_file.txt file for output." << std::endl;
		return 1;
	}
	
	char *token = nullptr;
	token = strtok ((char *)source.c_str(), " ,\t");
	while (token != NULL)
	{
		dst_file << token;
		dst_file << '\n';
		token = strtok (NULL, " ,\t");
	}
	return 0;
}
