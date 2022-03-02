cmake_minimum_required(VERSION 3.21)
project(SapiSales C)

set(CMAKE_C_STANDARD 99)
include_directories(
        sapi_sales/headers/manager
        sapi_sales/headers/models
        sapi_sales/src/manager
        sapi_sales/src/models
        shared/headers
        shared/src
)
add_executable(
        sapi_sales

        sapi_sales/src/main.c

        sapi_sales/headers/manager/lab2.h
        sapi_sales/headers/manager/lab_manager.h
        sapi_sales/headers/models/product.h
        sapi_sales/headers/models/user.h

        sapi_sales/src/manager/lab2.c
        sapi_sales/src/manager/lab_manager.c
        sapi_sales/src/models/product.c
        sapi_sales/src/models/user.c

        shared/headers/errors.h
        shared/headers/messages.h
        shared/headers/useful.h

        shared/src/errors.c
        shared/src/messages.c
)