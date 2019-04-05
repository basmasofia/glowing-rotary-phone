#include <iostream>
using namespace std;
 
class BangunDatar{
public:
    int lebar, tinggi;
    void set_values(int a, int b){
    	lebar=a;
    	tinggi=b;
	}
};
 
class Display{
public:
    void show(){
        cout << "Bangunan Datar" << endl;
    }
};

class segiempat: public Display{
	public:
	void show(){
		cout << "Ini adalah segiempat dengan luas ";
	}	
};

class segitiga: public Display{
	public: 
	void show(){
		cout << "Ini adalah segitiga dengan luas "; 
	}
};

class Segiempat: public BangunDatar, public Display{
public:
    int luas(){
        return (lebar * tinggi);
    }
};
 
class Segitiga: public BangunDatar, public Display{
public:
    int luas(){
        return ((lebar * tinggi)/ 2);
    }
};
 
int main(){
    Segiempat segi4;
    Segitiga segi3;
    segiempat a;
    segitiga b;
    Display d;
 
    segi4.set_values(5,4);
    segi3.set_values(5,4);
 
 	d.show();
 	cout << endl;
 	a.show();
    cout << segi4.luas() << endl;
    b.show();
    cout << segi3.luas() << endl;
    return 0;
}
