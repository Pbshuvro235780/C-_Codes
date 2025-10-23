#include<iostream>
main()
{
    int n;
    std::cout << "Enter the roll no.: ";
    std::cin >> n;

    if(n%4==1)
    {
        std::cout << "Your Group is A.";
    }

    else if(n%4==2)
    {
        std::cout << "Your Group is B.";
    }

    else if(n%4==3)
    {
        std::cout << "Your Group is C.";
    }

    else
    {
        std::cout << "Your Group is D.";
    }
}
