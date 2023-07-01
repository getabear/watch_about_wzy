#ifndef CONTENTCHANGE_H
#define CONTENTCHANGE_H

// 定义一个枚举的结构体
typedef enum week{
    MON=0,
    TUE,
    WED,
    THU,
    FRI,
    SAT,
    SUN
}weekday;

int chang_week(weekday day);
int change_time(int hour, int min);
int change_date(int year, int month, int day);
int change_temp(int temprature);
int change_humi(int humi);

#endif