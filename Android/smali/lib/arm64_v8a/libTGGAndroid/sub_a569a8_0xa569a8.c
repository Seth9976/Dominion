// 函数: sub_a569a8
// 地址: 0xa569a8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x21 = *(gCampaignSetup + 0x19a0)
int64_t x22 = sx.q(*(gCampaignSetup + 0x19a8))
int32_t x19 = *(gCampaignSetup + 0x5c54)
void* x8 = x21 + (x22 << 0xb)
int64_t x23

if (*(x8 + 0x34) == x19)
    x23 = 0
else if (*(x8 + 0x70) != x19)
    void* x9_2 = x21 + (x22 << 0xb)
    
    if (*(x9_2 + 0xac) != x19)
        if (*(x9_2 + 0xe8) != x19)
            pthread_kill(pthread_self(), 6)
            int64_t x0_7
            int64_t lr
            int128_t v0
            x0_7, lr, v0 = XNoReturn()
            int64_t var_90 = lr
            int64_t x8_10 = *(gCampaignSetup + 0x19a0)
            int64_t x9_17 = sx.q(*(gCampaignSetup + 0x19a8))
            int32_t x11 = *(gCampaignSetup + 0x5c54)
            void* x10_2 = x8_10 + (x9_17 << 0xb)
            int64_t x11_1
            
            if (*(x10_2 + 0x34) == x11)
                x11_1 = 0
            else if (*(x10_2 + 0x70) != x11)
                void* x12_2 = x8_10 + (x9_17 << 0xb)
                
                if (*(x12_2 + 0xac) == x11)
                    x11_1 = 2
                else if (*(x12_2 + 0xe8) != x11)
                    void* x12_4 = x8_10 + (x9_17 << 0xb)
                    
                    if (*(x12_4 + 0x124) == x11)
                        x11_1 = 4
                    else if (*(x12_4 + 0x160) != x11)
                        void* x12_6 = x8_10 + (x9_17 << 0xb)
                        
                        if (*(x12_6 + 0x19c) == x11)
                            x11_1 = 6
                        else if (*(x12_6 + 0x1d8) != x11)
                            void* x12_8 = x8_10 + (x9_17 << 0xb)
                            
                            if (*(x12_8 + 0x214) == x11)
                                x11_1 = 8
                            else if (*(x12_8 + 0x250) != x11)
                                void* x12_10 = x8_10 + (x9_17 << 0xb)
                                
                                if (*(x12_10 + 0x28c) == x11)
                                    x11_1 = 0xa
                                else if (*(x12_10 + 0x2c8) != x11)
                                    void* x12_12 = x8_10 + (x9_17 << 0xb)
                                    
                                    if (*(x12_12 + 0x304) != x11)
                                        if (*(x12_12 + 0x340) != x11)
                                            pthread_kill(pthread_self(), 6)
                                            XNoReturn()
                                            return sub_a56d34() __tailcall
                                        
                                        x11_1 = 0xd
                                    else
                                        x11_1 = 0xc
                                else
                                    x11_1 = 0xb
                            else
                                x11_1 = 9
                        else
                            x11_1 = 7
                    else
                        x11_1 = 5
                else
                    x11_1 = 3
            else
                x11_1 = 1
            
            void* x12_14 = x10_2 + 0xc + x11_1 * 0x3c
            *(x12_14 + 0x2c) = *(x10_2 + 0xc)
            *(x12_14 + 0x3c) = *(x10_2 + 0x1c)
            v0.q = *(x10_2 + 0x2c)
            *(x12_14 + 0x4c) = v0.q
            int32_t x10_4 = *(x10_2 + 0x124)
            int32_t x8_11
            void* x9_18
            
            if (x10_4 == 0)
                x9_18 = x8_10 + (x9_17 << 0xb)
                x8_11 = *(x9_18 + 0x17c)
                
                if (x8_11 != 0)
                    *(x9_18 + x11_1 * 0x3c + (0xa << 2) + 0x38) = x8_11
            else
                *(x8_10 + (x9_17 << 0xb) + x11_1 * 0x3c + 0x60) = x10_4
                x9_18 = x8_10 + (x9_17 << 0xb)
                x8_11 = *(x9_18 + 0x17c)
                
                if (x8_11 != 0)
                    *(x9_18 + x11_1 * 0x3c + (0xb << 2) + 0x38) = x8_11
            return x0_7
        
        x23 = 3
    else
        x23 = 2
else
    x23 = 1

uint64_t x1 = zx.q(*(x8 + 0xc))
int32_t var_78 = x1.d
int32_t x9_4 = *(x8 + 0x10)
int32_t var_70 = *(x8 + 0x14)
int32_t var_6c = *(x8 + 0x18)
int32_t var_68 = *(x8 + 0x1c)
int32_t var_64 = *(x8 + 0x20)
int32_t var_60 = *(x8 + 0x24)
int32_t var_5c = *(x8 + 0x28)
int32_t var_58 = *(x8 + 0x2c)
int32_t var_54 = *(x8 + 0x30)
int32_t x8_1 = *(x8 + 0x124)
uint64_t x20
int32_t x8_3

if (x8_1 == 0)
    x20 = 0xa
    x8_3 = *(x21 + (x22 << 0xb) + 0x17c)
    
    if (x8_3 != 0)
        (&var_78)[zx.q(x20.d)] = x8_3
        x20 = zx.q(x20.d + 1)
else
    x20 = 0xb
    int32_t var_50_1 = x8_1
    x8_3 = *(x21 + (x22 << 0xb) + 0x17c)
    
    if (x8_3 != 0)
        (&var_78)[zx.q(x20.d)] = x8_3
        x20 = zx.q(x20.d + 1)
uint64_t x24 = 0

if ((Traits_SetupFilter(zx.q(x19), x1) & 1) != 0)
    goto label_a56ad4

int32_t x0_3

do
    x20 = sx.q(x20.d) - 1
    (&var_78)[sx.q(x24.d)] = (&var_78)[x20]
    x24 = zx.q(x24.d - 1)
label_a56ad4:
    x24 = sx.q(x24.d) + 1
    
    if (x24.d s>= x20.d)
        break
    
    x0_3 = Traits_SetupFilter(zx.q(x19), zx.q((&var_78)[x24]))
while ((x0_3 & 1) == 0)
int64_t x0_5 = ShuffleIntsN(gCampaignSetup, &var_78, x20.d, 2)
void* x9_16 = x21 + (x22 << 0xb) + x23 * 0x3c
*(x9_16 + 0x38) = var_78
*(x9_16 + 0x3c) = x9_4
return x0_5
