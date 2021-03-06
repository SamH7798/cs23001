 #include "bigint.hpp"



bigint::bigint(){
  for(int i = 0; i < CAPACITY; ++i){
    digits[i] = 0;  
  }
}

bigint::bigint(int num){
  if(num>=0){
    for(int i = 0; i < CAPACITY; ++i){
      digits[i] = num %10;
      num = num/10;
      
    }
  }
  
}


bigint::bigint(const char x[]){
  int charsize = 0;
  while(x[charsize] != '\0' ){
      ++charsize;
    
   
    }
    
    int temp = 0;
    int j = 0;
    for(int i = charsize -1; i > -1; --i){
      temp = x[j] - '0';
     digits[i] = temp;
     ++j;
    }

    for(int i = charsize; i < CAPACITY; ++i){
      digits[i] = 0 ;
    

    }

}

void bigint:: debugprint(std::ostream& x)const{


    for(int i = CAPACITY-1; i > -1; --i){
      x<<'|'<< digits[i]<< '|';

    }
    std::cout << std::endl;

  }

std::ostream& operator<<(std:: ostream&  out, bigint a){
  int index = CAPACITY-1;
  int count = 0;
  while(a.digits[index] == 0){
    --index;  
  }
  
  for(int i = index; i > 0; --i){
    out<< a.digits[i];
    ++count;
    if(count >= 80) {
      out << '\n';
      count = 0;
    }
  }
  out << a.digits[0];
  return out;
}


bool bigint:: operator==( bigint b){
 for(int i = 0; i < CAPACITY; ++ i){
    if(digits[i] != b.digits[i]){
      return false;
    }
  }
      return true;
   
}



std::istream& operator>>(std::istream& in, bigint& a){

  char charArray[CAPACITY + 1];

  char chr; 

  

  for(int i = 0; i < CAPACITY + 1; i++){

    in >> chr; 

    if(chr == ';'){ 

      charArray[i] = '\0';

      break;

    }

    charArray[i] = chr; 

  }



  a = bigint(charArray); 

  return in;

}




bigint bigint::operator+(const bigint& a) {
  int tmp = 0, rm = 0;
  bigint sum;
  for(int i = 0; i < CAPACITY; ++i){
    
    tmp = a.digits[i] + digits[i] + rm;
    rm = 0;
    if(tmp > 9){
      sum.digits[i]= tmp %10;
      rm = tmp/10;
	    }
    else{
      sum.digits[i]= tmp;
    }
     
  }
  return sum;
}

int bigint:: operator[](int x){
  if(x < 0 || x >= CAPACITY){
    return 0;
  }
  return digits[x];
  



}


bigint bigint::timesDigit(int x){
  int tmp = 0, rm = 0;
  bigint sum;
  
  for(int i = 0; i < CAPACITY; ++ i){
    tmp = digits[i] * x + tmp;
    rm = tmp %10;
    tmp = tmp/10;
    
    sum.digits[i] = rm;
  }
  return sum;
}

bigint bigint::times10(int x)const{
 
   bigint sum;

   for(int i = 0; i < CAPACITY - x; ++i){

    sum.digits[x + i] = digits[i];


  }
  return sum;

}

bigint bigint::operator*(bigint a){
  bigint product = 0;
  
  for(int i = 0; i < CAPACITY; ++i)

    product = product + (timesDigit(a.digits[i])).times10(i);

    

  return product; 

}

