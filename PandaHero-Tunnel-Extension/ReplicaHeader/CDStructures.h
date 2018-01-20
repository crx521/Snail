//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct in6_addr {
    union {
        unsigned char _field1[16];
        unsigned short _field2[8];
        unsigned int _field3[4];
    } _field1;
};

struct in_addr {
    unsigned int _field1;
};

struct ip_addr {
    unsigned int _field1;
};

struct pbuf;

struct sockaddr_in {
    unsigned char _field1;
    unsigned char _field2;
    unsigned short _field3;
    struct in_addr _field4;
    char _field5[8];
};

struct sockaddr_in6 {
    unsigned char _field1;
    unsigned char _field2;
    unsigned short _field3;
    unsigned int _field4;
    struct in6_addr _field5;
    unsigned int _field6;
};

struct tcp_pcb {
    struct ip_addr _field1;
    struct ip_addr _field2;
    unsigned char _field3;
    unsigned char _field4;
    unsigned char _field5;
    struct tcp_pcb *_field6;
    void *_field7;
    CDUnknownFunctionPointerType _field8;
    int _field9;
    unsigned char _field10;
    int _field11;
    unsigned short _field12;
    char _field13[3];
    unsigned short _field14;
    unsigned char _field15;
    unsigned char _field16;
    unsigned char _field17;
    unsigned char _field18;
    unsigned int _field19;
    unsigned int _field20;
    unsigned short _field21;
    unsigned short _field22;
    unsigned int _field23;
    short _field24;
    unsigned short _field25;
    unsigned int _field26;
    unsigned int _field27;
    short _field28;
    short _field29;
    short _field30;
    unsigned char _field31;
    unsigned char _field32;
    unsigned int _field33;
    unsigned short _field34;
    unsigned short _field35;
    unsigned int _field36;
    unsigned int _field37;
    unsigned int _field38;
    unsigned int _field39;
    unsigned short _field40;
    unsigned short _field41;
    unsigned short _field42;
    unsigned short _field43;
    unsigned short _field44;
    unsigned short _field45;
    struct tcp_seg *_field46;
    struct tcp_seg *_field47;
    struct tcp_seg *_field48;
    struct pbuf *_field49;
    CDUnknownFunctionPointerType _field50;
    CDUnknownFunctionPointerType _field51;
    CDUnknownFunctionPointerType _field52;
    CDUnknownFunctionPointerType _field53;
    CDUnknownFunctionPointerType _field54;
    unsigned int _field55;
    unsigned char _field56;
    unsigned char _field57;
    unsigned char _field58;
};

struct tcp_seg;

