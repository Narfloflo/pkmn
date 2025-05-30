#ifndef GUARD_DNS_UTILS_H
#define GUARD_DNS_UTILS_H

#define DNS_PAL_EXCEPTION   FALSE
#define DNS_PAL_ACTIVE      TRUE

struct LightingColour {
    u8 paletteNum;
    u8 colourNum;
    u16 lightColour;
};

struct DnsPalExceptions {
    bool8 pal[32];
};

u8 GetCurrentTimeOfDay(void);
u8 GetDnsTimeLapse(u8 hours);
void DnsTransferPlttBuffer(void *src, void *dest);
void DnsApplyFilters();

#endif /* GUARD_DNS_UTILS_H */