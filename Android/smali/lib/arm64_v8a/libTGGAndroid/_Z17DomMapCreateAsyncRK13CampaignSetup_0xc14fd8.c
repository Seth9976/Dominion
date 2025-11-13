// 函数: _Z17DomMapCreateAsyncRK13CampaignSetup
// 地址: 0xc14fd8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x9 = *(gMapGlobals + 0x14)
uint64_t x8_1

if (x9 != *(gMapGlobals + 0xc))
    x8_1 = zx.q(*(gMapGlobals + 8))
else
    x8_1 = zx.q(*(gMapGlobals + 8))
    
    if (x8_1.d != 0)
        void* i_1 = *gMapGlobals
        int64_t x14_1 = 0x5110
        void* i = i_1
        
        do
            if (zx.d(*(i_1 + x14_1 + 2)) != 0)
                if (i != 0xffffffff)
                    int64_t x14_2 = i_1 + x8_1 * 0x5118
                    
                    do
                        if (*i == 2)
                            int32_t x17_1 = *(gMapGlobals + 0x10)
                            x9 -= 1
                            *(gMapGlobals + 0x10) = zx.d(*(i + 0x5110))
                            *(gMapGlobals + 0x14) = x9
                            *(i + 0x5110) = x17_1
                        
                        if (i == 0)
                            i = i_1
                        else
                            i += 0x5118
                        
                        if (i u>= x14_2)
                            break
                        
                        void* x16_4 = i + 0x5110
                        
                        while (zx.d(*(x16_4 + 2)) == 0)
                            i += 0x5118
                            x16_4 += 0x5118
                            
                            if (i u>= x14_2)
                                goto label_c15044
                    while (i != 0xffffffff)
                
                break
            
            i += 0x5118
            x14_1 += 0x5118
        while (i u< i_1 + x8_1 * 0x5118)

label_c15044:
uint64_t x22 = zx.q(*(gMapGlobals + 0x10))
uint64_t x8_2
int64_t x9_1
int32_t x10_1

if (x22.d != x8_1.d)
    x9_1 = *gMapGlobals
    x10_1 = *(x9_1 + x22 * 0x5118 + 0x5110)
    x8_2 = x22
else
    x9_1 = *gMapGlobals
    x10_1 = x8_1.d + 1
    *(gMapGlobals + 8) = x10_1
    x8_2 = zx.q(x8_1.d)

*(gMapGlobals + 0x10) = x10_1
int32_t* x20 = x9_1 + x8_2 * 0x5118
memset(x20, 0, 0x5110)
x20[0x1444] = x22.d | *(gMapGlobals + 0x18) << 0x10
int32_t x8_6 = *(gMapGlobals + 0x18)
int32_t x8_7

if (x8_6 == 0xffff)
    x8_7 = 1
else
    x8_7 = x8_6 + 1

*(gMapGlobals + 0x14) += 1
*(gMapGlobals + 0x18) = x8_7
*x20 = 0
memcpy(&x20[2], arg1, 0x5020)
int128_t v0
int128_t v1
int128_t v2
v0, v1, v2 = MapParamsFromCampaign(arg1, *(arg1 + 8))
int128_t var_78
*(x20 + 0x5038) = var_78
int128_t var_88
*(x20 + 0x5028) = var_88
int128_t var_48
*(x20 + 0x5068) = var_48
int128_t var_58
*(x20 + 0x5058) = var_58
int128_t var_68
*(x20 + 0x5048) = var_68
int64_t var_38
*(x20 + 0x5078) = var_38
int32_t x19_1 = x20[0x1444]
int32_t* x0_3 = XPooledCalloc(0x18)
*x0_3 = x19_1
*(x0_3 + 8) = 0
*(x0_3 + 0x10) = *(gMapGlobals + 0x30)
void* x8_9 = *(gMapGlobals + 0x30)
int32_t** x8_10

if (x8_9 == 0)
    x8_10 = gMapGlobals + 0x28
else
    x8_10 = x8_9 + 8

*x8_10 = x0_3
int32_t x8_11 = *(gMapGlobals + 0x38)
*(gMapGlobals + 0x30) = x0_3
*(gMapGlobals + 0x38) = x8_11 + 1
DomMapProcessQueue()
return zx.q(x19_1)
