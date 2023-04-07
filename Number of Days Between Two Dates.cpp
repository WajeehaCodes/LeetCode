 int daysBetweenDates(string date1, string date2) {
      return abs(daysToInt(date2)-daysToInt(date1));
 }
//utility functions
int daysToInt(string date) {
    int year = stoi(date.substr(0,4));
    int month = stoi(date.substr(5,2));
    int day = stoi(date.substr(8,2));
    int d = 0;
    for(int y=1971; y<year; y++) {
        d += leapYear(y) ? 366 : 365;
    }
    for(int m=1; m<month; m++) {
        d += daysInMonth(m, year);
    }
    return d + day;
}
bool leapYear(int year) {
    return (year%4==0 && year%100!=0) || year%400==0;
}
int daysInMonth(int m, int year) {
    if(m==1 || m==3 || m==7 || m==8 || m==10 || m==12 || m==5) return 31;
    if(m==2) return leapYear(year) ? 29 : 28;
    return 30;
}
