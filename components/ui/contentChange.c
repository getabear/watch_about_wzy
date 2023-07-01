// 提供一个改变标签内容的接口，供FREERTOS的程序使用
#include "ui.h"
#include "contentchange.h"

int to_str(int num, char *s){
    int i = 0, n = 0, ret = 0;
    char tmp;
    if(num == 0){
        s[i++] = '0';
    }
    while(num > 0){
        s[i++] = '0' + num % 10;
        num /= 10;
    }
    s[i] = 0;
    ret = i;
    n = i - 1;
    i = 0;
    while(i < n){
        tmp = s[i];
        s[i] = s[n];
        s[n] = tmp;
        i++;
        n--;
    } 
    return ret;
}

int chang_week(weekday day){
    if(day < 0 || day > 6){
        return -1;
    }
    static char* weekdays[] = {"", "", "", "", "", "", ""};
    lv_label_set_text(ui_week, weekdays[day]);
    return 0;
}

int change_time(int hour, int min){
    // 异常值将不修改时间
    if(hour >= 24 || hour < 0 || min >= 60 || min < 0)
        return -1;
    // 申明 static 将其保存到静态变量区， 防止被改变
    static char new_time[6];
    // 将时间填充到数组中
    new_time[0] = '0' + hour / 10;
    new_time[1] = '0' + hour % 10;
    new_time[2] = ':';
    new_time[3] = '0' + min / 10;
    new_time[4] = '0' + min % 10;
    new_time[5] = 0;
    lv_label_set_text(ui_time, new_time);
    return 0;
}

int change_date(int year, int month, int day){
    // 申明 static 将其保存到静态变量区
    static char buf[11];
    if(month > 12 || month < 0 || day < 0 || day > 31){
        return -1;
    }
    to_str(year, buf);
    buf[4] = '-';
    // 处理 月 补零情况
    if(month < 10){
        buf[5] = '0';
        to_str(month, buf + 6);
    }
    else{
        to_str(month, buf + 5);
    }
    buf[7] = '-';
    // 处理 天 补零情况
    if(day < 10){
        buf[8] = '0';
        to_str(day, buf + 9);
    }
    else{
        to_str(day, buf + 8);
    }
    buf[10] = 0;
    lv_label_set_text(ui_date, buf);
    return 0;
}

int change_temp(int temprature){
    static char s_temprature[4];
    int n = 0;
    if(temprature >= 100 || temprature < -50){
        return -1;
    }
    if(temprature < 0){
        s_temprature[0] = '-';
        n = to_str(-temprature, s_temprature + 1);
        s_temprature[1 + n] = 0;
    }
    else{
        n = to_str(temprature, s_temprature);
        s_temprature[n] = 0;
    }
    lv_label_set_text(ui_temp, s_temprature);
    return 0;
}

int change_humi(int humi){
    static char s_humi[4];
    if(humi < 0 || humi > 100){
        return -1;
    }
    int n = to_str(humi, s_humi);
    s_humi[n] = '%';
    s_humi[n + 1] = 0;
    lv_label_set_text(ui_humi, s_humi);
    return 0;
}

