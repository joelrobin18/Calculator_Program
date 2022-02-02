#include <iostream>
#include <cmath>
#include <string>
using namespace std;
void switchcase(int sino);
void arithmetic();
void trignometry();
void logarithmic();
void exponential();
void relational();
void addition();
void subtraction();
void multiplication();
void division();
void inversetrig();
void trig();
void Sin();
void Cos();
void Tan();
void Cot();
void Sec();
void Cosec();
//void modu();
int main() {
    cout << "Welcome to Calculator Program"<< endl ;
    cout<<"This is a program to perform various mathematical operations such as Arithmetic, Trignometric,"
          "Exponential, Logarithmic Functions and Relational Operations"<<endl;
    /*cout<<endl<<"1. Arithmetic Operations"<<endl<<"2. Trignometric Operations"<<endl<<"3. Logarithmic Functions";
    cout<<endl<<"4. Exponential Functions"<<endl<<"5. Relational Operations"<<endl;*/

    bool cont=true;
    char yesno;
    int SINo;

    //For user to enter the value continuously till a limit/

    while(cont)
    {
        cout<<"Enter a number to perform the operation(between 1-5)";
        cout<<endl<<"1. Arithmetic Operations"<<endl<<"2. Trignometric Operations"<<endl<<"3. Logarithmic Functions";
        cout<<endl<<"4. Exponential Functions"<<endl<<"5. Relational Operations"<<endl;
        cin>>SINo;

        if(SINo>0 && SINo<=5)
        {
            switchcase(SINo);
        }
        else
        {
            cout<<endl<<"Enter a valid number between 1 and 5"<<endl;
            continue;
        }
        //Checking whether the use want to continue the program//

        checkagain:
    cout<<"Enter (Y/N) for Continuing Calculator Program "<<endl<<"Y for Continue"<<endl<<"N for Exiting"<<endl;
    cin>>yesno;

        if (yesno == 'y' || yesno == 'Y')
        {
            {
                cont = true;
            }
        }

        else if (yesno == 'n' || yesno == 'N')
        {
            {
                cont = false;
                cout << "Calculator Program Ended Successfully" << endl;
            }

        }
        else
        {
            cout << "Wrong Output" << endl;
            goto checkagain;
           // cout << "Wrong Output. Yes(Y) taken as default" << endl;
        }
     

    }
    return 0;
}
void switchcase(int sino)
{
    //To check which operation to be performed//

    switch(sino)
    {
        case 1:
        {
            arithmetic();
            cout<<endl;
            break;
        }
        case 2:
        {
            trignometry();
            cout<<endl;
            break;
        }
        case 3:
        {
            logarithmic();
            cout<<endl;
            break;
        }
        case 4:
        {
            exponential();
            cout<<endl;
            break;
        }
        case 5:
        {
            relational();
            cout<<endl;
            break;
        }
        default:
        {
            cout<<"This will never get printed!!!"<<endl;
            break;
        }
    }
}

//Arithmetic Operation//
void arithmetic()
{
    cout<<endl<<"Welcome To Arithmetic Operations such as"<<endl;
    cout<<"Addition, Subtraction, Multiplication, Division"<<endl;
    bool cont1=true;
    char yesorno;
    int switchvalue;
    while(cont1)
    {
        cout<<"Enter a number between 1 and 5 to perform Arithmetic Operation"<<endl;
        cout<<"1 for Addition"<<endl<<"2 for Subtraction"<<endl;
        cout<<"3 for Multiplication"<<endl<<"4 for Division"<<endl;
//      cout<<"5 for Modulus"<<endl;
        cin>>switchvalue;
        if (switchvalue>0 && switchvalue<=4)
        {
            switch(switchvalue)
            {
                case 1:
                {
                    addition();
                    cout<<endl;
                    break;
                }
                case 2:
                {
                    subtraction();
                    cout<<endl;
                    break;
                }
                case 3:
                {
                    multiplication();
                    cout<<endl;
                    break;
                }
                case 4:
                {
                    division();
                    cout<<endl;
                    break;
                }
/*                case 5:
                {
                    modu();
                    cout<<endl;
                    break;
                }*/
                default:
                    break;
            }
        }
        else
        {
            cout<<"Enter a valid number between 1 and 4"<<endl;
            continue;
        }
        //Checking whether the use want to continue the program//
        arithmeticcheck:
        cout<<"Enter (Y/N) for Arithmetic Operations"<<endl<<"Y for continue"<<endl<<"N for Exiting"<<endl;
        cin>>yesorno;

        if (yesorno == 'y' || yesorno == 'Y')
        {
            {
                cont1 = true;
            }
        }

        else if (yesorno == 'n' || yesorno == 'N')
        {
            {
                cont1 = false;
                cout << "Arithmetic Operation Completed Successfully" << endl;
            }

        }
        else
        {
            cout << "Wrong Output" << endl;
            goto arithmeticcheck;
           // cout << "Wrong Output. Yes(Y) taken as default" << endl;
        }
    }
}
void addition()
{
    double n,ar[1024],sum=0;
    int i;
    cout<<"No of terms to find sum"<<endl;
    cin>>n;
    cout<<endl<<"Enter numbers";
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    for(i=0;i<n;i++)
    {
        sum=sum+ar[i];
    }
    cout<<endl<<"Sum of "<<i<<" terms is"<<sum<<endl;
}
void subtraction()
{
    cout<< endl;
    double n,ar[1024],diff;
    int i;
    cout<<"No of terms to find difference"<<endl;
    cin>>n;
    cout<<endl<<"Enter numbers"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    diff=ar[0];
    for(i=1;i<=n;i++)
    {
        diff=diff-ar[i];
    }
    cout<<endl<<"Difference of "<<i<<" terms is"<<diff<<endl;
}
void multiplication()
{
    cout<< endl;
    double n,ar[1024],pro=1;
    int i;
    cout<<"No of terms to find product"<<endl;
    cin>>n;
    cout<<endl<<"Enter numbers"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    for(i=0;i<n;i++)
    {
        pro=pro*ar[i];
    }
    cout<<endl<<"Sum of " << i-1<<" terms is "<<pro<<endl;
}
void division()
{
    cout<< endl;
    double n,ar[1024],div;
    int i;
    cout<<"No of terms to divide"<<endl;
    cin>>n;
    cout<<endl<<"Enter numbers";
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    div=ar[0];
    for(i=1;i<=n;i++)
    {
        if (ar[i] != 0)
        {
            div = div / ar[i];
        }
        else
        {
            cout<<endl<<"Division by zero is underdefined";
            break;
        }
    }
    cout << endl << "Quotient of " << i << " terms is" << div << endl;

}
/*void modu()
{
    float a,b;
    cout<<"Enter the number to find the modulus";
    cin>>a;
    b= a % 10;
}*/

//Trignometric Operations
void trignometry()
{
    int a;
    bool cont1=true;
    char yesorno;
    int switchvalue;
    while(cont1)
    {
        cout<<"Enter a value for performing the calculation";
        cout<<endl<<"1.Trigonometric function 2.Inverse Trigonometric";
        cin>>a;
        if(a==1)
        {
            trig();
        }
        else if(a==2)
        {
            inversetrig();
        }
        else
        {
            cout<<endl<<"Enter a valid number";
            continue;
        }
        //Checking whether the use want to continue the program//
        tricheck:
        cout<<"Enter (Y/N) for Trigonometric Operations(Both Trig and Inverse)"<<endl<<"Y for continue"<<endl<<"N for Exiting"<<endl;
        cin>>yesorno;

        if (yesorno == 'y' || yesorno == 'Y')
        {
            {
                cont1 = true;
            }
        }

        else if (yesorno == 'n' || yesorno == 'N')
        {
            {
                cont1 = false;
                cout << " Trigonometric Operations(Both Trig and Inverse) Completed Successfully" << endl;
            }

        }
        else
        {
         cout << "Wrong Output." << endl;
         goto tricheck;
        }
    }
}


void trig()
{
    cout<<endl<<"Welcome To trigonometric calculation"<<endl;
    bool cont1=true;
    int num;
    char yesorno;
    int switchvalue;
    while(cont1)
    {
        cout << endl << "1.Sine 2.Cosine 3.Tangent 4.Cotangent 5.Secant 6.Cosecant"<<endl;
        cin >> switchvalue;
        if (switchvalue >= 1 && switchvalue <= 6)
        {
            switch (switchvalue)
            {
                case 1:
                {
                    Sin();
                    break;
                }
                case 2:
                {
                    Cos();
                    break;
                }
                case 3:
                {
                    Tan();
                    break;
                }
                case 4:
                {
                    Cot();
                    break;
                }
                case 5:
                {
                    Sec();
                    break;
                }
                case 6:
                {
                    Cosec();
                    break;
                }
                default:
                {
                    cout<<"This will never get printed!!!"<<endl;
                    break;
                }
            }
        }
        else
        {
            cout << endl << "Enter a Valid number between 1 and 6"<<endl;
        }

        //Checking whether the use want to continue the program//

        cout << "Enter (Y/N) for Trigonometric Operations" << endl << "Y for continue" << endl
             << "N for Exiting" << endl;
        cin >> yesorno;

        if (yesorno == 'y' || yesorno == 'Y') {
            {
                cont1 = true;
            }
        } else if (yesorno == 'n' || yesorno == 'N') {
            {
                cont1 = false;
                cout << "Trigonometric Operation Completed Successfully" << endl;
            }

        } else {

            cout << "Wrong Output. Yes(Y) taken as default" << endl;
        }
    }
}
void Sin()
{
    float a,b;
    cout << endl<<"Enter the value";
    cin>>b;
    float c=sin(b);
    cout<<"Value is"<<c;
}
void Cos()
{

}
void Tan()
{

}
void Cot()
{

}
void Sec()
{

}
void Cosec()
{

}
void inversetrig()
{
    cout<<endl<<"Welcome To Inverse Trigonometric calculation";

}



//Logarithmic Operations
void logarithmic()
{
    cout<<"3";
}




//Exponential operation
void exponential()
{
    cout<<"4";
}




//relational operations
void relational()
{
    cout<<"5";
}