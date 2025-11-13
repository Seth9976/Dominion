// 函数: _Z21RandomDoodadFromBellsR9RandomPCGRK20CampaignMissionSetup
// 地址: 0xa54f9c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t i = 0
int32_t x20 = 0
int32_t var_d0[0x24]

do
    uint64_t x0 = zx.q(*(arg2 + 0x580 + i))
    
    if (x0.d == 0)
        break
    
    int32_t var_34
    
    if ((HasAssociatedDoodad(x0, &var_34) & 1) != 0)
        var_d0[sx.q(x20)] = var_34
        x20 += 1
    
    i += 0x14
while (i != 0x280)

uint64_t x10 = zx.q(*(arg2 + 0x28))

if (x10.d != 0)
    uint64_t x8_2 = zx.q(*(gCampaignData + 0x68))
    int64_t x9_2 = *(gCampaignData + 0x60)
    int32_t* x11_4 = *(x9_2 + ((x8_2 & (zx.q(x10.d s>> 4) | x10)) << 3))
    uint64_t x10_1
    
    if (x11_4 == 0)
    label_a55040:
        x10_1 = zx.q(*(arg2 + 0x64))
        
        if (x10_1.d != 0)
        label_a55074:
            int32_t* x11_9 = *(x9_2 + ((x8_2 & (zx.q(x10_1.d s>> 4) | x10_1)) << 3))
            uint64_t x10_3
            
            if (x11_9 == 0)
            label_a55090:
                x10_3 = zx.q(*(arg2 + 0xa0))
                
                if (x10_3.d != 0)
                label_a550c4:
                    int32_t* x11_14 = *(x9_2 + ((x8_2 & (zx.q(x10_3.d s>> 4) | x10_3)) << 3))
                    uint64_t x10_5
                    
                    if (x11_14 == 0)
                    label_a550e0:
                        x10_5 = zx.q(*(arg2 + 0xdc))
                        
                        if (x10_5.d != 0)
                        label_a55114:
                            
                            for (int32_t* i_1 =
                                    *(x9_2 + ((x8_2 & (zx.q(x10_5.d s>> 4) | x10_5)) << 3)); i_1 != 0; 
                                    i_1 = *(i_1 + 8))
                                if (*i_1 == x10_5.d)
                                    var_d0[sx.q(x20)] = i_1[1]
                                    x20 += 1
                                    
                                    if (x20 != 0)
                                        goto label_a55144
                                    
                                    goto label_a55164
                    else
                        while (*x11_14 != x10_3.d)
                            x11_14 = *(x11_14 + 8)
                            
                            if (x11_14 == 0)
                                goto label_a550e0
                        
                        var_d0[sx.q(x20)] = x11_14[1]
                        x20 += 1
                        x10_5 = zx.q(*(arg2 + 0xdc))
                        
                        if (x10_5.d != 0)
                            goto label_a55114
            else
                while (*x11_9 != x10_1.d)
                    x11_9 = *(x11_9 + 8)
                    
                    if (x11_9 == 0)
                        goto label_a55090
                
                var_d0[sx.q(x20)] = x11_9[1]
                x20 += 1
                x10_3 = zx.q(*(arg2 + 0xa0))
                
                if (x10_3.d != 0)
                    goto label_a550c4
    else
        while (*x11_4 != x10.d)
            x11_4 = *(x11_4 + 8)
            
            if (x11_4 == 0)
                goto label_a55040
        
        var_d0[sx.q(x20)] = x11_4[1]
        x20 += 1
        x10_1 = zx.q(*(arg2 + 0x64))
        
        if (x10_1.d != 0)
            goto label_a55074

if (x20 == 0)
label_a55164:
    return 0

label_a55144:
return zx.q(var_d0[sx.q(RandomInt(arg1, x20))])
