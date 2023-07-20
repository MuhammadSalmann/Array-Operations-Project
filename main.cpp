#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

class Array {
	int Size, Used;
	int* Index;
	
	public:
		Array() {  Size = Used = 0;   Index = new int;   *Index = 0; }
	    ~Array() { delete[] Index; }
		
		void Create() {
			cout<<"\n\n       DATA ENTRY         \n";
			cout<<"______________________________\n";
			cout<<"\n Size of Array =      ";     cin>>Size;     
			if(Size <= 0) {
				cout<<"\t\t\t\t\t________________________________"<<endl;
		        cout<<"\t\t\t\t\t|                              |"<<endl;
				cout<<"\t\t\t\t\t|    Size Should be Greater    |"<<endl;
				cout<<"\t\t\t\t\t|______________________________|"<<endl;
				getch();  system("cls");  Create();  }
			else {
				cout<<"\n Size You Want =      ";     cin>>Used;  Index = new int[Size];  
				if(Used > Size || Used <= 0) {
					cout<<"\t\t\t\t\t________________________________"<<endl;
		        	cout<<"\t\t\t\t\t|                              |"<<endl;
					cout<<"\t\t\t\t\t|    Size Should be Greater    |"<<endl;
					cout<<"\t\t\t\t\t|______________________________|"<<endl; 
					getch();  system("cls");  Create();  
				}
				else {
					cout<<"\n______________________________\n";
			    	for(int i = 0; i < Used; i++) {
				    	cout<<"\nEnter the "<<i+1<<" Element = ";   cin>>Index[i];
			    	}
				}
			system("cls");
			}
		}
		
	void DisplayMenu() {
		if(Size==0) {   cout<<"\t\t\t\t\t________________________________"<<endl;
		            	cout<<"\t\t\t\t\t|                              |"<<endl;
						cout<<"\t\t\t\t\t|      Array Not Created!      |"<<endl;
						cout<<"\t\t\t\t\t|______________________________|"<<endl;  getch(); system("cls");  }
		else {
			int choice;
			do{	
			cout<<"\n\n\tXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"  
		        "\n\t\t\t\t\t________________________________"
		        "\n\t\t\t\t\t|                              |"
				"\n\t\t\t\t\t|             Menu             |"
				"\n\t\t\t\t\t|______________________________|"
		        "\n\n\tXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
				"\n\t\t\t\t\t     _______________________"
				"\n\t\t\t\t\t    |                       |"
				"\n\t\t\t\t\t    | 1->  SIMPLE TRAVERSE  |"
				"\n\t\t\t\t\t    | 2->  EVEN TRAVERSE    |"
				"\n\t\t\t\t\t    | 3->  ODD TRAVERSE     |"
				"\n\t\t\t\t\t    | 4->  REVERSE TRAVERSE |"
				"\n\t\t\t\t\t    | 5->  ASCENDING ORDER  |"
				"\n\t\t\t\t\t    | 6->  DESCENDING ORDER |"
				"\n\t\t\t\t\t    | 7->  EXIT             |"
				"\n\t\t\t\t\t    | 8->  MAIN MENU        |"
				"\n\t\t\t\t\t    |_______________________|"
		        "\n\n\tXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n\n"        
		        "\t\t\t\t\t\t    Choice =      ";    cin>>choice;  cin.clear();   fflush(stdin);   system("cls");
					  switch(choice) {
					  			case 1:  Traverse();  system("cls");    break;
								    
								    case 2:   EvenTraverse();  break;
								    
								        case 3:  OddTraverse();   break;
								        
								            case 4:  RevTraverse();   break;
								            
								                case 5:  Ascending();     break;
								               
								               		case 6:  Descending();    break;
								    
														case 7:   exit(0) ;      break;
									  
					default:  if(choice != 8) { cout<<"\n\tXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"                             
		          								"\n\t\t\t\t\t_____________________________________"
		          								"\n\t\t\t\t\t| Error!                            |"
				 								"\n\t\t\t\t\t|          INVALID INPUT!           |"
							 					"\n\t\t\t\t\t|___________________________________|"
				           					    "\n\n\tXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n";      
				                				getch();  system("cls");      }
					  } 
			}while(choice != 8);
		}
	}
	
	void Length() {
		    cout<<endl<<endl;
			cout<<"\t\t\t\t______________________________________________"<<endl;
			cout<<"\t\t\t\t|_____________________|______________________|"<<endl;
			cout<<"\t\t\t\t|     TOTAL SIZE      |"<<setw (20)<<Size<<"  |"<<endl;       
			cout<<"\t\t\t\t|  OBTAINED SIZE      |"<<setw (20)<<Used<<"  |"<<endl; 
			cout<<"\t\t\t\t| REMAINING SIZE      |"<<setw (20)<<Size-Used<<"  |"<<endl;
			cout<<"\t\t\t\t|____________________________________________|"<<endl;    getch();   system("cls");
	}
		
	void Traverse() {
		    cout<<endl<<endl;
			cout<<"\t\t\t\t\t    _________________\n"
			      "\t\t\t\t\t    |    VALUES     |\n"
			      "\t\t\t\t\t    |_______________|\n\n";
			cout<<"\t\t\t\t\t__________________________\n";
		for(int i = 0; i < Used; i++) {
			cout<<"\t\t\t\t\t|    Index No. "<<i<<"   | "<<setw(4)<<Index[i]<<"|"<<endl;  }
			cout<<"\t\t\t\t\t|__________________|_____|\n";
		getch();   
	}
	
	void EvenTraverse() {
			cout<<"\t\t\t\t\t   _________________\n"
			      "\t\t\t\t\t   |    VALUES     |\n"
			      "\t\t\t\t\t   |_______________|\n\n";
			cout<<"\t\t\t\t\t__________________________\n";
		for(int i = 0; i < Used; i++) {
			if(i % 2 == 0) {
			cout<<"\t\t\t\t\t|    Index No. "<<i<<"   | "<<setw(4)<<Index[i]<<"|"<<endl;  }
		    cout<<"\t\t\t\t\t|__________________|_____|\n";
		}
		getch();  system("cls"); 
	}
	
	void OddTraverse() {
			cout<<"\t\t\t\t\t   _________________\n"
			      "\t\t\t\t\t   |    VALUES     |\n"
			      "\t\t\t\t\t   |_______________|\n\n";
		for(int i = 1; i < Used; i++) {
			if(i % 2 != 0) {
				cout<<"\t\t\t\t\t__________________________\n";
				cout<<"\t\t\t\t\t|    Index No. "<<i<<"   | "<<setw(4)<<Index[i]<<"|"<<endl; 
		    	cout<<"\t\t\t\t\t|__________________|_____|\n";
		    }
		}
		getch();  system("cls"); 
	}
	
	void RevTraverse() {
			cout<<"\t\t\t\t\t   _________________\n"
			      "\t\t\t\t\t   |    VALUES     |\n"
			      "\t\t\t\t\t   |_______________|\n\n";
			cout<<"\t\t\t\t\t__________________________\n";
		for(int i = Used-1; i >= 0; i--) {	
			cout<<"\t\t\t\t\t|    Index No. "<<i<<"   | "<<setw(4)<<Index[i]<<"|"<<endl;	}
			cout<<"\t\t\t\t\t|__________________|_____|\n";
			getch();  system("cls"); 
	}
	
	void Ascending() {
		int temp; 
		int* Asd = new int[Size];
		for(int i = 0; i < Used; i++) {
			Asd[i] = Index[i];
		}
			cout<<"\t\t\t\t\t    _________________\n"
			      "\t\t\t\t\t    |    VALUES     |\n"
			      "\t\t\t\t\t    |_______________|\n\n";
			cout<<"\t\t\t\t\t__________________________\n";
		for(int i = 0; i < Used; i++) {
			for(int j = i+1; j < Used; j++) {
				if( Asd[i] > Asd[j] ) {
					temp = Asd[i];
					Asd[i] = Asd[j];
					Asd[j] = temp;
				}
			}
		}
			for(int i = 0; i < Used; i++) {
			cout<<"\t\t\t\t\t|    Index No. "<<i<<"   | "<<setw(4)<<Asd[i]<<"|"<<endl;  }
			cout<<"\t\t\t\t\t|__________________|_____|\n";
		getch();   system("cls");   delete[] Asd;
	}
	
	void Descending() {
		int temp;
		int* Dsd = new int[Size];
		for(int i = 0; i < Used; i++) {
			Dsd[i] = Index[i];
		}
			cout<<"\t\t\t\t\t    _________________\n"
			      "\t\t\t\t\t    |    VALUES     |\n"
			      "\t\t\t\t\t    |_______________|\n\n";
			cout<<"\t\t\t\t\t__________________________\n";
		for(int i = 0; i < Used; i++) {
			for(int j = i+1; j < Used; j++) {
				if( Dsd[i] < Dsd[j] ) {
					temp = Dsd[i];
					Dsd[i] = Dsd[j];
					Dsd[j] = temp;
				}
			}
		}
			for(int i = 0; i < Used; i++) {
			cout<<"\t\t\t\t\t|    Index No. "<<i<<"   | "<<setw(4)<<Dsd[i]<<"|"<<endl;  }
			cout<<"\t\t\t\t\t|__________________|_____|\n";
		getch();   system("cls");   delete[] Dsd;
	}
		
	void InsertionMenu() {
		if(Used >= Size) {  cout<<"\t\t\t\t\t________________________________"<<endl;
		            		cout<<"\t\t\t\t\t|                              |"<<endl;
							cout<<"\t\t\t\t\t|      No Space In Array!      |"<<endl;
							cout<<"\t\t\t\t\t|______________________________|"<<endl;  getch(); system("cls"); }
		else {
			int choice;
			do{
		  cout<<"\n\n\tXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"  
		        "\n\t\t\t\t\t________________________________"
		        "\n\t\t\t\t\t|                              |"
				"\n\t\t\t\t\t|             Menu             |"
				"\n\t\t\t\t\t|______________________________|"
		        "\n\n\tXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
				"\n\t\t\t\t\t      ______________________"
				"\n\t\t\t\t\t     |                      |"
				"\n\t\t\t\t\t     | 1->  START           |"
				"\n\t\t\t\t\t     | 2->  END             |"
				"\n\t\t\t\t\t     | 3->  SPECIFIC INSERT |"
				"\n\t\t\t\t\t     | 4->  EXIT            |"
				"\n\t\t\t\t\t     | 5->  MAIN MENU       |"
				"\n\t\t\t\t\t     |______________________|"
		        "\n\n\tXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n\n"        
		        "\t\t\t\t\t      Choice =      ";    cin>>choice; cin.clear();   fflush(stdin);  system("cls");
					  switch(choice) {
					  	
					  	case 1:   Insert(0);      Traverse();  
				                  system("cls");   break;
						
					  		case 2:    Insert(Used);   Traverse();  
							           system("cls");    break;
						  
					  			case 3:  Traverse();  
								int location;
    	                        cout<<"\nIndex for Insertion: ";  cin>>location; 
								Insert(location);   Traverse();  
								system("cls");   break;
								
					  				case 4:   exit(0) ; 
					  				
					default:  if(choice != 5) { cout<<"\n\tXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"                             
		          								"\n\t\t\t\t\t_____________________________________"
		          								"\n\t\t\t\t\t| Error!                            |"
				 								"\n\t\t\t\t\t|          INVALID INPUT!           |"
							 					"\n\t\t\t\t\t|___________________________________|"
				           					    "\n\n\tXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n";      
				                				getch(); system("cls");  } 
					  } 
			}while(choice != 5);
		}
    }

    void Insert(int location) {
    	if(location > Used)   { cout<<"\t\t\t\t\t________________________________"<<endl;
		            			cout<<"\t\t\t\t\t|                              |"<<endl;
								cout<<"\t\t\t\t\t|       Invalid Location!      |"<<endl;
								cout<<"\t\t\t\t\t|______________________________|"<<endl;   }
    	else {
    		int value;
			cout<<"\nEnter the Value: ";   cin>>value; 
			Used++;     
    	for(int i = Used-1; i >= location; i--) {
    		Index[i+1] = Index[i];
		}
		Index[location] = value;
								cout<<"\t\t\t\t\t________________________________"<<endl;
		            			cout<<"\t\t\t\t\t|                              |"<<endl;
								cout<<"\t\t\t\t\t|     Operation Successful!    |"<<endl;
								cout<<"\t\t\t\t\t|______________________________|"<<endl;   
	    }
	    getch();  
	}

	void DeletionMenu() {
        if(Size==0) {   cout<<"\t\t\t\t\t________________________________"<<endl;
		            	cout<<"\t\t\t\t\t|                              |"<<endl;
						cout<<"\t\t\t\t\t|      Array Not Created!      |"<<endl;
						cout<<"\t\t\t\t\t|______________________________|"<<endl;  getch(); system("cls"); }
		else{
			int choice;
			do{
		  cout<<"\n\n\tXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"  
		        "\n\t\t\t\t\t________________________________"
		        "\n\t\t\t\t\t|                              |"
				"\n\t\t\t\t\t|             Menu             |"
				"\n\t\t\t\t\t|______________________________|"
		        "\n\n\tXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
				"\n\t\t\t\t\t      ______________________"
				"\n\t\t\t\t\t     |                      |"
				"\n\t\t\t\t\t     | 1->  START           |"
				"\n\t\t\t\t\t     | 2->  END             |"
				"\n\t\t\t\t\t     | 3->  SPECIFIC DELETE |"
				"\n\t\t\t\t\t     | 4->  EXIT            |"
				"\n\t\t\t\t\t     | 5->  MAIN MENU       |"
				"\n\t\t\t\t\t     |______________________|"
		        "\n\n\tXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n\n"        
		        "\t\t\t\t\t      Choice =      ";    cin>>choice;  cin.clear();   fflush(stdin);  system("cls");
					  switch(choice) {
					  	
					  	case 1:   Delete(0);      Traverse();  
						          system("cls");    break;
						
					  		case 2:    Delete(Used-1);   Traverse();  
							           system("cls");    break;
						  
					  			case 3: Traverse();  
								    int location;
    	                            cout<<"\nIndex for Deletion: ";  cin>>location; 
								    Delete(location);    Traverse();  
									system("cls");   break;
								
					  				case 4:   exit(0) ;  break;
					  				
					default:  if(choice != 5) { cout<<"\n\tXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"                             
		          								"\n\t\t\t\t\t_____________________________________"
		          								"\n\t\t\t\t\t| Error!                            |"
				 								"\n\t\t\t\t\t|          INVALID INPUT!           |"
							 					"\n\t\t\t\t\t|___________________________________|"
				           					    "\n\n\tXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n";      
				                				getch(); system("cls");   } 
					  } 
			}while(choice != 5);
		}
    }
    
    void Delete(int location) {
		if(location >= Used)  { cout<<"\t\t\t\t\t________________________________"<<endl;
		            			cout<<"\t\t\t\t\t|                              |"<<endl;
								cout<<"\t\t\t\t\t|       Invalid Location!      |"<<endl;
								cout<<"\t\t\t\t\t|______________________________|"<<endl;   }
		else {
    	for(int i = location; i < Used-1; i++) {  
    		Index[i] = Index[i+1];
		}
	    	Used--;   
								cout<<"\t\t\t\t\t________________________________"<<endl;
		            			cout<<"\t\t\t\t\t|                              |"<<endl;
								cout<<"\t\t\t\t\t|     Operation Successful!    |"<<endl;
								cout<<"\t\t\t\t\t|______________________________|"<<endl;  
	    }
	    getch();  
	}
    
    void UpdateMenu() {
        if(Size == 0) { cout<<"\t\t\t\t\t________________________________"<<endl;
		                cout<<"\t\t\t\t\t|                              |"<<endl;
						cout<<"\t\t\t\t\t|      Array Not Created!      |"<<endl;
						cout<<"\t\t\t\t\t|______________________________|"<<endl;  getch(); system("cls"); }
		else {
			int choice;
			do{		
			cout<<"\n\n\tXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"  
		        "\n\t\t\t\t\t________________________________"
		        "\n\t\t\t\t\t|                              |"
				"\n\t\t\t\t\t|             Menu             |"
				"\n\t\t\t\t\t|______________________________|"
		        "\n\n\tXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
				"\n\t\t\t\t\t     ______________________"
				"\n\t\t\t\t\t    |                      |"
				"\n\t\t\t\t\t    | 1->  BY LOCATION     |"
				"\n\t\t\t\t\t    | 2->  BY VALUE        |"
				"\n\t\t\t\t\t    | 3->  EXIT            |"
				"\n\t\t\t\t\t    | 4->  MAIN MENU       |"
				"\n\t\t\t\t\t    |______________________|"
		        "\n\n\tXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n\n"        
		        "\t\t\t\t\t      Choice =      ";    cin>>choice;   cin.clear();   fflush(stdin);   system("cls");
					  switch(choice) {
					  			case 1:  Traverse();   
								    int location;
    	                            cout<<"\nIndex for Updation: ";  cin>>location; 
								    Update(location);    Traverse();  
									system("cls");   break;
								    
								    case 2: Traverse();    UpdateByValue();    Traverse();  
									        system("cls");  break;
					  				
									    case 3:   exit(0) ;  break;
									    
					default:  if(choice != 4) { cout<<"\n\tXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"                             
		          								"\n\t\t\t\t\t_____________________________________"
		          								"\n\t\t\t\t\t| Error!                            |"
				 								"\n\t\t\t\t\t|          INVALID INPUT!           |"
							 					"\n\t\t\t\t\t|___________________________________|"
				           					    "\n\n\tXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n";      
				                				getch();  system("cls");  } 
					  } 
			}while(choice != 4);
		}
    }
    
    void Update(int location) {
		if(location >= Used || location < 0)  { 
								cout<<"\t\t\t\t\t________________________________"<<endl;
		            			cout<<"\t\t\t\t\t|                              |"<<endl;
								cout<<"\t\t\t\t\t|       Invalid Location!      |"<<endl;
								cout<<"\t\t\t\t\t|______________________________|"<<endl;  }
		else {
    	    int value;  
			cout<<"\nEnter the Value: ";   cin>>value; 
    		Index[location] = value;
    							cout<<"\t\t\t\t\t________________________________"<<endl;
		            			cout<<"\t\t\t\t\t|                              |"<<endl;
								cout<<"\t\t\t\t\t|     Operation Successful!    |"<<endl;
								cout<<"\t\t\t\t\t|______________________________|"<<endl;  
	    }
	    getch(); 
	}
	
	void UpdateByValue() {
		int* Update = new int[Size]; 
    	int value=0, newvalue=0, index=0, flag=0;  
		cout<<"\nEnter the Value to Update in Array: ";   cin>>value; 
    	for(int i=0; i < Used; i++) {
           	if(value == Index[i]) {
                cout<<"\nValue Found on Index#"<<i;    flag++;  
                index = i;
                Update[flag] = i;   
                continue;
            }
        }  
        if(flag==0) {           cout<<"\t\t\t\t\t________________________________"<<endl;
		            			cout<<"\t\t\t\t\t|                              |"<<endl;
								cout<<"\t\t\t\t\t|       Invalid Location!      |"<<endl;
								cout<<"\t\t\t\t\t|______________________________|"<<endl;   }
        
        else if(flag == 1) {
        	cout<<"\nEnter the Value: ";   cin>>newvalue;
			Index[index] = newvalue; 
								cout<<"\t\t\t\t\t________________________________"<<endl;
		            			cout<<"\t\t\t\t\t|                              |"<<endl;
								cout<<"\t\t\t\t\t|     Operation Successful!    |"<<endl;
								cout<<"\t\t\t\t\t|______________________________|"<<endl;  
		}
        
        else if(flag > 1) {
        	int choice;
        	do{
        		cout<<"\n\n\tXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"  
				"\n\t\t\t\t\t      ______________________"
				"\n\t\t\t\t\t     |                      |"
				"\n\t\t\t\t\t     | 1->  SPECIFIC VALUES |"
				"\n\t\t\t\t\t     | 2->  ON ALL          |"
				"\n\t\t\t\t\t     |______________________|"
		        "\n\n\tXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n\n"        
		        "\t\t\t\t\t      Choice =      ";    cin>>choice;     cin.clear();   fflush(stdin);
        		      switch(choice) {
        		      	    case 1:    
							    int index2;
        		      	        cout<<"On Which Index you want to paste: ";   cin>>index2;
        		      	    	for(int i=1;i<=flag;i++) {
        							if(index2 == Update[i]) {
        								index = index2;
        								break;
		   	   						}
		   	   						else if(i == flag) { 
										cout<<"\t\t\t\t\t________________________________"<<endl;
		            					cout<<"\t\t\t\t\t|                              |"<<endl;
										cout<<"\t\t\t\t\t|      NO RECORD FOUND !!!     |"<<endl;
										cout<<"\t\t\t\t\t|______________________________|"<<endl;  
										 flag=0;  }
		   	   					}
		   	   					if(flag!= 0) { 
		   	   							cout<<"Enter the Value: ";   cin>>newvalue;
										Index[index] = newvalue; 
										cout<<"\t\t\t\t\t________________________________"<<endl;
		            					cout<<"\t\t\t\t\t|                              |"<<endl;
										cout<<"\t\t\t\t\t|     Operation Successful!    |"<<endl;
										cout<<"\t\t\t\t\t|______________________________|"<<endl; 
								}		
        		      	        break;
        		      	    
        		      	        case 2:
        		      	        	cout<<"Enter the Value: ";   cin>>newvalue;
        		      	        	for(int i=0;i<Used;i++) {
		    						if(value == Index[i]) {
		    							Index[i] = newvalue; 
		        						cout<<"\t\t\t\t\t________________________________"<<endl;
		            					cout<<"\t\t\t\t\t|                              |"<<endl;
										cout<<"\t\t\t\t\t|      UPDATED VALUE At # "<<setw(2)<<i<<"   |"<<endl;
										cout<<"\t\t\t\t\t|______________________________|"<<endl;  
										continue;  
		    						}
								}
        		      	        break;
        		      	        
        		      	default:  cout<<"\n\tXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"                             
		          								"\n\t\t\t\t\t_____________________________________"
		          								"\n\t\t\t\t\t| Error!                            |"
				 								"\n\t\t\t\t\t|          INVALID INPUT!           |"
							 					"\n\t\t\t\t\t|___________________________________|"
				           					    "\n\n\tXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n";      
				                				getch(); system("cls"); 
					  }
			}while(choice > 2);
		}
		delete[] Update;
		getch();  
	}	
	
	void SwapMenu() {
        if(Size == 0) { 	cout<<"\t\t\t\t\t________________________________"<<endl;
		            		cout<<"\t\t\t\t\t|                              |"<<endl;
							cout<<"\t\t\t\t\t|      Array Not Created!      |"<<endl;
							cout<<"\t\t\t\t\t|______________________________|"<<endl;  getch(); system("cls"); }
        else if(Used < 2) { cout<<"\t\t\t\t\t________________________________"<<endl;
		             		cout<<"\t\t\t\t\t|                              |"<<endl;
							cout<<"\t\t\t\t\t|    INSUFFICIENT ELEMENTS!    |"<<endl;
							cout<<"\t\t\t\t\t|______________________________|"<<endl;  getch(); system("cls"); }
		else {
			int choice;
			do{
				cout<<"\n\n\tXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"  
		        "\n\t\t\t\t\t________________________________"
		        "\n\t\t\t\t\t|                              |"
				"\n\t\t\t\t\t|             Menu             |"
				"\n\t\t\t\t\t|______________________________|"
		        "\n\n\tXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
				"\n\t\t\t\t\t     ______________________"
				"\n\t\t\t\t\t    |                      |"
				"\n\t\t\t\t\t    | 1->  BY LOCATION     |"
				"\n\t\t\t\t\t    | 2->  BY VALUE        |"
				"\n\t\t\t\t\t    | 3->  EXIT            |"
				"\n\t\t\t\t\t    | 4->  MAIN MENU       |"
				"\n\t\t\t\t\t    |______________________|"
		        "\n\n\tXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n\n"        
		        "\t\t\t\t\t      Choice =      ";    cin>>choice;  cin.clear();   fflush(stdin);  system("cls");
					  switch(choice) {
					  			case 1:   Traverse();  	
								    int location1, location2;
    	                            cout<<"\nEnter First Index for Swapping: ";   cin>>location1;
								    cout<<"\nEnter Second Index for Swapping: ";  cin>>location2;  
								    Swap(location1, location2);  Traverse();  
									system("cls");    break;
								    
								    case 2: Traverse();   SwapByValue();   Traverse();  
									        system("cls");   break;
					  				
									    case 3:   exit(0) ;  break;
									    
					default:  if(choice != 4) { cout<<"\n\tXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"                             
		          								"\n\t\t\t\t\t_____________________________________"
		          								"\n\t\t\t\t\t| Error!                            |"
				 								"\n\t\t\t\t\t|          INVALID INPUT!           |"
							 					"\n\t\t\t\t\t|___________________________________|"
				           					    "\n\n\tXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n";      
				                				getch(); system("cls");   } 
					  } 
			}while(choice != 4);
		}
    }
    
    void Swap(int location1, int location2) {
    	if((location1 >= Used || location1 < 0) || (location2 >= Used || location2 < 0)) 
    	{   cout<<"\t\t\t\t\t________________________________"<<endl;
		    cout<<"\t\t\t\t\t|                              |"<<endl;
			cout<<"\t\t\t\t\t|      INVALID LOCATION!       |"<<endl;
			cout<<"\t\t\t\t\t|______________________________|"<<endl;  
		    }
		else {
    	    int temp;
    	    temp = Index[location1];
    	    Index[location1] = Index[location2];
    	    Index[location2] = temp;
    	    cout<<"\t\t\t\t\t________________________________"<<endl;
		    cout<<"\t\t\t\t\t|                              |"<<endl;
			cout<<"\t\t\t\t\t|     Operation Successful!    |"<<endl;
			cout<<"\t\t\t\t\t|______________________________|"<<endl; 
	    }
	    getch(); 
	}
	
	void SwapByValue() {
		int* Temp = new int[Size];
		int value1, value2, index1=0, index2=0, flag=0;
	    cout<<"Enter First Value For Swapping: ";   cin>>value1;
	    for(int i=0;i<Used;i++) {
	     	if(value1 == Index[i]) {
				cout<<"Value found on Index#"<<i<<endl;  flag++;
				index1 = i;
				Temp[flag] = i;
				continue;  
		    }
    	}   
    	if(flag == 0) { 	cout<<"\t\t\t\t\t________________________________"<<endl;
		            		cout<<"\t\t\t\t\t|                              |"<<endl;
							cout<<"\t\t\t\t\t|      NO RECORD FOUND !!!     |"<<endl;
							cout<<"\t\t\t\t\t|______________________________|"<<endl;  
							 }
    	
    	else if(flag > 1) {
    		int index_1;
    		cout<<"\nEnter the Index you want: ";  cin>>index_1;
    		for(int i=1;i<=flag;i++) {
				if(index_1 == Temp[i]) {  index1 = index_1;   break; }
				else if(i == flag) { cout<<"\t\t\t\t\t________________________________"<<endl;
		            				 cout<<"\t\t\t\t\t|                              |"<<endl;
									 cout<<"\t\t\t\t\t|      NO RECORD FOUND !!!     |"<<endl;
									 cout<<"\t\t\t\t\t|______________________________|"<<endl;  
									   flag=0; }
			}
		}
	
	    if(flag != 0) {
	    	int* Temp2 = new int[Size];
			int flag2=0;
			cout<<"Enter Second Value For Swapping: ";   cin>>value2;
			for(int i=0;i<Used;i++) {
		    	if(value2 == Index[i]) {
		        	cout<<"Value found on Index#"<<i<<endl;  flag2++;
		        	index2 = i;
		        	Temp2[flag2] = i;
					continue;  
		    	}
		    }  
		    if(flag2 == 0) {    cout<<"\t\t\t\t\t________________________________"<<endl;
		            			cout<<"\t\t\t\t\t|                              |"<<endl;
								cout<<"\t\t\t\t\t|      NO RECORD FOUND !!!     |"<<endl;
								cout<<"\t\t\t\t\t|______________________________|"<<endl;  
								 }
		
		    else if(flag2 > 1) {
				int index_2;
    			cout<<"\n\nEnter the Index you want: ";  cin>>index_2;
				for(int i=1;i<=flag2;i++) {
				    if(index_2 == Temp2[i]) {  index2 = index_2;   break; }
				    else if(i == flag2) {   cout<<"\t\t\t\t\t________________________________"<<endl;
		            						cout<<"\t\t\t\t\t|                              |"<<endl;
											cout<<"\t\t\t\t\t|      NO RECORD FOUND !!!     |"<<endl;
											cout<<"\t\t\t\t\t|______________________________|"<<endl;  
											  flag2=0; }
			        }   		
	        	}
				
			if(flag >= 1 && flag2 >= 1) { 
				int temp;
            	temp = Index[index1];
    	    	Index[index1] = Index[index2];
    	    	Index[index2] = temp;
    	    	cout<<"\t\t\t\t\t________________________________"<<endl;
		        cout<<"\t\t\t\t\t|                              |"<<endl;
				cout<<"\t\t\t\t\t|     Operation Successful!    |"<<endl;
				cout<<"\t\t\t\t\t|______________________________|"<<endl; 
			}
			delete[] Temp, Temp2;	
			getch();  
        }
	}
	
	void CopyMenu() {
		if(Size == 0) { 	cout<<"\t\t\t\t\t________________________________"<<endl;
		            		cout<<"\t\t\t\t\t|                              |"<<endl;
							cout<<"\t\t\t\t\t|      Array Not Created!      |"<<endl;
							cout<<"\t\t\t\t\t|______________________________|"<<endl;  getch(); system("cls"); }
		else if(Used < 2) { cout<<"\t\t\t\t\t________________________________"<<endl;
		             		cout<<"\t\t\t\t\t|                              |"<<endl;
							cout<<"\t\t\t\t\t|    INSUFFICIENT ELEMENTS!    |"<<endl;
							cout<<"\t\t\t\t\t|______________________________|"<<endl;  getch();  system("cls");  }
		else {
			int choice;
			do{
			cout<<"\n\n\tXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"  
		        "\n\t\t\t\t\t________________________________"
		        "\n\t\t\t\t\t|                              |"
				"\n\t\t\t\t\t|             Menu             |"
				"\n\t\t\t\t\t|______________________________|"
		        "\n\n\tXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
				"\n\t\t\t\t\t     ______________________"
				"\n\t\t\t\t\t    |                      |"
				"\n\t\t\t\t\t    | 1->  BY LOCATION     |"
				"\n\t\t\t\t\t    | 2->  BY VALUE        |"
				"\n\t\t\t\t\t    | 3->  EXIT            |"
				"\n\t\t\t\t\t    | 4->  MAIN MENU       |"
				"\n\t\t\t\t\t    |______________________|"
		        "\n\n\tXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n\n"        
		        "\t\t\t\t\t      Choice =      ";    cin>>choice;  cin.clear();   fflush(stdin);  system("cls");
					  switch(choice) {
					  			case 1:   Traverse();   
								    int location;
    	                            cout<<"\nIndex to Copy: ";  cin>>location; 
								    Copy(location);     Traverse();  
									system("cls");     break;
								    
								    case 2: Traverse();   CopyByValue();  Traverse();  
									        system("cls");  break;
					  				
									  case 3:   exit(0);  break;
									  
					default:  if(choice != 4) { cout<<"\n\tXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"                             
		          								"\n\t\t\t\t\t_____________________________________"
		          								"\n\t\t\t\t\t| Error!                            |"
				 								"\n\t\t\t\t\t|          INVALID INPUT!           |"
							 					"\n\t\t\t\t\t|___________________________________|"
				           					    "\n\n\tXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n";      
				                				getch(); system("cls");   } 
					  } 
			}while(choice != 4);
		}
    }
	
	void Copy(int location) {
		if(location >= Used || location < 0)  {  
					cout<<"\t\t\t\t\t________________________________"<<endl;
	    			cout<<"\t\t\t\t\t|                              |"<<endl;
					cout<<"\t\t\t\t\t|      NO RECORD FOUND !!!     |"<<endl;
					cout<<"\t\t\t\t\t|______________________________|"<<endl;  }
		else {
    	    int paste;  
			cout<<"\nIndex to Paste: ";   cin>>paste; 
			if(paste < Used) {
				Index[paste] = Index[location];
    				cout<<"\t\t\t\t\t________________________________"<<endl;
		        	cout<<"\t\t\t\t\t|                              |"<<endl;
					cout<<"\t\t\t\t\t|     Operation Successful!    |"<<endl;
					cout<<"\t\t\t\t\t|______________________________|"<<endl;     	
			}
			else {  cout<<"\t\t\t\t\t________________________________"<<endl;
		            cout<<"\t\t\t\t\t|                              |"<<endl;
					cout<<"\t\t\t\t\t|      NO RECORD FOUND !!!     |"<<endl;
					cout<<"\t\t\t\t\t|______________________________|"<<endl;  } 
	    }
	    getch();   
	}
	
	void CopyByValue() {
		int copy, paste, index1=0, index2=0, flag=0;
	    cout<<"Which value you want to copy: ";   cin>>copy;
	    for(int i=0;i<Used;i++) {
	     	if(copy == Index[i]) {
				flag++;
				index1 = i;
				continue;  
		    }
    	}
    	if(flag == 0) {     cout<<"\t\t\t\t\t________________________________"<<endl;
		            		cout<<"\t\t\t\t\t|                              |"<<endl;
							cout<<"\t\t\t\t\t|      NO RECORD FOUND !!!     |"<<endl;
							cout<<"\t\t\t\t\t|______________________________|"<<endl;  }
	
	    if(flag != 0) {
        	int* Copy = new int[Size];
			int flag2=0;
			cout<<"On Which value you want to Paste: ";   cin>>paste;
			for(int i=0;i<Used;i++) {
		    	if(paste == Index[i]) {
		        	cout<<"Value found on Index#"<<i<<endl;  flag2++;
		        	index2 = i;
					Copy[flag2] = i;
					continue;  
		    	}
		}   
		if(flag2 == 0) {    cout<<"\t\t\t\t\t________________________________"<<endl;
		            		cout<<"\t\t\t\t\t|                              |"<<endl;
							cout<<"\t\t\t\t\t|      NO RECORD FOUND !!!     |"<<endl;
							cout<<"\t\t\t\t\t|______________________________|"<<endl;    }
		
		else if(flag2 == 1) { 
			    Index[index2] = Index[index1]; 
		     	cout<<"\t\t\t\t\t________________________________"<<endl;
		        cout<<"\t\t\t\t\t|                              |"<<endl;
				cout<<"\t\t\t\t\t|     Operation Successful!    |"<<endl;
				cout<<"\t\t\t\t\t|______________________________|"<<endl;  
		}
		
		else if(flag2 > 1) {
			int choice;
			do{
				cout<<"\n\n\tXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"  
				"\n\t\t\t\t\t      ______________________"
				"\n\t\t\t\t\t     |                      |"
				"\n\t\t\t\t\t     | 1->  SPECIFIC VALUES |"
				"\n\t\t\t\t\t     | 2->  ON ALL          |"
				"\n\t\t\t\t\t     |______________________|"
		        "\n\n\tXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n\n"        
		        "\t\t\t\t\t      Choice =      ";    cin>>choice;   cin.clear();   fflush(stdin);
				switch(choice) {
					case 1:   int index_2;
									cout<<"On Which Index you want to paste: ";  cin>>index_2;
										for(int i=1;i<=flag2;i++) {
										if(index_2 == Copy[i]) {
											index2 = index_2; 
											break;
											}
											else if(i == flag2) { cout<<"\t\t\t\t\t________________________________"<<endl;
		            											  cout<<"\t\t\t\t\t|                              |"<<endl;
																  cout<<"\t\t\t\t\t|      NO RECORD FOUND !!!     |"<<endl;
																  cout<<"\t\t\t\t\t|______________________________|"<<endl;  
															      flag=0;    }
										}
												if(flag != 0  && flag2 != 0) { 
													Index[index2] = Index[index1]; 
													cout<<"\t\t\t\t\t________________________________"<<endl;
		        									cout<<"\t\t\t\t\t|                              |"<<endl;
													cout<<"\t\t\t\t\t|     Operation Successful!    |"<<endl;
													cout<<"\t\t\t\t\t|______________________________|"<<endl; 
												}
									break;
					
						case 2:
							for(int i=0;i<Used;i++) {
		    					if(paste == Index[i]) {
		    						Index[i] = copy; 
		        					cout<<"\t\t\t\t\t________________________________"<<endl;
		            				cout<<"\t\t\t\t\t|                              |"<<endl;
									cout<<"\t\t\t\t\t|       COPIED VALUE At # "<<setw(2)<<i<<"   |"<<endl;
									cout<<"\t\t\t\t\t|______________________________|"<<endl;   
									continue;  
		    					}
							}
									break;
						
						default:  cout<<"\n\tXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"                             
		          								"\n\t\t\t\t\t_____________________________________"
		          								"\n\t\t\t\t\t| Error!                            |"
				 								"\n\t\t\t\t\t|          INVALID INPUT!           |"
							 					"\n\t\t\t\t\t|___________________________________|"
				           					    "\n\n\tXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n";      			
				    }
			   }while(choice > 2);			
	        }	
	        delete[] Copy;
	        getch();  
        }
	}
	
	void FindMenu() {
        if(Size==0) {   cout<<"\t\t\t\t\t________________________________"<<endl;
		            	cout<<"\t\t\t\t\t|                              |"<<endl;
						cout<<"\t\t\t\t\t|      Array Not Created!      |"<<endl;
						cout<<"\t\t\t\t\t|______________________________|"<<endl;   getch();   system("cls"); }
		else {
			int choice;
			do{	
		   cout<<"\n\n\tXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"  
		        "\n\t\t\t\t\t________________________________"
		        "\n\t\t\t\t\t|                              |"
				"\n\t\t\t\t\t|             Menu             |"
				"\n\t\t\t\t\t|______________________________|"
		        "\n\n\tXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"
				"\n\t\t\t\t\t     _____________________"
				"\n\t\t\t\t\t    |                     |"
				"\n\t\t\t\t\t    | 1->  BINARY SEARCH  |"
				"\n\t\t\t\t\t    | (SORTED ARRAY ONLY) |"
				"\n\t\t\t\t\t    | 2->  LINEAR SEARCH  |"
				"\n\t\t\t\t\t    | 3->  EXIT           |"
				"\n\t\t\t\t\t    | 4->  MAIN MENU      |"
				"\n\t\t\t\t\t    |_____________________|"
		        "\n\n\tXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n\n"        
		              "\t\t\t\t\t      Choice =      ";    cin>>choice;    cin.clear();   fflush(stdin);   system("cls");  
					  switch(choice) {
					  			case 1:  BinarySearch();   break;
								    
								    case 2: LinearSearch();   break;
					  				
									  case 3:   exit(0);        break;
									  
					default:  if(choice != 4) { cout<<"\t\t\t\t\t________________________________"<<endl;
		            							cout<<"\t\t\t\t\t|                              |"<<endl;
												cout<<"\t\t\t\t\t|      NO RECORD FOUND !!!     |"<<endl;
												cout<<"\t\t\t\t\t|______________________________|"<<endl;  getch();   system("cls");  }	  
					  } 
			}while(choice != 4);
		}
    }
    
    void LinearSearch() {
        int search, flag=0;
        cout<<"\n\tEnter Element to Search: ";   cin>>search;
        for(int i=0; i < Used; i++) {
            if(search == Index[i]) {
            	cout<<"\t\t\t\t\t________________________________"<<endl;
		       	cout<<"\t\t\t\t\t|                              |"<<endl;
				cout<<"\t\t\t\t\t|       FOUND VALUE At #  "<<setw(2)<<i<<"   |"<<endl;
				cout<<"\t\t\t\t\t|______________________________|"<<endl;
                flag++;   continue;  
            }
        }
        if(flag==0) {   cout<<"\t\t\t\t\t________________________________"<<endl;
		            	cout<<"\t\t\t\t\t|                              |"<<endl;
						cout<<"\t\t\t\t\t|      NO RECORD FOUND !!!     |"<<endl;
						cout<<"\t\t\t\t\t|______________________________|"<<endl; }
        getch();  system("cls");
    }

    void BinarySearch() {
        int First = 0, Last = Used-1, mid, search, flag=0;
        cout<<"\n\tEnter Element to Search: ";   cin>>search;
        while(First <= Last) {
            mid = (First + Last) / 2;
            if(search == Index[mid]) {
                cout<<"\t\t\t\t\t________________________________"<<endl;
		       	cout<<"\t\t\t\t\t|                              |"<<endl;
				cout<<"\t\t\t\t\t|       FOUND VALUE At #  "<<setw(2)<<mid<<"   |"<<endl;
				cout<<"\t\t\t\t\t|______________________________|"<<endl;  
				flag++;  
            }
            if(Index[mid] < search) {
                First = mid+1;
            }
            else {  Last = mid-1;  }
        }
        if(flag==0) {   cout<<"\t\t\t\t\t________________________________"<<endl;
		            	cout<<"\t\t\t\t\t|                              |"<<endl;
						cout<<"\t\t\t\t\t|      NO RECORD FOUND !!!     |"<<endl;
						cout<<"\t\t\t\t\t|______________________________|"<<endl; }
        getch();  system("cls");
    }	
    
    void DeleteAll() {
    	if(Size==0) {   cout<<"\t\t\t\t\t________________________________"<<endl;
		            	cout<<"\t\t\t\t\t|                              |"<<endl;
						cout<<"\t\t\t\t\t|      Array Not Created!      |"<<endl;
						cout<<"\t\t\t\t\t|______________________________|"<<endl;   }
		else {
				delete[] Index;			
         	for(int i = Size-1; i >= 0; i--) {    
            	if(Used != 0) {   Used --;  }
    	        Size--;
			}
			if(Used != 0 || Size !=0 )  { Used = 0; Size = 0;  }
			cout<<"\n\n\n\n\n\tXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"                             
		    "\n\t\t\t\t\t________________________________"
		    "\n\t\t\t\t\t|                              |"
			"\n\t\t\t\t\t|        ARRAY DELETED !!!     |"
			"\n\t\t\t\t\t|______________________________|"
	        "\n\n\tXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n";
	    }
	    getch(); system("cls");
 	}
    
};

int main() {
	system("COLOR 4E" );
	int choice;   Array A;
	
	cout <<  "\n\t                               ||========================||" 
             "\n\t                               ||                        ||" 
             "\n\t                               ||      BSCS - III(C)     ||" 
             "\n\t                      ||------------------------------------------||" 
             "\n\t                      ||   ROLL No: 210920                        ||" 
             "\n\t                      ||  NAME: MUHAMMAD SALMAN SIDDIQUI          ||" 
             "\n\t             ||-------------------------------------------------------------||" 
             "\n\t             ||                                                             ||" 
             "\n\t             ||                  A S S I G N M E N T # 0 1                  ||" 
             "\n\t    ||------------------------------------------------------------------------------||" 
             "\n\t    ||                                                                              ||" 
             "\n\t    ||                                                                              ||" 
             "\n\t    ||                                  A R R A Y                                   ||" 
             "\n\t    ||                                                                              ||" 
             "\n\t    ||                             O P E R A T I O N S                              ||" 
             "\n\t    ||                                                                              ||" 
             "\n\t    ||                                 S Y S T E M                                  ||" 
             "\n\t    ||                                                                              ||" 
             "\n\t    ||------------------------------------------------------------------------------||" 
             "\n\t             ||                                                            ||" 
             "\n\t             ||   SUBMITTED TO:    Mr. Sagheer Ahmed                       ||" 
             "\n\t             ||------------------------------------------------------------||"
             "\n\t                      ||      C O M P U T E R  S C I E N C E      ||" 
             "\n\t                      ||            D E P A R T M E N T           ||" 
             "\n\t                      ||------------------------------------------||" 
             "\n\t                               ||                        ||" 
             "\n\t                               ||                        ||"
             "\n\t                               ||========================||" ;         getch();   system("cls");  system("COLOR 0F" );
	
	while(1) {
		cout <<"======================================================"              
           "==================================================================\n"
           "\n\n\t\t\t\t\t         M A I N   M E N U    \n\n\n"        
           "=============================================================="
           "==========================================================" 
           "\n     ________________________________  \t________________________________  \t________________________________"
           "\n     |                              |  \t|                              |  \t|                              |"
	       "\n     | 1 ->     CREATE ARRAY        |  \t| 5 ->     UPDATE MENU         |  \t| 9 ->    ARRAY LENGTH         |"
		   "\n     |______________________________|  \t|______________________________|  \t|______________________________|"
		   "\n     ________________________________  \t________________________________  \t________________________________"
           "\n     |                              |  \t|                              |  \t|                              |"
	       "\n     | 2 ->   TRAVERSAL MENU        |  \t| 6 ->      SWAP MENU          |  \t| 10 ->   DELETE ARRAY         |"
		   "\n     |______________________________|  \t|______________________________|  \t|______________________________|"
		   "\n     ________________________________  \t________________________________  \t________________________________"
           "\n     |                              |  \t|                              |  \t|                              |"
	       "\n     | 3 ->     INSERT MENU         |  \t| 7 ->      COPY MENU          |  \t| 11 ->       E X I T          |"
		   "\n     |______________________________|  \t|______________________________|  \t|______________________________|"
		   "\n     ________________________________  \t________________________________ "
           "\n     |                              |  \t|                              | "
	       "\n     | 4 ->    DELETION MENU        |  \t| 8 ->      FIND MENU          | "
		   "\n     |______________________________|  \t|______________________________| "
		   "\n\n=============================================================="
           "==========================================================\n"
		      "\n\t\t\t\t\t\t ENTER YOU CHOICE =  ";     cin>>choice;   cin.clear();   fflush(stdin);    system("cls");
		switch(choice) {
			case 1: A.Create();          break;
			 
			 	 case 2: A.DisplayMenu();    break;
				
					case 3:  A.InsertionMenu();  break;
					
					    case 4: A.DeletionMenu();    break;
						
						    case 5: A.UpdateMenu();     break;
					    
					            case 6: A.SwapMenu();       break;
					            
					                case 7: A.CopyMenu();      break;
						   
                                        case 8: A.FindMenu();     break;
						    	
							                case 9: A.Length();       break;
							                   
							                    case 10: A.DeleteAll();    break;
							                    
							                        case 11:  cout<<"\t\t\t\t\t________________________________"<<endl;
		            										  cout<<"\t\t\t\t\t|                              |"<<endl;
															  cout<<"\t\t\t\t\t|     T H A N K  Y O U !!!     |"<<endl;
														      cout<<"\t\t\t\t\t|______________________________|"<<endl;  exit(0);
							                        
						default:	 
   	    						cout<<"\n\tXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"                             
		          				"\n\t\t\t\t\t_____________________________________"
		          				"\n\t\t\t\t\t| Error!                            |"
				 				"\n\t\t\t\t\t|          INVALID INPUT!           |"
							    "\n\t\t\t\t\t|___________________________________|"
				                "\n\n\tXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n";      
				                getch();	system("cls");
		}
	}
	return 0;
}
