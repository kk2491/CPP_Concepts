#include <iostream>
#include <bits/stdc++.h>

int main() {

	std::map<int, std::vector<double> > map_data;


	for (int i = 0; i < 5; i++) {

		std::vector<double> vector_data;
		for (int j = 0; j < 5; j++) {
			double data = j + i;
			vector_data.push_back(data);
		}

		map_data[i] = vector_data;

	}

	std::cout << "Map size : " << map_data.size() << std::endl;

	for (int k = 0; k < map_data.size(); k++) {

		// std::cout << "Map Key : " << map_data[k] << std::endl;

		std::vector<double> data = map_data[k];


	}

	return 0;
}
