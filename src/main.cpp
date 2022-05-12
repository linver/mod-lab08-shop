// Copyright 2022 UNN-IASR
#include "../include/task.h"
#include <iostream>

int main()
{
    int cashboxes_number = 5;
    int max_num_of_customers = 100;
    int customers_intensity = 20;
    int serving_speed = 15;
    int average_product_num = 10;
    int max_queue_len = 5;

    Supermarket supermarket(cashboxes_number, max_num_of_customers, customers_intensity, serving_speed, average_product_num, max_queue_len);
    supermarket.start();
    std::cout << "STATISTICS" << std::endl << std::endl;
    std::cout << "Unserved customers: " << supermarket.getAmountOfUnservedCustomers() << std::endl;
    std::cout << "Served customers: " << supermarket.getAmountOfServedCustomers() << std::endl;
    std::cout << "Average line length: " << supermarket.getAverageLineLength() << std::endl;
    std::cout << "Average waiting time: " << supermarket.getAverageWaitingTimeForCustomer() << std::endl;
    std::cout << "Average worktime: " << supermarket.getAverageWorkTime() << std::endl;
    std::cout << "Average downtime: " << supermarket.getAverageDownTime() << std::endl;
}
