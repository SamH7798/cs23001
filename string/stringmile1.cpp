#include "string.hpp"


String::String(){
  

  str[0]= '\0';
    
}


String::String(char chr){
 

  str[0] = chr;
  str[1]= '\0';

}

String::String(const char chr[]){
  int i = 0;

  while(chr[i] != '\0'){

    str[i] = chr[i];

    ++i;

    if(i >= STRING_SIZE){

      break;

    }

 
  }
  str[i] = '\0';
} 
                                                                                                                                                                       

int String::length() const{

  int i = 0;

  while(str[i] != '\0'){

    i++;
  }
  return i;
  
}
bool operator>=(const String& lhs, const String& rhs) {

  if(((lhs > rhs) || (lhs == rhs)) && !(lhs < rhs))

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





bool String::operator==(const String& str2) const {

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
    return (String(lhs) == rhs); 

  }
bool operator== (const char lhs[],  const String& rhs){
  return (String(lhs) == rhs);

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
  char chr[STRING_SIZE];
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
    out <<rhs.str[i];
    ++i;
  }
  return out;

}


String String::operator+(const String& rhs)  const{
  String sum( length() + rhs.length());
    int x = 0;
    for(int i = 0; i < length(); ++i){
    sum[i] = str[i];
    ++x;
    if(length() + i > STRING_SIZE){
      break;
    }
 
  sum[length()+i] = rhs.str[i];
  ++x;
  }
  sum[x] = '\0';
  return sum;

}
String  operator+(const char lhs[],  const String& rhs){
    return (String(lhs) + rhs);
}
  String operator +(char lhs, const String& rhs){
   return (String(lhs) + rhs);
}

String String::operator += (const String& rhs){
  int len = length();

  int i = 0;

    

  while(rhs.str[i] != 0){

    if(len + i == STRING_SIZE)

      break;

    str[len + i] = rhs.str[i];

    ++i;

  }

  str[len + i] = 0;

  return *(this);
}



int String:: capacity () const{
  
  return STRING_SIZE - 1;
}

String String::substr(int start,int end) const{

  String result;

  if(start<0){
    start=0;
  }
  if(start>end){
    return result;
  }
  if(end >= length()){
    end=length()-1;
  }
  if(end<0){
    return String();
  }


  int i;

  for(i=start;i<=end;++i){

    result.str[i-start]=str[i];

  }

  result.str[i-start]='\0';

  return result;


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
