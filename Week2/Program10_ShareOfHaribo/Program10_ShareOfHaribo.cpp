#include <iostream>

int main()
{
    int packets = 40;
    int numOfStudents = 14;
    int packetsEach = packets / numOfStudents;
    int remainingPackets = packets % numOfStudents;
    std::cout << packetsEach << "\n";
    std::cout << remainingPackets << "\n";
}
