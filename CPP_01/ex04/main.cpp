/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dreis-ma <dreis-ma@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 14:57:05 by dreis-ma          #+#    #+#             */
/*   Updated: 2023/10/22 14:57:07 by dreis-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

std::string replaceStr(const std::string &str, const std::string &search,
					   const std::string &replace) {
	std::string result;
	size_t pos = 0;
	size_t lastPos = 0;

	while ((pos = str.find(search, lastPos)) != std::string::npos) {
		result += str.substr(lastPos, pos - lastPos);
		result += replace;
		lastPos = pos + search.length();
	}
	result += str.substr(lastPos);
	return result;
}

int main(int argc, char **argv)
{
	if (argc < 4) {
		std::cout	<< "Please pass three parameters in the following order: "
					<< "a filename and two strings, s1 and s2." << std::endl;
		return (0);
	}
	// ifstream -> Reads from files
	std::ifstream readFile(argv[1]);
	if (readFile == 0) {
		std::cout	<< "Error: the file does not exist" << std::endl;
		return (1);
	}
	std::string newFileName = argv[1] + std::string(".replace");

	// ofstream -> Creates and writes to files
	std::ofstream newFile(newFileName.c_str());

	std::string fileLine;
	std::string fileContent;
	while (std::getline(readFile, fileLine)) {
		fileContent += fileLine;
		fileContent += "\n";
	}
	std::string result = replaceStr(fileContent, argv[2], argv[3]);
	readFile.close();
	newFile << result;
}
