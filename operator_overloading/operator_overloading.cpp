#include <iostream>
#include "overloading.h"
//. = dışında op. nesne üzerinde kullanmak
//Hazır op. kendi isteğimize göre kullanmak
//Yeni op. yaratılmaz
//Öncelik sırası değişmez

using namespace std;

int main()
{
    Person person1("savas", "eratesli", 23);
    Person person2("nazlican", "isler", 24);
    Person person3("savas", "eratesli", 24);

    PersonFriend(person1);

    cout << "*********************************" << endl;

    //person1++;overloadingsiz çalışmaz,postfix
    ++person1;//Prefix
    person1.display();
    person2.display();
    person3.display();
    
    cout << "Class member: " << endl;
    person1 == person3 ? cout << "Ayni isimler"<<endl : cout << "Farkli isimler" << endl;

    cout << "Class Non-member: " << endl;
    person1 != person3 ? cout << "Farkli isimler" << endl : cout << "Ayni isimler" << endl;
    
    cout << "*********************************" << endl;
    
    Person person4;
    cout << "Kisi Giriniz: " << endl;
    cin >> person4;
    cout << person4;














    return 0;
}



