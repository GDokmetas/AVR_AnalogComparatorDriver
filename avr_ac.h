// Written By Gökhan Dökmetaş 
// www.lojikprob.com

#define INT_TOGGLE 0
#define INT_FALLING 1
#define INT_RISING 2

#define BANDGAP_FIX 0 
#define BANDGAP_AIN 1

#define DISABLE 0  // STATUS 
#define ENABLE 1

void ac_status(int status);

void ac_bandgap_select(int bandgap);

int ac_read();  // return ACO 

int ac_int_flag(); // Return ACI 

void ac_int(int status, int mode); // Interrupt Enable

void ac_capture(int status); // Capture Enable




