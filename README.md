# Quick Start
The following sample code is re-created using Crow's microframework https://github.com/ipkn/crow (the file "crow_all.h" is taken from the link. To get the latest file, visit their github link)

This code is tested using:
- Ubuntu 18.04
- g++ 7.5.0
- Boost 1.65.1 

To compile, run the following on the command line:
> g++ main.cpp -o output -lboost_system -pthread 

To run, type the following on the command line: 
> ./output 

If successful, it should output the following:
> [INFO    ] Crow/0.1 server is running at 0.0.0.0:5000 using 8 threads \
> [INFO    ] Call 'app.loglevel(crow::LogLevel::Warning)' to hide Info level logs. 

Go to your browser http://0.0.0.0:5000/welcome, it should print out 
> {"data":"Hello World."}
