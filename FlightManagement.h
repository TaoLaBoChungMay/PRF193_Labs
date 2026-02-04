#include <vector>

class FlightManagement {
	public :
		void addSchedules();
		void updateSchdules();
		int searchbyDestionnation();
		void calRevenuePerFlight();
	private :
		std :: vector <int> flights  ;
		int numberofTrips;	// numberofTrips = flights.length()
};