// 函数: _Z27DomCampaignPlayerStartCardsR7DomGame9PlayerWhoRK16DomCampaignSetupbPK11DomCardEnumi
// 地址: 0xbc1304
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg2
int64_t x22 = sx.q(x19)
void* x23 = arg3 + (x22 << 0xa)

if (*(x23 + 0x100) == 0)
    DefaultPlayerStartCards(arg1, zx.q(x19), arg4 & 1, arg5, arg6, arg6)
    uint64_t x1_3 = zx.q(*(arg3 + (x22 << 0xa)))
    
    if (x1_3.d != 0)
        if (x1_3.d != 0x101 && x1_3.d != 0x104)
            CardCreate(arg1, x1_3, 0x3eb, zx.q(x19), 0)
        
        uint64_t x1_4 = zx.q(*(arg3 + (x22 << 0xa) + 4))
        
        if (x1_4.d != 0)
            if (x1_4.d != 0x101 && x1_4.d != 0x104)
                CardCreate(arg1, x1_4, 0x3eb, zx.q(x19), 0)
            
            uint64_t x1_5 = zx.q(*(arg3 + (x22 << 0xa) + 8))
            
            if (x1_5.d != 0)
                if (x1_5.d != 0x101 && x1_5.d != 0x104)
                    CardCreate(arg1, x1_5, 0x3eb, zx.q(x19), 0)
                
                uint64_t x1_6 = zx.q(*(arg3 + (x22 << 0xa) + 0xc))
                
                if (x1_6.d != 0)
                    if (x1_6.d != 0x101 && x1_6.d != 0x104)
                        CardCreate(arg1, x1_6, 0x3eb, zx.q(x19), 0)
                    
                    uint64_t x1_7 = zx.q(*(arg3 + (x22 << 0xa) + 0x10))
                    
                    if (x1_7.d != 0)
                        if (x1_7.d != 0x101 && x1_7.d != 0x104)
                            CardCreate(arg1, x1_7, 0x3eb, zx.q(x19), 0)
                        
                        uint64_t x1_8 = zx.q(*(arg3 + (x22 << 0xa) + 0x14))
                        
                        if (x1_8.d != 0)
                            if (x1_8.d != 0x101 && x1_8.d != 0x104)
                                CardCreate(arg1, x1_8, 0x3eb, zx.q(x19), 0)
                            
                            uint64_t x1_9 = zx.q(*(arg3 + (x22 << 0xa) + 0x18))
                            
                            if (x1_9.d != 0)
                                if (x1_9.d != 0x101 && x1_9.d != 0x104)
                                    CardCreate(arg1, x1_9, 0x3eb, zx.q(x19), 0)
                                
                                uint64_t x1_10 = zx.q(*(arg3 + (x22 << 0xa) + 0x1c))
                                
                                if (x1_10.d != 0)
                                    if (x1_10.d != 0x101 && x1_10.d != 0x104)
                                        CardCreate(arg1, x1_10, 0x3eb, zx.q(x19), 0)
                                    
                                    uint64_t x1_11 = zx.q(*(arg3 + (x22 << 0xa) + 0x20))
                                    
                                    if (x1_11.d != 0)
                                        if (x1_11.d != 0x101 && x1_11.d != 0x104)
                                            CardCreate(arg1, x1_11, 0x3eb, zx.q(x19), 0)
                                        
                                        uint64_t x1_12 = zx.q(*(arg3 + (x22 << 0xa) + 0x24))
                                        
                                        if (x1_12.d != 0 && x1_12.d != 0x101 && x1_12.d != 0x104)
                                            CardCreate(arg1, x1_12, 0x3eb, zx.q(x19), 0)
else
    for (int64_t i = 0; i != 0x100; i += 4)
        uint64_t x1 = zx.q(*(x23 + i))
        
        if (x1.d == 0)
            break
        
        CardCreate(arg1, x1, 0x3eb, zx.q(x19), 0)
    
    for (int64_t i_1 = 0; i_1 != 0x100; i_1 += 4)
        uint64_t x1_1 = zx.q(*(arg3 + (x22 << 0xa) + 0x100 + i_1))
        
        if (x1_1.d == 0)
            break
        
        CardCreate(arg1, x1_1, 0x3eb, zx.q(x19), 0)

for (int64_t i_2 = 0; i_2 != 0x100; i_2 += 4)
    uint64_t x1_13 = zx.q(*(arg3 + (x22 << 0xa) + 0x200 + i_2))
    
    if (x1_13.d == 0)
        break
    
    CardCreate(arg1, x1_13, 0x3ec, zx.q(x19), 0)

for (int64_t i_3 = 0; i_3 != 0x100; i_3 += 4)
    uint64_t x1_14 = zx.q(*(arg3 + (x22 << 0xa) + 0x300 + i_3))
    
    if (x1_14.d == 0)
        break
    
    CardCreate(arg1, x1_14, 0x3e9, zx.q(x19), 0)
