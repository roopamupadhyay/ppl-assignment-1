#include<iostream>
#include<fstream>
#include<string>

using namespace std;
int main()
{  
	 char ch,ch2,ch3,n;
	 
	fstream f2;
	f2.open("infile.txt",ios::in);
	
	ofstream t1,t2;
	t1.open("result.txt");
	t2.open("cleaned.txt");
	cout<<"\n\t Enter (f,m,r,s) for lines you want in other txt files ::";
	cin>>n;
	
	if(n=='f')
	{
	   while(f2)
	   { 
		   f2.get(ch);
		   if(ch=='"')
		   {
			  f2.get(ch2);
		      if(ch2=='f')
		      {
		         f2.get(ch3);
		         if(ch3=='"')
		        {
			       t1<<ch;  
			       t1<<ch2;
			       t1<<ch3;
			          f2.get(ch);
                      t1<<ch; 
                      f2.get(ch);
                      t1<<ch; 
			         for( ; ; )
			        {
                      f2.get(ch);
                      t1<<ch;   
                      if(ch==',')
                      {
						 t1<<endl;
						 t2<<endl;
						  break;
					  }	
					  t2<<ch;		   
			        }
			       cout<<endl;
			     }
	           }
	        }
		}
     }else if(n=='m')
       {
	   while(f2)
	   { 
		   f2.get(ch);
		   if(ch=='"')
		   {
			  f2.get(ch2);
		      if(ch2=='m')
		      {
		         f2.get(ch3);
		         if(ch3=='"')
		         {
		           // cout<<"yes"<<endl;
			       t1<<ch;  
			       t1<<ch2;
			       t1<<ch3;
			          f2.get(ch);
                      t1<<ch; 
                      f2.get(ch);
                      t1<<ch; 
			         for( ; ; )
			        {
                      f2.get(ch);
                      t1<<ch;   
                      if(ch==',')
                      {
						 t1<<endl;
						 t2<<endl;
						  break;
					  }		
					     t2<<ch;	   
			        }
			     }
	           }
	        }
		}
     }else if(n=='r')
        {
	   while(f2)
	   { 
		   f2.get(ch);
		   if(ch=='"')
		   {
			  f2.get(ch2);
		      if(ch2=='r')
		      {
		         f2.get(ch3);
		         if(ch3=='"')
		         {
		           // cout<<"yes"<<endl;
			       t1<<ch;  
			       t1<<ch2;
			       t1<<ch3;
			          f2.get(ch);
                      t1<<ch; 
                      f2.get(ch);
                      t1<<ch; 
			         for( ; ; )
			        {
                      f2.get(ch);
                      t1<<ch;   
                      if(ch==',')
                      {
						 t1<<endl;
						 t2<<endl;
						  break;
					  }			 
					  t2<<ch;  
			        }
			      
			     }
	           }
	        }
		}
     }else if(n=='s')
        {
	   while(f2)
	   { 
		   f2.get(ch);
		   if(ch=='"')
		   {
			  f2.get(ch2);
		      if(ch2=='s')
		      {
		         f2.get(ch3);
		         if(ch3=='"')
		         {
		           // cout<<"yes"<<endl;
			       t1<<ch;  
			       t1<<ch2;
			       t1<<ch3;
			       f2.get(ch);
			       t1<<ch;
			       f2.get(ch);
			       t1<<ch;
			       f2.get(ch);
			       t1<<ch;  t2<<ch;
			         for( ; ; )
			        {
                      f2.get(ch);
                      t1<<ch;  t2<<ch;   
                      if(ch=='"')
                      {
						 t1<<endl;
						 t2<<endl;
						  break;
					  }	
					     	   
			        }
			       
			     }
	           }
	        }
		}
     }
    t2.close();
    fstream k;
	k.open("cleaned.txt",ios::in|ios::out);
    k.clear();
   k.seekg(0, ios::beg);
   string abc,efg;
   cout<<"\n\t Enter your prefered language name::";
   cin>>abc;
   
   fstream q;
	q.open("final.bat");
     
   
     while(getline(k,efg))
     {
		  q>>abc;
		  q<<efg<<endl;
		  
	 }	   
     q.close();
     t1.close();
	f2.close();
 return 0;
 }
