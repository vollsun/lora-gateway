#include <curses.h>

#define RUNNING 1               // The main program is running
#define STOPPED 0               // The main program has stopped

    
     
 

    
     
     
 

    
     
     
     
     
     
     
     
     
     
     
     
     
     
     
    
    
    
    
     
     
     
     
     
     
     
     
     
     
     
     
     

double UplinkFrequency;

int UplinkMode;
    
        AirDirection, ServoLeft, ServoRight, ServoTime, FlightMode;
     
    
        // Normal (non TDM) uplink
    int UplinkTime;
     
    
        // SSDV Packet Log
    struct TSSDVPackets SSDVPackets[3];
 

    
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
 

    int parent_status;
    unsigned long packet_count;
} thread_shared_vars_t;

typedef struct {
    short int Channel;
    char Telemetry[257];
    int Packet_Number;
} telemetry_t;

typedef struct {
    short int Channel;
    char SSDV_Packet[257];
    int Packet_Number;
} ssdv_t;

extern struct TConfig Config;


