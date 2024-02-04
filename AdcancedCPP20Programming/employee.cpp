import <iostream>;
import <string>;
import <format>;
import <array>;
import <vector>;
import employee;
int main()
{
	//1.1
	//使用指派初始化器对结构体进行初始化
	HR::Employee employee{
	  .firstInitial = 'j',
	  .lastInitial = 'k',
	  .employeeNumber = 100,
	  .salary = 12000,
	  .title = HR::Title::Engineer
	};
	
	HR::Employee employee1{};
	employee1.firstInitial = 'l';
	employee1.lastInitial = 'x';
	employee1.employeeNumber = 5;
	employee1.salary = 12000;
	employee1.title = HR::Title::SeniorEngineer;

	HR::Employee employee2{};
	employee2.firstInitial = 'o';
	employee2.lastInitial = 'p';
	employee2.employeeNumber = 10;
	employee2.salary = 15000;
	employee2.title = HR::Title::Manager;

	HR::Employee employee3{ 'a','k',2,13000,HR::Title::SeniorEngineer};
	//1.3
	std::array<HR::Employee, 4> employees{ employee, employee1, employee2, employee3};
	for (const auto& item : employees) {
		std::cout 
			<< "firstInitial:" << item.firstInitial << "\t"
			<< "lastInitial:" << item.lastInitial << "\t" 
			<< "Number:" << item.employeeNumber << "\t" <<"Salary:"
			<< item.salary << "\n";
	}
	//1.4
	std::vector<HR::Employee> vEmployees;
	HR::Employee em1{
		.firstInitial = 'J',
		.lastInitial = 'W',
		.employeeNumber = 42,
		.salary = 80'000,
		.title = HR::Title::SeniorEngineer 
	};
	HR::Employee em2{
		.firstInitial = 'J',
		.lastInitial = 'D',
		.employeeNumber = 133,
		.salary = 64'000,
		.title = HR::Title::Engineer
	};
	HR::Employee em3{
		.firstInitial = 'J',
		.lastInitial = 'X',
		.employeeNumber = 133,
		.salary = 61'000,
		.title = HR::Title::Manager
	};
	vEmployees.push_back(em1);
	vEmployees.push_back(em2);
	vEmployees.push_back(em3);

	for (const auto& vec : vEmployees) {
		std::cout << std::format("Employee:{}{}", vec.firstInitial, vec.lastInitial) << "\t";
		std::cout << std::format("Number:{}", vec.employeeNumber) << "\t";
		std::cout << std::format("Salary:{}", vec.salary) << "\n";
		switch (vec.title)
		{
		case HR::Title::Engineer:
			std::cout << "Engineer\t";
			break;
		case HR::Title::SeniorEngineer:
			std::cout << "SeniorEngineer\t";
			break;
		case HR::Title::Manager:
			std::cout << "Manager\t";
			break;
		default:
			break;
		}
	}

	std::cout << std::format("Employee:{}{}", employee.firstInitial,employee.lastInitial)<<"\n";
	std::cout << std::format("Number:{}", employee.employeeNumber) << "\n";
	std::cout << std::format("Salary:{}", employee.salary) << "\n";
	
	return 0;
}
