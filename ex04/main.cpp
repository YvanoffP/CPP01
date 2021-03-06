#include <iostream>
#include <fstream>
#include <sstream>

int	error(std::string status)
{
	std::cout << "Error : " << status << std::endl;
	return (1);
}

int replace(char **argv)
{
    bool                replaced = false;
	std::ifstream		file(argv[1]);
	std::string			filename;
	std::string			content;
	std::string			s1;
	std::string			s2;
	std::stringstream	buff;
	size_t				pos;

	if(file.is_open())
	{
		pos = 0;
		s1 = argv[2];
		s2 = argv[3];
		filename = argv[1];
		filename.append(".replace");

		std::ofstream   output(filename);

		buff << file.rdbuf();
		content = buff.str();
		while((pos = content.find(s1, pos)) != std::string::npos)
		{
			content.erase(pos, s1.length());
			content.insert(pos, s2);
			pos += s2.length();
            replaced = true;
		}
        if (!replaced)
            std::cout << "No occurence found, file has been copied but not changed" << std::endl;
		output << content;
	}
	else if (file.fail())
    {
        std::cout << "error: " << strerror(errno) << std::endl;
        return (1);
    }
    else if (file.bad())
    {
        std::cout << "error: file corrupted" << std::endl;
        return (1);
    }
    else
    {
        std::cout << "error: file does not exist" << std::endl;
        return (1);
    }
    return (0);
}

int	main(int argc, char** argv)
{
	if (argc != 4)
		return (error("Too many/few arguments"));
	if (!argv[2] || !argv[3])
		return (error("Empty strings provided as arguments"));
	return (replace(argv));
}
