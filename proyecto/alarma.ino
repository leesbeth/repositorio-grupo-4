#include <Time.h>
#include <TimeAlarms.h>
void setup(){
Serial.begin(9600);
Serial.println("Tiempo para alarmas");
Serial.println("Alarma sera lanzada diariamente 8:30 am y 17:45 pm");
Serial.println("Una lanzada cada 15 seconds");
Serial.println("El otro una sola vez despues de 10 seconds");
Serial.println();
setTime(8,29,40,1,1,10); // set time to 8:29:40am Jan 1 2010
Alarm.alarmRepeat(8,30,0, MorningAlarm);
Alarm.alarmRepeat(17,45,0,EveningAlarm);
// 8:30am every day
// 5:45pm every day
Alarm.timerRepeat(15, RepeatTask);
Alarm.timerOnce(10, OnceOnlyTask);
}
void MorningAlarm(){
Serial.println("Alarm: - turn lights off");
}
void EveningAlarm(){
Serial.println("Alarm: - turn lights on");
}
void RepeatTask(){
Serial.println("15 second timer");
}
void OnceOnlyTask(){
Serial.println("This timer only triggers once");
}

void loop(){
digitalClockDisplay();
Alarm.delay(1000); // wait one second between clock display
}
void digitalClockDisplay() {
// digital clock display of the time
Serial.print(hour());
printDigits(minute());
printDigits(second());
Serial.println();
}

void printDigits(int digits){
Serial.print(":");
if(digits < 10)
Serial.print('0');
Serial.print(digits);
}
