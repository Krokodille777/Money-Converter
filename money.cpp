#include <iostream>
#include <string>

int main(){
    double sum = 0.0;
    double eur_to_usd = 1.14;
    double eur_to_gbp = 0.88;
    double eur_to_dkk = 7.43;
    double eur_to_rub = 75.97;
    double eur_to_jpy = 121.32;
    double eur_to_btc = 0.00017;
    double eur_to_eth = 0.00014;
    double usd_to_eur = 0.86;
    double usd_to_gbp = 0.73;
    double usd_to_dkk = 6.58;
    double usd_to_rub = 62.98;
    double usd_to_jpy = 100.00;
    double usd_to_btc = 0.00016;
    double usd_to_eth = 0.00013;
    double gbp_to_eur = 1.17;
    double gbp_to_usd = 1.30;
    double gbp_to_dkk = 9.00;
    double gbp_to_rub = 83.00;
    double gbp_to_jpy = 135.00;
    double gbp_to_btc = 0.00018;
    double gbp_to_eth = 0.00015;
    double dkk_to_eur = 0.13;
    double dkk_to_usd = 0.15;
    double dkk_to_gbp = 0.11;
    double dkk_to_rub = 10.00;
    double dkk_to_jpy = 15.00;
    double dkk_to_btc = 0.00005;
    double dkk_to_eth = 0.00004;
    double rub_to_eur = 0.01;
    double rub_to_usd = 0.02;
    double rub_to_gbp = 0.03;
    double rub_to_dkk = 0.04;
    double rub_to_jpy = 0.05;
    double rub_to_btc = 0.00003;
    double rub_to_eth = 0.00002;
    double jpy_to_eur = 0.01;
    double jpy_to_usd = 0.02;
    double jpy_to_gbp = 0.03;
    double jpy_to_dkk = 0.04;
    double jpy_to_rub = 0.05;
    double jpy_to_btc = 0.00003;
    double jpy_to_eth = 0.00002;
    double btc_to_eur = 0.15;
    double btc_to_usd = 0.18;
    double btc_to_gbp = 0.14;
    double btc_to_dkk = 0.12;
    double btc_to_rub = 12.00;
    double btc_to_jpy = 18.00;
    double btc_to_eth = 0.00012;
    double eth_to_eur = 0.15;
    double eth_to_usd = 0.18;
    double eth_to_gbp = 0.14;
    double eth_to_dkk = 0.12;
    double eth_to_rub = 12.00;
    double eth_to_jpy = 18.00;
    double eth_to_btc = 0.00012;
    const std::string currencies[8] = {"USD", "DKK", "GBP", "EUR", "RUB", "JPY", "ETH", "BTC"};
    std::string currency, currency2;
    double result = 0.0;
        std::cout<<"Enter amount: ";
        std::cin>>sum;
        std::cout<<"Enter currency: ";
        std::cin>>currency;
        std::cout<<"Enter currency you want to convert to: ";
           
        
        if (currency == currencies[0] || currency2 == currencies[1]){
            result = sum * usd_to_dkk;
            std::cout<<sum<<" USD = "<<result<<" DKK"<<std::endl;
        }

        if (currency == currencies[0] || currency2 == currencies[2]){
            result = sum * usd_to_gbp;
            std::cout<<sum<<" USD = "<<result<<" GBP"<<std::endl;
        }

        if (currency == currencies[0] || currency2 == currencies[3]){
            result = sum * usd_to_eur;
            std::cout<<sum<<" USD = "<<result<<" EUR"<<std::endl;
        }

        if (currency == currencies[0] || currency2 == currencies[4]){
            result = sum * usd_to_rub;
            std::cout<<sum<<" USD = "<<result<<" RUB"<<std::endl;
        }

        if (currency == currencies[0] || currency2 == currencies[5]){
            result = sum * usd_to_jpy;
            std::cout<<sum<<" USD = "<<result<<" JPY"<<std::endl;
        }

        if (currency == currencies[0] || currency2 == currencies[6]){
            result = sum * usd_to_btc;
            std::cout<<sum<<" USD = "<<result<<" BTC"<<std::endl;
        }

        if (currency == currencies[0] || currency2 == currencies[7]){
            result = sum * usd_to_eth;
            std::cout<<sum<<" USD = "<<result<<" ETH"<<std::endl;
        }
        if (currency == currencies[1] || currency2 == currencies[0]){
            result = sum * dkk_to_usd;
            std::cout<<sum<<" DKK = "<<result<<" USD"<<std::endl;
        }

        if (currency == currencies[1] || currency2 == currencies[2]){
            result = sum * dkk_to_gbp;
            std::cout<<sum<<" DKK = "<<result<<" GBP"<<std::endl;
        }

        if (currency == currencies[1] || currency2 == currencies[3]){
            result = sum * dkk_to_eur;
            std::cout<<sum<<" DKK = "<<result<<" EUR"<<std::endl;
        }

        if (currency == currencies[1] || currency2 == currencies[4]){
            result = sum * dkk_to_rub;
            std::cout<<sum<<" DKK = "<<result<<" RUB"<<std::endl;
        }

        if (currency == currencies[1] || currency2 == currencies[5]){
            result = sum * dkk_to_jpy;
            std::cout<<sum<<" DKK = "<<result<<" JPY"<<std::endl;
        }

        if (currency == currencies[1] || currency2 == currencies[6]){
            result = sum * dkk_to_btc;
            std::cout<<sum<<" DKK = "<<result<<" BTC"<<std::endl;
        }

        if (currency == currencies[1] || currency2 == currencies[7]){
            result = sum * dkk_to_eth;
            std::cout<<sum<<" DKK = "<<result<<" ETH"<<std::endl;
        }
        
        if (currency == currencies[2] || currency2 == currencies[0]){
            result = sum * gbp_to_usd;
            std::cout<<sum<<" GBP = "<<result<<" USD"<<std::endl;
        }

        if (currency == currencies[2] || currency2 == currencies[1]){
            result = sum * gbp_to_dkk;
            std::cout<<sum<<" GBP = "<<result<<" DKK"<<std::endl;
        }

        if (currency == currencies[2] || currency2 == currencies[3]){
            result = sum * gbp_to_eur;
            std::cout<<sum<<" GBP = "<<result<<" EUR"<<std::endl;
        }

        if (currency == currencies[2] || currency2 == currencies[4]){
            result = sum * gbp_to_rub;
            std::cout<<sum<<" GBP = "<<result<<" RUB"<<std::endl;
        }

        if (currency == currencies[2] || currency2 == currencies[5]){
            result = sum * gbp_to_jpy;
            std::cout<<sum<<" GBP = "<<result<<" JPY"<<std::endl;
        }

        if (currency == currencies[2] || currency2 == currencies[6]){
            result = sum * gbp_to_btc;
            std::cout<<sum<<" GBP = "<<result<<" BTC"<<std::endl;
        }

        if (currency == currencies[2] || currency2 == currencies[7]){
            result = sum * gbp_to_eth;
            std::cout<<sum<<" GBP = "<<result<<" ETH"<<std::endl;
        }

        if (currency == currencies[3] || currency2 == currencies[0]){
            result = sum * eur_to_usd;
            std::cout<<sum<<" EUR = "<<result<<" USD"<<std::endl;
        }

        if (currency == currencies[3] || currency2 == currencies[1]){
            result = sum * eur_to_dkk;
            std::cout<<sum<<" EUR = "<<result<<" DKK"<<std::endl;
        }
        
        if (currency == currencies[3] || currency2 == currencies[2]){
            result = sum * eur_to_gbp;
            std::cout<<sum<<" EUR = "<<result<<" GBP"<<std::endl;
        }

        if (currency == currencies[3] || currency2 == currencies[4]){
            result = sum * eur_to_rub;
            std::cout<<sum<<" EUR = "<<result<<" RUB"<<std::endl;
        }

        if (currency == currencies[3] || currency2 == currencies[5]){
            result = sum * eur_to_jpy;
            std::cout<<sum<<" EUR = "<<result<<" JPY"<<std::endl;
        }

        if (currency == currencies[3] || currency2 == currencies[6]){
            result = sum * eur_to_btc;
            std::cout<<sum<<" EUR = "<<result<<" BTC"<<std::endl;
        }

        if (currency == currencies[3] || currency2 == currencies[7]){
            result = sum * eur_to_eth;
            std::cout<<sum<<" EUR = "<<result<<" ETH"<<std::endl;
        }

        if (currency == currencies[4] || currency2 == currencies[0]){
            result = sum * rub_to_usd;
            std::cout<<sum<<" RUB = "<<result<<" USD"<<std::endl;
        }

        if (currency == currencies[4] || currency2 == currencies[1]){
            result = sum * rub_to_dkk;
            std::cout<<sum<<" RUB = "<<result<<" DKK"<<std::endl;
        }

        if (currency == currencies[4] || currency2 == currencies[2]){
            result = sum * rub_to_gbp;
            std::cout<<sum<<" RUB = "<<result<<" GBP"<<std::endl;
        }

        if (currency == currencies[4] || currency2 == currencies[3]){
            result = sum * rub_to_eur;
            std::cout<<sum<<" RUB = "<<result<<" EUR"<<std::endl;
        }

        if (currency == currencies[4] || currency2 == currencies[5]){
            result = sum * rub_to_jpy;
            std::cout<<sum<<" RUB = "<<result<<" JPY"<<std::endl;
        }

        if (currency == currencies[4] || currency2 == currencies[6]){
            result = sum * rub_to_btc;
            std::cout<<sum<<" RUB = "<<result<<" BTC"<<std::endl;
        }

        if (currency == currencies[4] || currency2 == currencies[7]){
            result = sum * rub_to_eth;
            std::cout<<sum<<" RUB = "<<result<<" ETH"<<std::endl;
        }

        if (currency == currencies[5] || currency2 == currencies[0]){
            result = sum * jpy_to_usd;
            std::cout<<sum<<" JPY = "<<result<<" USD"<<std::endl;
        }

        if (currency == currencies[5] || currency2 == currencies[1]){
            result = sum * jpy_to_dkk;
            std::cout<<sum<<" JPY = "<<result<<" DKK"<<std::endl;
        }

        if (currency == currencies[5] || currency2 == currencies[2]){
            result = sum * jpy_to_gbp;
            std::cout<<sum<<" JPY = "<<result<<" GBP"<<std::endl;
        }

        if (currency == currencies[5] || currency2 == currencies[3]){
            result = sum * jpy_to_eur;
            std::cout<<sum<<" JPY = "<<result<<" EUR"<<std::endl;
        }

        if (currency == currencies[5] || currency2 == currencies[4]){
            result = sum * jpy_to_rub;
            std::cout<<sum<<" JPY = "<<result<<" RUB"<<std::endl;
        }

        if (currency == currencies[5] || currency2 == currencies[6]){
            result = sum * jpy_to_btc;
            std::cout<<sum<<" JPY = "<<result<<" BTC"<<std::endl;
        }

        if (currency == currencies[5] || currency2 == currencies[7]){
            result = sum * jpy_to_eth;
            std::cout<<sum<<" JPY = "<<result<<" ETH"<<std::endl;
        }

        if (currency == currencies[6] || currency2 == currencies[0]){
            result = sum * btc_to_usd;
            std::cout<<sum<<" BTC = "<<result<<" USD"<<std::endl;
        }

        if (currency == currencies[6] || currency2 == currencies[1]){
            result = sum * btc_to_dkk;
            std::cout<<sum<<" BTC = "<<result<<" DKK"<<std::endl;
        }

        if (currency == currencies[6] || currency2 == currencies[2]){
            result = sum * btc_to_gbp;
            std::cout<<sum<<" BTC = "<<result<<" GBP"<<std::endl;
        }

        if (currency == currencies[6] || currency2 == currencies[3]){
            result = sum * btc_to_eur;
            std::cout<<sum<<" BTC = "<<result<<" EUR"<<std::endl;
        }

        if (currency == currencies[6] || currency2 == currencies[4]){
            result = sum * btc_to_rub;
            std::cout<<sum<<" BTC = "<<result<<" RUB"<<std::endl;
        }

        if (currency == currencies[6] || currency2 == currencies[5]){
            result = sum * btc_to_jpy;
            std::cout<<sum<<" BTC = "<<result<<" JPY"<<std::endl;
        }

        if (currency == currencies[6] || currency2 == currencies[7]){
            result = sum * btc_to_eth;
            std::cout<<sum<<" BTC = "<<result<<" ETH"<<std::endl;
        }

        if (currency == currencies[7] || currency2 == currencies[0]){
            result = sum * eth_to_usd;
            std::cout<<sum<<" ETH = "<<result<<" USD"<<std::endl;
        }

        if (currency == currencies[7] || currency2 == currencies[1]){
            result = sum * eth_to_dkk;
            std::cout<<sum<<" ETH = "<<result<<" DKK"<<std::endl;
        }

        if (currency == currencies[7] || currency2 == currencies[2]){
            result = sum * eth_to_gbp;
            std::cout<<sum<<" ETH = "<<result<<" GBP"<<std::endl;
        }

        if (currency == currencies[7] || currency2 == currencies[3]){
            result = sum * eth_to_eur;
            std::cout<<sum<<" ETH = "<<result<<" EUR"<<std::endl;
        }

        if (currency == currencies[7] || currency2 == currencies[4]){
            result = sum * eth_to_rub;
            std::cout<<sum<<" ETH = "<<result<<" RUB"<<std::endl;
        }

        if (currency == currencies[7] || currency2 == currencies[5]){
            result = sum * eth_to_jpy;
            std::cout<<sum<<" ETH = "<<result<<" JPY"<<std::endl;
        }

        if (currency == currencies[7] || currency2 == currencies[6]){
            result = sum * eth_to_btc;
            std::cout<<sum<<" ETH = "<<result<<" BTC"<<std::endl;
        }
        else {
            std::cout<<"Error"<<std::endl;
        }
        
    
    
    
    return 0;

}