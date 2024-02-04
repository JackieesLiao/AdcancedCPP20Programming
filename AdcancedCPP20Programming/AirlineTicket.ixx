export module AirlineTicket;

import <string>;
import <optional>;
//1.5
export class AirlineTicket
{
public:
	AirlineTicket();
	~AirlineTicket();
	double calculatePriceInDollars() const;
	std::string getPassengerName() const;
	void setPassengerName(const std::string& name);
	int getNumberOfMiles() const;
	void setNumberOfMiles(int miles);
	bool hasEliteSuperRewardsStatus() const;
	void setHasEliteSuperRewardsStatus(bool status);
	//1.6
	void setfreequentPassengerID(int numbers);
	std::optional<int> getfreequentPassengerID() const;
private:
	std::string m_passengerName{"unknown"};
	int m_numberOfMiles{ 0 };
	bool m_hasEliteSuperRewardsStatus{false};
	//1.6
	std::optional<int> m_freequentPassengerID;
};
