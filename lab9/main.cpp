#include <iostream>
#include <fstream>

using namespace std;

void sprawdzPlik(string nazwa){
    ifstream fileOf;
    fileOf.open(nazwa);
    if(fileOf.is_open()){
        cout<<"Plik otworzyl sie poprawnie"<<endl<<endl<<endl;
        fileOf.close();
    }
    else{
        throw 3;
    }
}

void sprawdzLiczbe(int x){

    if(x>0 && x<22){

    }
    else{
        throw invalid_argument("Zla liczba ");
    }
}

void sprawdzSume(int x){
    if(x>21) throw 22;
}

int main()
{
        //zad1
        /*
        try{
        sprawdzPlik("odd.txt");
         ifstream fileOf;
         fileOf.open("kod.txt");
         string line1;
         while(!fileOf.eof())
         {
         getline(fileOf,line1);
         for(int i=0; i<line1.length(); i++){
            if(line1[i]=='/' && line1[i+1] =='/') break;
            else cout<<line1[i];
         }
            cout<<endl;
         }

         fileOf.close();
         }
         catch(int){
            cerr<<"Plik nie istnieje.";
         }*/



        int x,suma=0;

        do{
            try{
                cout<<"Podaj liczbe: ";
                cin>>x;
                sprawdzLiczbe(x);
                suma+=x;
                sprawdzSume(suma);
            }
            catch(invalid_argument& e){
             cerr << e.what() << endl;
             cin.clear();
             cin.ignore();

            }
            catch(int x){
                cout<<"Suma przekroczyla 21. "<<endl;
            }
            catch(...){
            cout<<"Brak zedfiniowanego wyjatku. "<<endl;
            }
        }
        while(suma<21);
        cout<<"Suma = 21: oczko"<<endl;

    return 0;
}
