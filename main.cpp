/*
    Program 1: Building
    
    Class: CS 141, Spring 2020.  Tues 4pm lab
    System: Devc++
    Author:Madhava Sai Yamike
*/
/* Expected output for 1
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
       ___
     o|M A|o
     o|D H|o
     o|A V|o
      \===/
       |1|
       |0|
       |A|
       |M|
     __|||__
   /   |S|  \
  /    |A|    \
 |     |I|     |
 \    (|||)   /
   |   |||   |
  /    |||    \
 /     |||     \
/      |||      \
|    [YAMIKE]   |
 \             /
  '.         .'
    '-------'

*/

#include <iostream>//for cin and cout
#include <iomanip>//for setw() and setfill()
using namespace std;//for not using ::std in everyline


int main() //main function
{
	int choice;//for chosing from the options
	int loop = 0;//for running the loop required to pass the test
	cout << "Choose from among the following options:  \n" //print
	     << "1. Display original graphic  \n"
	     << "2. Display building          \n"
	     << "3. Exit the program          \n"
	     << "Your choice -> " << endl;
	cin>>choice;//inputting the value by the user
	if (choice == 3) //to exit the program by user
	{
		exit(0);
	}
	else if (choice == 1)//for ASCII image
	{
	while (loop <= 30)//to run the $ as loop
	{
		cout<<"$"; //cout statements
		loop +=1;//increment
	}
	cout<<endl;//filler space
	cout<<"       ___"<<endl;
    cout<<"     o|M A|o"<<endl;
    cout<<"     o|D H|o"<<endl;
    cout<<"     o|A V|o"<<endl;
    cout<<"      \\===/"<<endl;
    cout<<"       |1|"<<endl;
    cout<<"       |0|"<<endl;
    cout<<"       |A|"<<endl;
    cout<<"       |M|"<<endl;
    cout<<"     __|||__"<<endl;
    cout<<"   /   |S|  \\"<<endl;
    cout<<"  /    |A|    \\"<<endl;
    cout<<" |     |I|     |"<<endl;
    cout<<" \\    (|||)   /"<<endl;
    cout<<"   |   |||   |"<<endl;
    cout<<"  /    |||    \\"<<endl;
    cout<<" /     |||     \\"<<endl;
    cout<<"/      |||      \\"<<endl;
    cout<<"|    [YAMIKE]   |"<<endl;
    cout<<" \\             /"<<endl;
    cout<<"  '.         .'"<<endl;
    cout<<"    '-------'"<<endl;
    //guitar printed successfully
	}

 else if(choice == 2)// to print the building
 {

int sectionRequests;// input of sections by user
int sectionCounter = 1;// to count the sections in the loop
int snipets = 1;// to count every snipet in the line inside the section counter loop
cout<<"Number of building sections -> ";
    cin>>sectionRequests;// user input of sections
    cout<<endl;
   
    int basicSpacing = (sectionRequests + 2);// spacing for setw()
    int introSpacing = (sectionRequests + 1);// spacing for the roof
    	cout<<setw( introSpacing)<<" "<<" /\\"<<endl;// roof printing
    	cout<<setw( introSpacing)<<" "<<" ||"<<endl;
    	cout<<setw( introSpacing)<<" "<<" ||"<<endl;
    	cout<<setw( introSpacing)<<" "<<" --"<<endl;
	    cout<<setw( introSpacing)<<" "<<"|++|"<<endl;
		cout<<setw( introSpacing)<<" "<<"===="<<endl;
while (sectionCounter<=sectionRequests)// loop for sections
{
	int	middleSpacing = ((sectionCounter-1)*2+(1));// spacing between / and \ and created inside the loop for updating the variable every single time
	for (snipets =1; snipets <= (sectionCounter * 2)/2; snipets++)
{
	cout<<setfill(' ');// setfill() for space
	cout<<setw( basicSpacing)<<"|"<<setfill(':')<<setw( snipets)<<"\\"<<setw( middleSpacing)<<"/"<<setw( snipets)<<"|"<<endl;// main cout statement for top part of section

if (middleSpacing >= 0)// middle spacing decrement until middle spacing reached zero
	{
	middleSpacing = middleSpacing - 2;// decrementing
	}

}

	for (snipets = (sectionCounter * 2)/2; snipets > 0  ; snipets--)// for loop for bottom part of section
	{
		cout<<setfill(' ');// setfill for space
		cout<<setw( basicSpacing)<<"|"<<setfill(':')<<setw( snipets)<<"/"<<setw(middleSpacing+2)<<"\\"<<setw( snipets)<<"|"<<endl;// main cout statement for bottom part of section

	if (middleSpacing <=(sectionCounter * 2) )// middle spacing increment 
		{
			middleSpacing = middleSpacing + 2;// incrementing 
		}
	}	


	basicSpacing--;//decrementing 
	sectionCounter++;// incrementing

if (sectionCounter > 1)// for dash basement 
	{
		cout<<setw( basicSpacing+1)<<setfill(' ')<<"/";// cout statement for /
		for (int dash = 1; dash<= ((sectionCounter*2)-2); dash++)// loop for dashes between / and \ after every section
		{
		cout<<"-";
		}
		cout<<"\\"<<endl;
	}
}
	int k = 0;// for dots basement 
	cout<<setw( basicSpacing);
	while (k<(sectionCounter*2)+2)// for printing dots at the end 
	{
		cout<<".";
		k++;
	}
	cout<<endl;

	int plus = 0;// for + basement 

	while (plus<(sectionCounter*2)+4)// for printing + at the end
	{
		cout<<"+";
		plus++;
	}
	cout<<endl;
	}
cout<<endl;
	
return 0;// c++ wants us to return 0   
}


