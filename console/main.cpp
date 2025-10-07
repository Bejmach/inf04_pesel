#include <iostream>
#include <string>
#include <vector>

const std::vector<int> weights = {1, 3, 7, 9, 1, 3, 7, 9, 1, 3};

char Gender(std::string pesel){
	int value = std::stoi(pesel.substr(9, 1));
	if(value % 2 == 0){
		return 'K';
	}
	return 'M';
}

bool Validate(std::string pesel){
	int S = 0;
	for (int i=0; i<10; i++){
		int value = std::stoi(pesel.substr(i, 1)) * weights[i];
		S = S + value;
	}
	int M = S%10;
	int R;
	if(M == 0){
		R = 0;
	}
	else{
		R = 10-M;
	}
	int last_value = std::stoi(pesel.substr(10, 1));
	return last_value == R;
}

int main(){
	std::cout<<"Podaj numer pesel"<<std::endl;
	std::string pesel;
	std::cin>>pesel;
	std::cout<<"Płeć: \""<<Gender(pesel)<<"\""<<std::endl;
	if(Validate(pesel)){
		std::cout<<"Pesel jest poprawny"<<std::endl;
	}
	else{
		std::cout<<"Pesel nie jest poprawny"<<std::endl;
	}
}

