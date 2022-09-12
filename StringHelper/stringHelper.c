#include <iostream>
#include <string>


void customStrC(char* des, char* source) {

     short flag = 0;
     short i = 0;
     while (flag == 0) {

          if (source[i] == '\0') {
               flag = 10;
          }

          i++;
     }



     printf("\i", i);
     *des = *source;

}
/// <summary>
/// Returns length of string
/// if using std::string
/// use address of first element of string
/// </summary>
/// <param name="inputStr"></param>
/// <returns>int</returns>
int getStringLength(char* inputStr) {
     //maybe do sizeof() and work backwards until first \0?
     //idk will work on tmr
     short flag = 0;
     int i = -1;
     int lastPos = sizeof(&inputStr);
     while (flag == 0) {
          if (inputStr[lastPos - 1] == '\0') {

               flag = 2;

          }
          lastPos--;

     }
     return lastPos;
}
int main(void) {

     char hi[50] = "Hello      ";
     char des[6];
    
     getc(NULL);
     return 0;

}
