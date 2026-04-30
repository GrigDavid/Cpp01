#include <iostream>
#include <fstream>
#include <string>

// std::string	replaceS1ToS2(std::string buff, std::string s1, std::string s2)
// {
// 	if (s1.empty())
//     	return buff;
// 	std::size_t	id = buff.find(s1);
// 	if (id == std::string::npos)
// 		return (buff);
// 	return(buff.substr(0, id) + s2 + replaceS1ToS2(buff.substr(id + s1.length()), s1, s2));
// }

void	replaceS1ToS2(std::string& buff, const std::string& s1, const std::string& s2)
{
	if (s1.empty())
    	return ;
	std::size_t	id;
	id = buff.find(s1);
	while (id != std::string::npos){
		buff = buff.substr(0, id) + s2 + buff.substr(id + s1.length());
		id = buff.find(s1, id + s2.length());
	}
}

int main (int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Wrong number of arguments" << std::endl;
		return (1);
	}
	std::ifstream myFile(argv[1]);
	if (!myFile.good()) {
		std::cerr << "Error while opening output file!";
		return -1;
	}
	std::ofstream newFile(std::string(argv[1]) + std::string(".replace"));
	if (!newFile)
	{
		std::cerr << "Error while opening input file!";
		return -1;
	}
	std::string buff;

	///////////////////////////////////////////////////////////////
	//file creation goes here//////////////////////////////////////
	///////////////////////////////////////////////////////////////

	while (std::getline(myFile, buff))
	{
		replaceS1ToS2(buff, argv[2], argv[3]);
		newFile << buff << std::endl;
	}

}