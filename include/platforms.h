#ifndef NXMP_PLATFORMS_H
#define NXMP_PLATFORMS_H

#ifdef _WIN32

#define NXMP_WIN32
#define NXMP_NETWORKSUPPORT
#define NXMP_UPNPSUPPORT
#define NXMP_ENIGMASUPPORT


#endif

#ifdef __SWITCH__



#define NXMP_SWITCH
#define NXMP_USBSUPPORT
#define NXMP_NETWORKSUPPORT
#define NXMP_UPNPSUPPORT
#define NXMP_ENIGMASUPPORT

#endif


#endif