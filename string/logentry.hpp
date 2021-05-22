#ifndef CS_LOGENTRY_H_
#define CS_LOGENTRY_H_

////////////////////////////////////////////////////////////
//
// File:        logentry.hpp 
//       
// Version:     1.0
// Date:        
// Author:      
//
// Description: Class definition for a log entry.
//
//
//

////////////////////////////////////////////////////////////
#include <iostream>
#include <vector>

#include "string.hpp" 

////////////////////////////////////////////////////////////
class Date { 
public:
            Date() {};
  String getMonth(){return month;};
  String getDay(){return day;};
  int getYear(){return year;};
  void printDate(std::ostream& out)const;
  std::vector<String> setDate(String given);
private:
    String  day, month;
    int     year;
};

////////////////////////////////////////////////////////////
class Time {
  public:
  void printTime(std::ostream& out)const;
  void setTime(std::vector<String> given);
            Time() {};
  private:
    int     hour, minute, second;
};


////////////////////////////////////////////////////////////
class LogEntry {
public:
            LogEntry() {};
            LogEntry(String);
  void printContents(std::ostream& out) const;
  
  
  String getHost()const {return host;};
  Date getDate()const{return date;};
  Time getTime()const{return time;};
  String getRequest()const{ return request;};
  String getStatus()const{return status;};
  int getBytes ()const {return number_of_bytes;};

  friend  std::ostream& operator<<(std::ostream&, const LogEntry&);

private:
    String  host;
    Date    date;
    Time    time;
    String  request;
    String  status;
    int     number_of_bytes;
};


////////////////////////////////////////////////////////////
//
// Free functions
//

std::vector<LogEntry>   parse       (std::istream&);
void                    output_all  (std::ostream&, const std::vector<LogEntry> &);
void                    by_host     (std::ostream&, const std::vector<LogEntry> &);
int                     byte_count  (const std::vector<LogEntry>&);
int StringtoInt(String given);
#endif

