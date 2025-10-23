#include<iostream>
main()
{
    int n;
    std::cout << "Enter the roll no.: ";
    std::cin >> n;

    if(n%2==1)
    {
        std::cout << "Your Group is A.";
    }

    else
    {
        std::cout << "Your Group is B.";
    }
}
