// 函数: _Z23HasRandomExtraPileSetupRK10DomCardDefR13ExtraPileSlotP11AbilityFlagPPFb11DomCardEnumE
// 地址: 0xbf6c70
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8_8 = zx.q(*(arg1 + 0xe0))

if (x8_8.d != 0)
    void* __offset(DomCardDef, 0x108) x9_1
    int64_t x10_1
    
    if (x8_8.d != 0xd || *(arg1 + 0x108) == 0)
        x8_8 = zx.q(*(arg1 + 0x1a0))
        
        if (x8_8.d == 0xd)
            if (*(arg1 + 0x1c8) != 0)
                x9_1 = arg1 + 0x1c8
                x10_1 = 1
                goto label_bf6d90
            
        label_bf6cbc:
            x8_8 = zx.q(*(arg1 + 0x260))
            
            if (x8_8.d != 0)
                if (x8_8.d == 0xd && *(arg1 + 0x288) != 0)
                    x9_1 = arg1 + 0x288
                    x10_1 = 2
                    goto label_bf6d90
                
                x8_8 = zx.q(*(arg1 + 0x320))
                
                if (x8_8.d != 0)
                    if (x8_8.d == 0xd && *(arg1 + 0x348) != 0)
                        x9_1 = arg1 + 0x348
                        x10_1 = 3
                        goto label_bf6d90
                    
                    x8_8 = zx.q(*(arg1 + 0x3e0))
                    
                    if (x8_8.d != 0)
                        if (x8_8.d == 0xd && *(arg1 + 0x408) != 0)
                            x9_1 = arg1 + 0x408
                            x10_1 = 4
                            goto label_bf6d90
                        
                        x8_8 = zx.q(*(arg1 + 0x4a0))
                        
                        if (x8_8.d != 0)
                            if (x8_8.d == 0xd && *(arg1 + 0x4c8) != 0)
                                x9_1 = arg1 + 0x4c8
                                x10_1 = 5
                                goto label_bf6d90
                            
                            x8_8 = zx.q(*(arg1 + 0x560))
                            
                            if (x8_8.d != 0)
                                if (x8_8.d == 0xd && *(arg1 + 0x588) != 0)
                                    x9_1 = arg1 + 0x588
                                    x10_1 = 6
                                    goto label_bf6d90
                                
                                if (*(arg1 + 0x620) != 0xd)
                                    return 0
                                
                                x8_8 = *(arg1 + 0x648)
                                
                                if (x8_8 != 0)
                                    x9_1 = arg1 + 0x648
                                    x10_1 = 7
                                    goto label_bf6d90
        else if (x8_8.d != 0)
            goto label_bf6cbc
    else
        x10_1 = 0
        x9_1 = arg1 + 0x108
    label_bf6d90:
        void* x8_9 = arg1 + x10_1 * 0xc0
        *arg2 = *(x8_9 + 0xf8)
        x8_8 = zx.q(*(x8_9 + 0xfc))
        
        if (arg4 != 0)
            *arg4 = *x9_1
        
        if (arg3 != 0)
            *arg3 = *(arg1 + x10_1 * 0xc0 + 0x194)

return zx.q(x8_8.d)
