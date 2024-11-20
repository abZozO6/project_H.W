  /*
  This program extracts the names and marks of students from a file so that the highest mark is 100
   Developed by : Abdalazeez Abu awed
  */
  
  
  #include <iostream>
  #include<string>
  #include <fstream>
  using namespace std;

  int main ()
  {
 string firstName; 
 string lastName; 
 int Marker; 
 char grade =' '; 
 int sum = 0; 
 int num = 0;
 ifstream infile;
 ofstream outfile;

 

while(true)
{
  infile.open("C:\\Users\\Admin\\Desktop\\pop\\class_garde.txt",ios::app);
 if (!infile)
 {
 cout <<"cannot open input file" <<endl;
    break;
 }
  outfile.open("C:\\Users\\Admin\\Desktop\\pop\\class_garde.txt",ios::app);

  infile>>firstName>>lastName;
  infile >>Marker;

  while(infile)
  {
    sum +=Marker;
    num++;

    switch(Marker/10 )
    {
      case 1:
      case 2:
      case 3:
      case 4:
     grade ='F';
      break;
      case 5:
     grade ='E';
      break;
      case 6:
      case 7:
      grade ='D';
      break;
      case 8:
     grade  ='C';
      break;
      case 9:
      grade  = 'B';
      break;
      case 10:
      grade ='A';
      break;
      default:
      cout<<" Error Grade " <<endl;
    }
    outfile << firstName << " " << lastName <<" " << Marker << "\""<<grade << "\"";
    outfile<<endl;
    

     infile >> firstName >> lastName;
     infile >> Marker;


    }
   
      outfile << endl;
        if (num!= 0)
            outfile << "Class Average: " << sum / num << endl;
        else
            outfile << " No thing" << endl;

            infile.close();
            outfile.close();

            break;
  }

 return 0;
  }