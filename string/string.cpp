#include "string.hpp"


String::String(){
  // std::cout << "default ctor" << std::endl;
  stringSize = 1;
  str = new char[stringSize];
  str[0]= '\0';
    
}


String::String(char chr){
  //std::cout << "char ctor: " << chr << std::endl;
  stringSize = 2;
   str = new char[stringSize];
   str[0] = chr;
   str[1]= '\0';

}

String::String(const char chr[]){
  //std::cout << "char arr ctor:" << chr << std::endl;
  int len = 0;

  int i = 0;

  while (chr[i] != '\0') {

    ++len;

    ++i;

  }

  str = new char[len+1];

  int j = 0;

  while(chr[j] != '\0') {

    str[j] = chr[j];

    ++j;

  }

  str[j] = '\0';

  stringSize = j+1;

}
 
                                                                                                                                                                       
String::String (const String& str2){
  //std::cout << "copy ctor: " << str2.str << std::endl;

  stringSize = str2.stringSize;
  str = new char[stringSize];

  for(int i = 0; i < stringSize; ++i){
    str[i] = str2.str[i];
  }
}

String::String(int num){
  stringSize = num + 1;
  
  str = new char[stringSize];
  str[0] = '\0';
} 
       
String::String(int cap, const char chr[]){
  stringSize = cap + 1;

  str = new char[stringSize];
  for(int i = 0; i < stringSize; ++ i){
    str[i] = chr[i];
  }

} 



String::~String (){

  delete []str;
}

void String::swap(String& rhs){
  char *tmp = str;
  str = rhs.str;
  rhs.str = tmp;

  int tmpSize = stringSize;
  stringSize = rhs.stringSize;
  rhs.stringSize = tmpSize;
}

String& String::operator= (String rhs){
  swap(rhs);
  return *this;
}



bool operator>=(const String& lhs, const String& rhs) {

  if(((lhs > rhs) || (lhs == rhs)) && !(lhs < rhs))

    return true;

  else

    return false;

}


bool operator!=(const String& lhs, const String& rhs) {
  if((lhs > rhs) || (lhs < rhs))
    return true;
 
  else
    return false;
}


bool operator<=(const String& lhs, const String& rhs) {

  if(((lhs < rhs) || (lhs == rhs)) && !(lhs > rhs))

    return true;

  else

    return false;

}


bool operator>(const String& lhs, const String& rhs) {



  if(!(lhs < rhs) && !(lhs == rhs))

    return true;

  else

    return false;

}




int String::length() const{

  int i = 0;

  while(str[i] != '\0'){

    i++;
  }
  return i;
  
}


void String::resetCapacity (int newCap){
  char tmp[newCap];
  for(int i = 0; i < stringSize; ++i){
    tmp[i] = str[i];
  }

  delete [] str;
  
  stringSize = newCap + 1;
  str = new char[stringSize];
  
  for(int i = 0; i < stringSize; ++i){
    str[i] = tmp[i];
  }

}




bool String::operator==(const String& str2) const {
  //std::cout << str << " == " << str2.str << std::endl;
  if (length() != str2.length()){ 

    return false;
  }

  if( length()== str2.length()){
    for(int i = 0; i < length(); ++i){ 

      if(str[i] != str2.str[i])

	return false;

    }
  }
  return true; 

}

bool operator== (char lhs,  const String&rhs){
  if (String(lhs) == rhs){
    return true;
  } 
  return false;
  }
bool operator== (const char lhs[],  const String& rhs){
  if (String(lhs) == rhs){
    return true;
  }
  return false;
}

bool String::operator< (const String& rhs)  const{
  int i = 0;
  while(str[i] != 0 && rhs.str[i] != 0 && str[i] == rhs.str[i]){
    ++i;
    
  }
  return str[i] < rhs.str[i];

}

bool operator< (const char lhs[],const String& rhs){
  return(String(lhs) < rhs);
}
bool operator< (char lhs, const String& rhs){
  return(String(lhs) < rhs);
}


char&  String::operator[] (int i){
  return str[i];
}
char    String::operator[](int i)const {
  return str[i];

}

std::istream& operator>>(std::istream& in, String& rhs){
  
  char chr[256];
  if(!in.eof()){
    in >> chr;
    rhs = String(chr);
  }
  else{
    rhs = String();

  }
  return in;
}

std::ostream& operator<<(std::ostream& out , const String& rhs){
  int i = 0;

  while(rhs.str[i]!=  '\0'){
    out << rhs.str[i];
    ++i;
  }
  return out;

}


String String::operator+(const String& rhs)  const{
  String sum(length() + rhs.length(), str);
  int offset = length();
  for(int i = 0; i < rhs.length(); ++i){
    sum[i+offset] = rhs[i];
  }
  sum[length()+rhs.length()] = '\0';
  return sum;

}
String  operator+(const char lhs[],  const String& rhs){
    return (String(lhs) + rhs);
}
  String operator +(char lhs, const String& rhs){
   return (String(lhs) + rhs);
}

String& String::operator += (const String& rhs){
  String sum(length() + rhs.length(), str);
  int offset = length();
  for(int i = 0; i < rhs.length(); ++i) {
    sum[offset + i] = rhs[i];
  }

  sum[length() + rhs.length()] = '\0';

  delete[] str;
  str = sum.str;
  stringSize = sum.stringSize;
  
  return *(this);
}



int String:: capacity () const{
  
  
  return stringSize - 1;
}

String String::substr(int start,int end) const{

  
  if (start < 0){

    start = 0;

  }

  if (end > capacity()){

    end = capacity();

  }
  if(start > end){
    return "";
  }


  int Size = 0;

  if (start == end)

    Size = 2;

  else

    Size = end - start + 1;



  char result[Size];

  int i;

  for (i = start; i <= end; ++i){

    result[i - start] = str[i];

  }

  result [i - start] = '\0';

  String tmp(result);

  return tmp;





}


int String::findch(int start ,char chr) const{



  int i = start;

  while ((i <= length()) && (chr != str[i]))

    ++i;

  if(i > length())

    return -1;

  else

    return i;


}


int String::findstr(int pos, const String& rhs) const{
  int foundPos = -1;

  if(pos == 0 && str[0] == rhs[0]){

    foundPos = 0;

    for(int j = 0; j < rhs.length(); ++j){

      if(str[foundPos + j] != rhs[j])

	foundPos = -1;

      else

	foundPos = 0;

    }

    return foundPos;



  }



  for(int i = pos; i <= length(); ++i){

    if(str[i] == rhs[0]){

      foundPos = i;

    }

    for(int j = 0; j < rhs.length(); ++j){

      if(str[foundPos + j] != rhs[j])

	foundPos = -1;

    }

        

  }

  return foundPos;

}

std::vector<String> String::split(char chr) const{ 
  std::vector<String>result;

  int start = 0;
  int end = 0;

  while(end != -1){
   end = findch(start, chr);

    if(start == end){
      result.push_back("");
     
   
    }
 
    if(end == -1){
      break;
    }
    if(start != end){
    result.push_back(substr(start, end - 1));
    }
       start = end + 1;
    
  }
      
   
  result.push_back(substr(start,length()));
    return result;

}
    


