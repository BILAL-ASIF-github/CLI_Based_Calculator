#include<iostream>
#include<string.h>
using namespace std;
int main()
{ 
    char choice1;
    int n=0,operation;
    char x;
  	string arrayoperation[10];
	int arrayanswer[10];

	cout<<":-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:- SAIMS CALCULATOR :-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:"<<endl;
	label:
	cout<<endl<<" CHOOSE YOUR OPERATION :-";
	cout<<endl<<" a)UNARY";
	cout<<endl<<" b)BINARY";
	cout<<endl<<" c)HISTORY";
	cout<<endl<<" d)EXIT";
	cout<<endl<<" YOUR CHOICE : ";
	cin>>choice1;
	switch(choice1)
	{   case 'A':
		case 'a':
		{     int choice2;
		      
			cout<<endl<<" WHICH OPERATION YOU WANNA PERFORM"<<endl;
				cout<<endl<<" 1)INCREMENT";
             	cout<<endl<<" 2)DECREMENT"<<endl;
             	cout<<" YOUR CHOICE : ";
				cin>>choice2;
				switch(choice2)
				{  
					    case 1:
						{
							int num1;
							cout<<" ENTER A INTEGER :  ";
							cin>>num1;
							++num1;
							arrayoperation[n]="inc++";
							cout<<" YOUR ANSWER IS :"<<num1;
							arrayanswer[n]=num1;
							n++;
							cout<<endl<<" WANNA MAKE ANOTHER CALCULATION ? ";
							cin>>x;
							if(x=='y'||x=='Y')
							{
								goto label;
							}
							break;
						}
						case 2:
						{
							int num1;
							cout<<" ENTER A INTEGER : ";
							cin>>num1;
							--num1;
							arrayoperation[n]="dec--";
							cout<<" YOUR ANSWER IS :"<<num1;
							arrayanswer[n]=num1;
							n++;
							cout<<endl<<" WANNA MAKE ANOTHER CALCULATION ? ";
							cin>>x;
							if(x=='y'||x=='Y')
							{
								goto label;
							}
							break;
						}
					
					
				}
				break;		}   
				case 'B':
			case 'b':
		{     int choice3;
			cout<<" WHICH OPERATION YOU WANNA PERFORM"<<endl;
				cout<<endl<<" 1)MULTIPLY";
             	cout<<endl<<" 2)DIVIDE";
 				cout<<endl<<" 3)ADDITION";
				cout<<endl<<" 4)SUBTRACTION";
				cout<<endl<<" 5)MODULUS"<<endl;
				cout<<" YOUR CHOICE : ";
				cin>>choice3;

				switch(choice3)		
				{  double num2,num3;
				double answer;
					case 1:
						{
						
							cout<<" ENTER FIRST INTEGER : ";
							cin>>num2;
							cout<<endl<<" ENTER SECOND INTEGER : ";
							cin>>num3;
							answer=num2*num3;
							arrayoperation[n]="Mul";
							cout<<" YOUR ANSWER IS :"<<answer;
							arrayanswer[n]=answer;
							n++;
							cout<<endl<<" WANNA MAKE ANOTHER CALCULATION ? ";
							cin>>x;
							if(x=='y'||x=='Y')
							{
								goto label;
							}
							break;
						}
						case 2:
						{
							cout<<" ENTER FIRST INTEGER : ";
							cin>>num2;
							cout<<" ENTER SECOND INTEGER : ";
							cin>>num3;
							answer=num2/num3;
							arrayoperation[n]="div";
							cout<<" YOUR ANSWER IS :"<<answer;
							arrayanswer[n]=answer;
							n++;
							cout<<endl<<" WANNA MAKE ANOTHER CALCULATION ? ";
							cin>>x;
							if(x=='y'||x=='Y')
							{
								goto label;
							}
							break;
						}
						case 3:
						{
						cout<<" ENTER FIRST INTEGER : ";
							cin>>num2;
							cout<<" ENTER SECOND INTEGER : ";
							cin>>num3;
							answer=num2+num3;
							arrayoperation[n]="sum";
							cout<<" YOUR ANSWER IS :"<<answer;
							arrayanswer[n]=answer;
							n++;
							cout<<endl<<" WANNA MAKE ANOTHER CALCULATION ? ";
							cin>>x;
							if(x=='y'||x=='Y')
							{
								goto label;
							}
							break;
						}
						case 4:
						{
						    cout<<" ENTER FIRST INTEGER : ";
							cin>>num2;
							cout<<" ENTER SECOND INTEGER : ";
							cin>>num3;
							answer=num2-num3;
							arrayoperation[n]="sub";
							cout<<" YOUR ANSWER IS :"<<answer;
							arrayanswer[n]=answer;
							n++;
							cout<<endl<<" WANNA MAKE ANOTHER CALCULATION ? ";
							cin>>x;
							if(x=='y'||x=='Y')
							{
								goto label;
							}
							break;
						}
						case 5:{
							int num4,num5;
						    cout<<" ENTER FIRST INTEGER : ";
							cin>>num4;
							cout<<" ENTER SECOND INTEGER : ";
							cin>>num5;
							answer=num4%num5;
							arrayoperation[n]="mod";
							cout<<" YOUR ANSWER IS :"<<answer;
							arrayanswer[n]=answer;
							n++;
							cout<<endl<<" WANNA MAKE ANOTHER CALCULATION ? ";
							cin>>x;
							if(x=='y'||x=='Y')
							{
								goto label;
							}
							break;
						}
				}	        break;
			 }                  
				       case 'C':
	                   case 'c':
	                   	{  cout<<"YOUR HISTORY"<<endl;
	           	                   	
	                   		for(int i=0;i<n;i++ )
	                   		{
	                   	 cout<<i+1<<") OPERATOR USED : "<<arrayoperation[i]<<" | ANSWER : "<<arrayanswer[i];
							cout<<endl;    
	                   		}
	                   	
	                   		break;
	                   	}
	                   	case 'D':
	                    case 'd':
	                    {
	                    	cout<<endl<<" THANKS FOR USING OUR CALCULATOR!";
	                    break;
	                    default:
	                    	{
	                     cout<<" WRONG INPUT!";	
	                    	cout<<endl<<" WANNA MAKE ANOTHER CALCULATION ? ";
							cin>>x;
							if(x=='y'||x=='Y')
							{
								goto label;
							}
	                    	}
	               
	                    	}	
	}
}
	            

