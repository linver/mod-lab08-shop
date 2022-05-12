// Copyright 2021 GHA Test Team
#include <gtest/gtest.h>
#include "../include/task.h"


TEST(TEST1, create_customer) {
    int cashboxes_number = 1;
    int max_num_of_customers = 5;
    int customers_intensity = 30;
    int serving_speed = 30;
    int average_product_num = 1;
    int max_queue_len = 5;
    Supermarket supermarket(cashboxes_number, max_num_of_customers, customers_intensity, serving_speed, average_product_num, max_queue_len);
    Customer* result = supermarket.getCustomer();
    ASSERT_TRUE(result->check.size() == 1);
}

TEST(TEST2, get_served_and_unserved_customers_amount) {
    int cashboxes_number = 0;
    int max_num_of_customers = 0;
    int customers_intensity = 0;
    int serving_speed = 0;
    int average_product_num = 0;
    int max_queue_len = 0;
    Supermarket supermarket(cashboxes_number, max_num_of_customers, customers_intensity, serving_speed, average_product_num, max_queue_len);
    supermarket.start();
    ASSERT_TRUE((supermarket.getAmountOfUnservedCustomers() == 1) && (supermarket.getAmountOfServedCustomers() == 1));
}

TEST(TEST3, get_average_line_length) {
    int cashboxes_number = 0;
    int max_num_of_customers = 0;
    int customers_intensity = 0;
    int serving_speed = 0;
    int average_product_num = 0;
    int max_queue_len = 0;
    Supermarket supermarket(cashboxes_number, max_num_of_customers, customers_intensity, serving_speed, average_product_num, max_queue_len);
    supermarket.start();
    ASSERT_EQ(supermarket.getAverageLineLength(), 4);
}

TEST(TEST4, get_average_downtime) {
    int cashboxes_number = 0;
    int max_num_of_customers = 0;
    int customers_intensity = 0;
    int serving_speed = 0;
    int average_product_num = 0;
    int max_queue_len = 0;
    Supermarket supermarket(cashboxes_number, max_num_of_customers, customers_intensity, serving_speed, average_product_num, max_queue_len);
    supermarket.start();
    ASSERT_EQ(supermarket.getAverageDownTime(), 125);
}

TEST(TEST5, get_average_waiting_time_for_customer) {
    int cashboxes_number = 0;
    int max_num_of_customers = 0;
    int customers_intensity = 0;
    int serving_speed = 0;
    int average_product_num = 0;
    int max_queue_len = 0;
    Supermarket supermarket(cashboxes_number, max_num_of_customers, customers_intensity, serving_speed, average_product_num, max_queue_len);
    supermarket.start();
    ASSERT_TRUE(supermarket.getAverageWaitingTimeForCustomer() == 200 && supermarket.getAverageDownTime() == 0);
}