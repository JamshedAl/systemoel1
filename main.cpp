#include<iostream>
#include<direct.h>
#include<fstream>
#include"Tax.cpp"

using namespace std;

int main() 
{
    if ( mkdir("Loggedin User 2-12-22")== -1) {
        cout<<"Enter your name"<<endl;
        string name;
         try
        {
            cin>>name;
            
        }
        catch(const char *e)
        {
            cout<<""<<e;
        }
        
        cout<<"Enter Your enrollment Number"<<endl;
        string enrollment;
                try
        {
            cin>>enrollment;
            
        }
        catch(const char *e)
        {
            cout<<""<<e;
        }
        ifstream datafile;
        datafile.open("Loggedin User 2-12-22\\"+enrollment+".txt");
        if(datafile){
        cout<<"File exists";

        }
        else{
        ofstream MyFile("Loggedin User 2-12-22\\copy.txt");
        MyFile << name+"\n"+enrollment;
        MyFile.close();
        cout<<" Successfully File created";
        string line;
    ifstream ini_file{
        "Loggedin User 2-12-22\\copy.txt"
    }; 
    ofstream out_file{ "Loggedin User 2-12-22\\"+enrollment+".txt" };
    if (ini_file && out_file) {
  
        while (getline(ini_file, line)) {
            out_file << line << "\n";
        }
        cout << "Copy Finished \n";
    }
    else {
        printf("Cannot read File");
    }
    ini_file.close();
    out_file.close();
    ofstream ofs;
    ofs.open("Loggedin User 2-12-22\\copy.txt", ofstream::out | ofstream::trunc);
    ofs.close();
    cout<<"Enter Your Transfer Amount :";
    double amount;
    cin>>amount;
    cout<<"Your tax is "<<Calculate(amount);
    }
    }
    else {
        cout<<"Enter your name"<<endl;
        string name;
         try
        {
            cin>>name;
            
        }
        catch(const char *e)
        {
            cout<<""<<e;
        }
        
        cout<<"Enter Your enrollment Number"<<endl;
        string enrollment;
                try
        {
            cin>>enrollment;
            
        }
        catch(const char *e)
        {
            cout<<""<<e;
        }
        ifstream datafile;
        datafile.open("Loggedin User 2-12-22\\"+enrollment+".txt");
        if(datafile){
        cout<<"File exists";
        }
        else{
        ofstream MyFile("Loggedin User 2-12-22\\copy.txt");
        MyFile << name+"\n"+enrollment;
        MyFile.close();
        cout<<" Successfully File created";
        string line;
    ifstream ini_file{
        "Loggedin User 2-12-22\\copy.txt"
    }; 
    ofstream out_file{ "Loggedin User 2-12-22\\"+enrollment+".txt" };
    if (ini_file && out_file) {
  
        while (getline(ini_file, line)) {
            out_file << line << "\n";
        }
        cout << "Copy Finished \n";
    }
    else {
        printf("Cannot read File");
    }
    ini_file.close();
    out_file.close();
    ofstream ofs;
    ofs.open("Loggedin User 2-12-22\\copy.txt", ofstream::out | ofstream::trunc);
    ofs.close();
    }
    cout<<"Enter Your Transfer Amount :";
    double amount;
    cin>>amount;
    cout<<"Your tax is "<<Calculate(amount);
}
}