import AirlineTicket;
AirlineTicket::AirlineTicket()
{
	//nothing 
}
AirlineTicket::~AirlineTicket()
{
	//nothing
}

double AirlineTicket::calculatePriceInDollars() const
{
	if (hasEliteSuperRewardsStatus()) {
		return 0;
	}

	return getNumberOfMiles() * 0.5;
}
//name: set and get
std::string AirlineTicket::getPassengerName() const
{
	return m_passengerName;
}
void AirlineTicket::setPassengerName(const std::string& name)
{
	m_passengerName = name;
}
//m_numberOfMiles:set and get
int AirlineTicket::getNumberOfMiles() const
{
	return m_numberOfMiles;
}
void AirlineTicket::setNumberOfMiles(int miles)
{
	m_numberOfMiles = miles;
}
//m_hasEliteSuperRewardsStatus:set and get
bool AirlineTicket::hasEliteSuperRewardsStatus() const
{
	return m_hasEliteSuperRewardsStatus;
}
void AirlineTicket::setHasEliteSuperRewardsStatus(bool status)
{
	m_hasEliteSuperRewardsStatus = status;
}
//m_freequentPassengerID:set and get
void AirlineTicket::setfreequentPassengerID(int numbers)
{
	m_freequentPassengerID = numbers;
}
std::optional<int> AirlineTicket::getfreequentPassengerID() const
{
	return m_freequentPassengerID;
}