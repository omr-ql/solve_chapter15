#include <iostream>
using namespace std;
class Employee {
private :
    string name ;
    int ID ;
    string Hire_Date ;
public:
    Employee(const string &name, int ID, string Hire_Date)  {
        this -> name = name ;
        this -> ID = ID ;
        this -> Hire_Date = Hire_Date ;
    }

    void setName(string &name) {
        Employee::name = name;
    }

    void setId(int id) {
        ID = id;
    }

    void setHireDate(string &hireDate) {
        Hire_Date = hireDate;
    }

    string get_Name() {
        return name ;
    }
    int get_ID () {
        return ID ;
    }

    string &getHireDate() {
        return Hire_Date;
    }
};

class ProductionWorker : public Employee {
private:
    int shift ;
    double Hourly_pay_rate ;
public:
    ProductionWorker(string name , int ID , string Hire_Date ,int const shift ,double Hourly_pay_rate) : Employee(name , ID , Hire_Date){
        this -> shift = shift ;
        this -> Hourly_pay_rate = Hourly_pay_rate ;
    }

    string setShift(int shift) {
        if (shift == 1) {
            cout << "Day Shift" << endl;
        }
        else if (shift == 2) {
            cout << "Night Shift" << endl;
        }
        else {
            cout << "INVALID INPUT" << endl;
        }
    }

    void setHourlyPayRate(double hourlyPayRate) {
        Hourly_pay_rate = hourlyPayRate;
    }

    int getShift()  {
        return shift;
    }

    double getHourlyPayRate()  {
        return Hourly_pay_rate;
    }
};

class ShiftSupervisor : public Employee {
private:
    double annualSalary ;
    double annualProduction ;
public:
    ShiftSupervisor(string name , int ID , string Hire_Date ,int annualSalary ,double annualProduction) : Employee(name , ID , Hire_Date) {
        this -> annualSalary = annualSalary ;
        this -> annualProduction = annualProduction ;
    }

    double getAnnualSalary() const {
        return annualSalary;
    }

    void setAnnualSalary(double annualSalary) {
        ShiftSupervisor::annualSalary = annualSalary;
    }

    double getAnnualProduction() const {
        return annualProduction;
    }

    void setAnnualProduction(double annualProduction) {
        ShiftSupervisor::annualProduction = annualProduction;
    }
};

class TeamLeader : public ProductionWorker {
private:
    double numberTraining ;
    double attendTraining ;
public:
    TeamLeader (string name , int ID , string Hire_Date ,int const shift ,double Hourly_pay_rate ,double numberTraining ,double attendTraining) : ProductionWorker(name, ID, Hire_Date , shift , Hourly_pay_rate ) {
        this -> numberTraining = numberTraining ;
        this -> attendTraining = attendTraining ;
    }

    double getNumberTraining() const {
        return numberTraining;
    }

    void setNumberTraining(double numberTraining) {
        TeamLeader::numberTraining = numberTraining;
    }

    double getAttendTraining() const {
        return attendTraining;
    }

    void setAttendTraining(double attendTraining) {
        TeamLeader::attendTraining = attendTraining;
    }
};

int main () {
    TeamLeader Leader1("Omar" , 20210706 , "27/7/2001" , 1 , 12.1 ,122,155);
    cout << Leader1.get_Name() << endl;
    cout << Leader1.get_ID() << endl ;
    cout << Leader1.getHireDate() << endl ;
    cout << Leader1.getHourlyPayRate() << endl ;
    cout << Leader1.getNumberTraining() << endl ;
    cout << Leader1.getAttendTraining() << endl;
    Leader1.setShift(2)  ;
    cout << Leader1.getShift() ;
    return 0 ;
}