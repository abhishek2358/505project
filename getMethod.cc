#include "customlib.h"
#include <string>
#include <iostream>
#include <fstream>

using namespace std;

string getMethodHandler(string command) {
    // find the first /
    size_t firstSlash = command.find("/");
    // find the first space after firstSlash index and keep the result in a variable
    command = command.substr(firstSlash);
    command = command.substr(0, command.find(" "));

    // handle the commandType and return the appropriate response
    if (command == "/" || command == "/signup" || command == "/login") {
        ifstream ifs("./pages/index.html");
        string homepage((istreambuf_iterator<char>(ifs)), (istreambuf_iterator<char>()));
        string httpResponseHeader = "HTTP/1.1 200 OK\r\n"
                                   "Content-Type: text/html\r\n"
                                   "Content-Length: " + std::to_string(homepage.size()) + "\r\n\r\n";
        return httpResponseHeader + homepage;
    } 
    // else if (command == "/login") {
    //     ifstream ifs("./pages/index.html");
    //     string homepage((istreambuf_iterator<char>(ifs)), (istreambuf_iterator<char>()));
    //     string httpResponseHeader = "HTTP/1.1 200 OK\r\n"
    //                                "Content-Type: text/html\r\n"
    //                                "Content-Length: " + std::to_string(homepage.size()) + "\r\n\r\n";
    //     return httpResponseHeader + homepage;
    // } 
    else if (command == "/about") {
        return "HTTP/1.1 200 OK\nContent-Type: text/html\n\n<h1>Contact Us</h1>";
    } else if (command == "/inbox") {
        return "HTTP/1.1 200 OK\nContent-Type: text/html\n\n<h1>Inbox Us</h1>";
    } else if (command == "/downloadFile") {
        return "HTTP/1.1 200 OK\nContent-Type: text/html\n\n<h1>downloadFile</h1>";
    } else if (command == "/listFile") {
        return "HTTP/1.1 200 OK\nContent-Type: text/html\n\n<h1>listFile</h1>";
    }

    else {
        return "HTTP/1.1 404 Not Found\nContent-Type: text/html\n\n<h1>404 Not Found</h1>";
    }

}