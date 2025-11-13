// 函数: _Z25HasGenerateExtraPileSetupRK10DomCardDefR13ExtraPileSlotP11AbilityFlagPPFiR14RandomizerDeckP11DomCardEnumiE
// 地址: 0xbf6dd8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8_8 = zx.q(*(arg1 + 0xe0))

if (x8_8.d != 0)
    void* __offset(DomCardDef, 0x100) x9_1
    int64_t x10_1
    
    if (x8_8.d != 0xd || *(arg1 + 0x100) == 0)
        x8_8 = zx.q(*(arg1 + 0x1a0))
        
        if (x8_8.d == 0xd)
            if (*(arg1 + 0x1c0) != 0)
                x9_1 = arg1 + 0x1c0
                x10_1 = 1
                goto label_bf6ef8
            
        label_bf6e24:
            x8_8 = zx.q(*(arg1 + 0x260))
            
            if (x8_8.d != 0)
                if (x8_8.d == 0xd && *(arg1 + 0x280) != 0)
                    x9_1 = arg1 + 0x280
                    x10_1 = 2
                    goto label_bf6ef8
                
                x8_8 = zx.q(*(arg1 + 0x320))
                
                if (x8_8.d != 0)
                    if (x8_8.d == 0xd && *(arg1 + 0x340) != 0)
                        x9_1 = arg1 + 0x340
                        x10_1 = 3
                        goto label_bf6ef8
                    
                    x8_8 = zx.q(*(arg1 + 0x3e0))
                    
                    if (x8_8.d != 0)
                        if (x8_8.d == 0xd && *(arg1 + 0x400) != 0)
                            x9_1 = arg1 + 0x400
                            x10_1 = 4
                            goto label_bf6ef8
                        
                        x8_8 = zx.q(*(arg1 + 0x4a0))
                        
                        if (x8_8.d != 0)
                            if (x8_8.d == 0xd && *(arg1 + 0x4c0) != 0)
                                x9_1 = arg1 + 0x4c0
                                x10_1 = 5
                                goto label_bf6ef8
                            
                            x8_8 = zx.q(*(arg1 + 0x560))
                            
                            if (x8_8.d != 0)
                                if (x8_8.d == 0xd && *(arg1 + 0x580) != 0)
                                    x9_1 = arg1 + 0x580
                                    x10_1 = 6
                                    goto label_bf6ef8
                                
                                if (*(arg1 + 0x620) != 0xd)
                                    return 0
                                
                                x8_8 = *(arg1 + 0x640)
                                
                                if (x8_8 != 0)
                                    x9_1 = arg1 + 0x640
                                    x10_1 = 7
                                    goto label_bf6ef8
        else if (x8_8.d != 0)
            goto label_bf6e24
    else
        x10_1 = 0
        x9_1 = arg1 + 0x100
    label_bf6ef8:
        void* x8_9 = arg1 + x10_1 * 0xc0
        *arg2 = *(x8_9 + 0xf8)
        x8_8 = zx.q(*(x8_9 + 0xfc))
        
        if (arg4 != 0)
            *arg4 = *x9_1
        
        if (arg3 != 0)
            *arg3 = *(arg1 + x10_1 * 0xc0 + 0x194)

return zx.q(x8_8.d)
