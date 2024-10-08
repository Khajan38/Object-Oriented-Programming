#include <iostream>
#include <unordered_map>
#include <format>
#include "MerkelRex Engine.hpp"
using namespace std;

class WalletClass {
          unordered_map <string, double> wallet;
     public :
          WalletClass (); //Constructor
          void insertCurrency (string product, double amount);
          void removeCurrency (string product, double amount);
          bool hasCurrency (string product, double amount);
          bool canFullfillOrder (OrderBookEntry & order);
          string toString (void);
};