#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main(){
	string str;
	cin>>str;
	int check =0,i=0;
	while(str[i]){
		
			        if(check==0){
            str[i]=toupper(str[i]);     
            check=1;
  }
  else if(isspace(str[i]))       
            check=0;
        i++;
		}
	
	cout<<str;

	return 0;
}
