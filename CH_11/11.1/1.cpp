#include"class.cpp"

int main()
{
    Admin A;
    manager o1;
    Employee o2;

    A.setcmpname();
    A.setsalary();
    A.setempsalary();
    A.setstaff();
    A.setrevenue();
    A.can_term();
    A.getcmpname();
    A.getsalary();
    A.getempsalary();
    A.getstaff();
    A.getrevenue();
    A.getcan_term();
    
    o1.setemp_salary(25);
    o1.getemp_salary();
    o1.setstaff(30000);
    o1.getstaff();
    o1.setcan_term("yes/no");
    o1.getcan_term();

    o2.getemp_salary();
    o2.getstaff();
    o2.getcan_term();

    return 0;
}