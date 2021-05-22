// Sam Hill
// fileio lab

#include<iostream>
#include<fstream>



void readFile(){
  std::ifstream file ("fileio-text.txt");

  if(!file.is_open){
    std::cout<< "Cannot open file!" << std::endl;
  }
  
  else{
    char chr;
    file.get(chr);
    
    while(chr != ' '){
      std::cout << chr <<std::endl;
      file.get(chr);
    }
  }
  std::cout<< std::endl;
  file.close();
}


void addFile(){

  std::ifstream file2("fileio-data-1.txt");

  if(!file2.is_open()){
    std::cout<< "Cannot open file!"<<std::endl;
  }

  int x;
  int y;
  char chr;
  int sum;

  file2>> x;
  file2.get(chr);
  file2 >> y;

  sum = x + y;
  
  std::cout<< sum<< std::endl;
}


int main(){

  readFile();
  addFile();
}
