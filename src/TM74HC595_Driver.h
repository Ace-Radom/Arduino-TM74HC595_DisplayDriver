/*
 * Arduino TM74HC595 Display Driver by Ace_Radom
 * Version 1.1.1ev (English Version)
 * 05.04.2022 First released on GitHub "https://github.com/Ace-Radom/Arduino-TM74HC595_DisplayDriver" (v1.0 beta)
 * 05.12.2022 Translated into English (v1.1.1ev beta)
*/

#ifndef _TM74HC595_DRIVER_H_
#define _TH74HC595_DRIVER_H_

#define _Preset_Array_Length_ 12

#define _With_decimalPoint true
#define _Without_decimalPoint false

struct _Display_Preset
{
    char _Character;
    int _NUM;
};

class TM74HC595{
    public:
        //set SCLK, RCLK, DIO pins
        TM74HC595( int _SCLK , int _RCLK , int _DIO );

        //send one digit data to the display module
        void send( unsigned int _INPUT , unsigned short int _port );

        //send one digit data to the display module and set the decimal point (true as turn on)
        void send( unsigned int _INPUT , unsigned short int _port , bool _decimalPoint );

        //continue sending one digit data to the display module for n milliseconds
        void continuesend( unsigned int _INPUT , unsigned short int _port , long long _continueTime );

        //continue sending one digit data to the display module for n microseconds and set the decimal point (true as turn on)
        void continuesend( unsigned int _INPUT , unsigned short int _port , bool _decimalPoint , long long _continueTime );

        //continue sending four digit data to the display module for n milliseconds
        void continuesend( char _INPUT[] , long long _continueTime );

        //continue sending four digit data to the display module for n milliseconds and set each decimal points as a boolean array (true as turn on)
        void continuesend( char _INPUT[] , bool _decimalPoint[] , long long _continueTime );

        //module clear
        void clear();

        //find the binary number of the character for displaying it (now only '0'~'9' and '-' are supported)
        unsigned int Character_Point( char _INPUT );

    private:
        int _SCLK_PIN;
        int _RCLK_PIN;
        int _DIO_PIN;

        //set digits
        void setDigit( int _OUTPUT , unsigned short int _port , bool _decimalPoint );
};

#endif