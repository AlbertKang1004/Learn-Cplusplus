//#include <iostream>
//#include <string>
//#include <string_view>
//
//class Car {
//private:
//	std::string m_make;
//	std::string m_model;
//
//public:
//	Car(std::string_view make, std::string_view model) :
//			m_make { make }, m_model { model } {
//
//	}
//	friend bool operator==(const Car &c1, const Car &c2);
//	friend bool operator!=(const Car &c1, const Car &c2);
//};
//
//bool operator==(const Car &c1, const Car &c2) {
//	return (c1.m_make == c2.m_make && c1.m_model == c2.m_model);
//}
//
//bool operator!=(const Car &c1, const Car &c2) {
//	return !(c1 == c2);
//}
//
//int main() {
//	Car corolla { "Toyota", "Corolla" };
//	Car camry { "Toyota", "Camry" };
//
//	if (corolla == camry)
//		std::cout << "Two cars are the same.\n";
//	if (corolla != camry)
//		std::cout << "Two cars are different.\n";
//	return 0;
//}
