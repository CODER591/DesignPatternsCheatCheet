

#include <iostream>
#include <queue>



#include "abstract_prototype.h"
#include "first_prototype.h"
#include "second_prototype.h"



int main() {
	std::vector <int> vec_1;
	std::list <int> list_1;
	std::queue<int> queue_1;

	std::string str1 = "Proto_1";
	std::string str2 = "Proto_2";

	AbstractProduct* kek = new FirstProduct(list_1, vec_1, str1);
	AbstractProduct* new_kek = kek->Clone();

	AbstractProduct* kek_2 = new SecondProduct(queue_1, vec_1, str1);
    AbstractProduct* new_kek_2 = kek_2->Clone();

	delete kek;
	delete new_kek;
	delete kek_2;
	delete new_kek_2;

	return 0;
}
