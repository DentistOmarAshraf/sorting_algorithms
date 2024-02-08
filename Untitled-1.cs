using System;
using System.Collections.Generic;
using System.Text;

namespace Assessment.Classes
{
    public class TicketPurchase
    {
        public string Name { get; set; }
        public decimal NumberOfTickets { get; set; }
        public decimal TicketPrice
        {
            get
            {
                return NumberOfTickets * 59.99M;
            }
        }

        public TicketPurchase(string name, decimal numberOfTickets)
        {
            Name = name;
            NumberOfTickets = numberOfTickets;
        }

        public decimal CalcTotalPrice(bool earlyCheckIn, bool priorityRideAccess)
        {
            decimal earlySurCharge = 10.00M;
            decimal vipRider = 50.00M;
            decimal totalTicketPrice = 0.00M;

            if (earlyCheckIn && priorityRideAccess)
            {
                totalTicketPrice = TicketPrice + (earlySurCharge * NumberOfTickets)
                                               + (vipRider * NumberOfTickets);
                return totalTicketPrice;
            }

            if (earlyCheckIn)
            {
                totalTicketPrice = TicketPrice + (NumberOfTickets * earlySurCharge);
                return totalTicketPrice;
            }
            if (priorityRideAccess)
            {
                totalTicketPrice = TicketPrice + (NumberOfTickets * vipRider);
                return totalTicketPrice;
            }
            return totalTicketPrice;
        }
    }
}