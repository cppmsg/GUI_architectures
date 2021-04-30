// Game_loop.cpp : Defines the entry point for the application.
//

#include "Game_loop.h"

using namespace std;

int main() {
//var createGreeting = function(greeting) {                     // JavaScript version  https://aspiringcraftsman.com/2012/02/17/javascript-closures-explained/
	//return function(name) {
		//document.write(greeting + ', ' + name + '.');
	//};
//};
//helloGreeting = createGreeting("Hello");
//howdyGreeting = createGreeting("Howdy");
//helloGreeting("John");  // Hello, John.{
//howdyGreeting("Jane");  // Hello, John.{

	auto greeting_lambda = [&] (std::string greeting) { 
		auto name_lambda = [&] (std::string name) { cout << name << endl; };
		return name_lambda;
	};

	auto hello_greeting = greeting_lambda("Hello");
	auto howdy_greeting = greeting_lambda("Howdy");

	hello_greeting("John");
	hello_greeting("Sally");
	howdy_greeting("John");
	howdy_greeting("Sally");

	cout << "###" << endl;
	return 0;
}
