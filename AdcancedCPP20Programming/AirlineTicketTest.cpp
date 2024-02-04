import AirlineTicket;
import <iostream>;
import <format>;
int main()
{
	AirlineTicket airline_ticket;
	airline_ticket.setPassengerName("liaojunjian");
	airline_ticket.setNumberOfMiles(20000);
	double cost{ airline_ticket.calculatePriceInDollars()};
	std::cout << std::format("cost:{} dollars", cost);
	std::cout << "\n";
	airline_ticket.setfreequentPassengerID(1110);
	const auto freequentPassengerID{ airline_ticket.getfreequentPassengerID() };
	if (freequentPassengerID.has_value()) {
		//value:returns the contained value
		std::cout << std::format("freequentPassengerID:{}", freequentPassengerID.value());
	}
	else
	{
		std::cout << "No frequent flyer number.\n";
	}
}