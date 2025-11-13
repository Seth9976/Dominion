// 函数: _Z14RollTable_Test13CampaignPiece
// 地址: 0xa2f954
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = zx.q(*(gCampaignData + 8))
int64_t x9 = *gCampaignData
int64_t* x10_2 = x9 + ((x8 & (zx.q(arg1) | zx.q(arg1 s>> 4))) << 3)
int32_t* x11_1

do
    x11_1 = *x10_2
    x10_2 = &x11_1[4]
while (*x11_1 != arg1)

void* x10_4 = *(x11_1 + 8)
int64_t x11_3

if (*(x10_4 + 0x18) == 5)
    x11_3 = 0
else if (*(x10_4 + 0x288) == 5)
    x11_3 = 1
else if (*(x10_4 + 0x4f8) != 5)
    if (*(x10_4 + 0x768) != 5)
        pthread_kill(pthread_self(), 6)
        return RollList(XNoReturn()) __tailcall
    
    x11_3 = 3
else
    x11_3 = 2

void* x10_5 = x10_4 + x11_3 * 0x270
uint64_t x21 = zx.q(*(x10_5 + 0x280))
int32_t x20

if (x21.d s< 1)
    x20 = 0
else
    int64_t x22_1 = 0
    x20 = 1
    
    while (true)
        int32_t i = *(x10_5 + 0x20 + (x22_1 << 3) + 4)
        int64_t* x8_3 = x9 + (((zx.q(i) | zx.q(i s>> 4)) & zx.q(x8.d)) << 3)
        int32_t* x9_1
        
        do
            x9_1 = *x8_3
            x8_3 = &x9_1[4]
        while (*x9_1 != i)
        
        void* x8_5 = *(x9_1 + 8)
        int64_t x8_7
        
        if (*(x8_5 + 0x18) == 2)
            x8_7 = *(x8_5 + 0x20)
            
            if (x8_7 == 0)
                break
        else if (*(x8_5 + 0x288) == 2)
            x8_7 = *(x8_5 + 0x290)
            
            if (x8_7 == 0)
                break
        else if (*(x8_5 + 0x4f8) != 2)
            if (*(x8_5 + 0x768) != 2)
                break
            
            x8_7 = *(x8_5 + 0x770)
            
            if (x8_7 == 0)
                break
        else
            x8_7 = *(x8_5 + 0x500)
            
            if (x8_7 == 0)
                break
        
        if ((x8_7() & 1) != 0)
            break
        
        x22_1 += 1
        x20 = x22_1 u< x21 ? 1 : 0
        
        if (x22_1 == x21)
            break
        
        x8 = zx.q(*(gCampaignData + 8))
        x9 = *gCampaignData

return zx.q(x20) & 1
