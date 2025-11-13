// 函数: _Z23RandomDoodadFromKingdomR9RandomPCGRK20CampaignMissionSetup
// 地址: 0xa55180
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t i = *arg2
uint64_t x10 = zx.q(*(gCampaignData + 0x68))
int64_t x9 = *(gCampaignData + 0x60)
int32_t* x11_2 = *(x9 + (((zx.q(i) | zx.q(i s>> 4)) & x10) << 3))
int32_t var_38[0xa]
int32_t x8

if (x11_2 == 0)
label_a551c0:
    x8 = 0
else
    while (*x11_2 != i)
        x11_2 = *(x11_2 + 8)
        
        if (x11_2 == 0)
            goto label_a551c0
    
    var_38[0] = x11_2[1]
    x8 = 1

int32_t x11_3 = *(arg2 + 4)

for (int32_t* i_1 = *(x9 + (((zx.q(x11_3) | zx.q(x11_3 s>> 4)) & x10) << 3)); i_1 != 0; 
        i_1 = *(i_1 + 8))
    if (*i_1 == x11_3)
        var_38[zx.q(x8)] = i_1[1]
        x8 += 1
        break

int32_t x11_5 = *(arg2 + 8)

for (int32_t* i_2 = *(x9 + (((zx.q(x11_5) | zx.q(x11_5 s>> 4)) & x10) << 3)); i_2 != 0; 
        i_2 = *(i_2 + 8))
    if (*i_2 == x11_5)
        var_38[zx.q(x8)] = i_2[1]
        x8 += 1
        break

int32_t x11_7 = *(arg2 + 0xc)

for (int32_t* i_3 = *(x9 + (((zx.q(x11_7) | zx.q(x11_7 s>> 4)) & x10) << 3)); i_3 != 0; 
        i_3 = *(i_3 + 8))
    if (*i_3 == x11_7)
        var_38[zx.q(x8)] = i_3[1]
        x8 += 1
        break

int32_t x11_9 = *(arg2 + 0x10)

for (int32_t* i_4 = *(x9 + (((zx.q(x11_9) | zx.q(x11_9 s>> 4)) & x10) << 3)); i_4 != 0; 
        i_4 = *(i_4 + 8))
    if (*i_4 == x11_9)
        var_38[zx.q(x8)] = i_4[1]
        x8 += 1
        break

int32_t x11_11 = *(arg2 + 0x14)

for (int32_t* i_5 = *(x9 + (((zx.q(x11_11) | zx.q(x11_11 s>> 4)) & x10) << 3)); i_5 != 0; 
        i_5 = *(i_5 + 8))
    if (*i_5 == x11_11)
        var_38[zx.q(x8)] = i_5[1]
        x8 += 1
        break

int32_t x11_13 = *(arg2 + 0x18)

for (int32_t* i_6 = *(x9 + (((zx.q(x11_13) | zx.q(x11_13 s>> 4)) & x10) << 3)); i_6 != 0; 
        i_6 = *(i_6 + 8))
    if (*i_6 == x11_13)
        var_38[zx.q(x8)] = i_6[1]
        x8 += 1
        break

int32_t x11_15 = *(arg2 + 0x1c)

for (int32_t* i_7 = *(x9 + (((zx.q(x11_15) | zx.q(x11_15 s>> 4)) & x10) << 3)); i_7 != 0; 
        i_7 = *(i_7 + 8))
    if (*i_7 == x11_15)
        var_38[zx.q(x8)] = i_7[1]
        x8 += 1
        break

int32_t x11_17 = *(arg2 + 0x20)

for (int32_t* i_8 = *(x9 + (((zx.q(x11_17) | zx.q(x11_17 s>> 4)) & x10) << 3)); i_8 != 0; 
        i_8 = *(i_8 + 8))
    if (*i_8 == x11_17)
        var_38[zx.q(x8)] = i_8[1]
        x8 += 1
        break

int32_t x11_19 = *(arg2 + 0x24)

for (int32_t* i_9 = *(x9 + (((zx.q(x11_19) | zx.q(x11_19 s>> 4)) & x10) << 3)); i_9 != 0; 
        i_9 = *(i_9 + 8))
    if (*i_9 == x11_19)
        var_38[zx.q(x8)] = i_9[1]
        x8 += 1
        
        if (x8 != 0)
            goto label_a55418
        
        goto label_a55440

if (x8 == 0)
label_a55440:
    return 0

label_a55418:
return zx.q(var_38[sx.q(RandomInt(arg1, x8))])
