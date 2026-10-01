#include<iostream>
#include<sys/socket.h>
#include<netinet/in.h>
#include<arpa/inet.h>
#include<unistd.h>
using namespace std;

int main() {
    cout << "Nexis - Network Visibility Tool \n" << endl;
    cout << "Starting Up...\n" << endl;
    int sockfd = socket(AF_INET, SOCK_STREAM, 0); // okay so af_inet thing asks for the IPv4 and sock_stream provides tcp so basically this thing asks the kernel for a socket 
    if (sockfd <0) {
        cerr << "Failed to create a socket\n";  // cerr is like cout but is used to tell the user that this is an error as the name shows
        return 1;
    }

    sockaddr_in target{};
    target.sin_familu = AF_INET;
    target.sin_port = htons(22);  // learnt about a few ports for example 22 is for ssh, 53 for dns and 80 for http
    inet_pton(AF_INET, "127.0.0.1", &target.sin_addr);  // so this 127.0.0.1 is basically a loopback that targets to your machine 

    int result = connect(sockfd, (struct sockaddr*)&target, sizeof(target));

    if (result == 0) {
        cout << "port is open\n";
    }
    else{
        cout << "port is closed or unreachable\n";
    }
    
    close(sockfd);   //basically hardcoded hai abhi 
    return 0;
}
