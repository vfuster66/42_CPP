/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuster- <vfuster-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 15:06:32 by vfuster-          #+#    #+#             */
/*   Updated: 2023/12/21 15:32:24 by vfuster-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

void replaceInLine(std::string& line, const std::string& s1, const std::string& s2) {
	std::string result;
	size_t pos = 0;
	size_t s1_len = s1.length();
	size_t lastPos = 0;

    while ((pos = line.find(s1, pos)) != std::string::npos) {
        result += line.substr(lastPos, pos - lastPos);
        result += s2;
        pos += s1_len;
        lastPos = pos;
    }

    result += line.substr(lastPos);
    line = result;
}


int	main(int ac, char **av) {
	
	if (ac != 4) {
		std::cerr << "Usage: " << av[0] << " <filename> <s1> <s2>" << std::endl;
		return 1;
	}
	
	std::string filename = av[1];
	std::string s1 = av[2];
	std::string s2 = av[3];

	std::ifstream fileIn(filename.c_str());
	if (!fileIn) {
		std::cerr << "Error opening file: " << filename << std::endl;
		return 1;
	}

	std::ofstream fileOut((filename + ".replace").c_str());
	if (!fileOut) {
		std::cerr << "Error creating file: " << filename << std::endl;
		return 1;
	}

	std::string line;
	while (std::getline(fileIn, line)) {
		replaceInLine(line, s1, s2);
		fileOut << line << "\n";
	}
	
	fileIn.close();
	fileOut.close();

	return 0;
}