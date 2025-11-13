// 函数: _Z12CanStartGameRK9GameSetupRK15PlayerConfig_V1
// 地址: 0x9b7f58
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + 0x60) == 1 && *(arg1 + 0x64) == *(arg2 + 0x18) && *(arg1 + 0x6c) == 2)
    int32_t x8_2 = *(arg1 + 0x28c)
    
    if (x8_2 == 1)
        if (*(arg1 + 0x298) == 2)
        label_9b7fac:
            int32_t x8_5 = *(arg1 + 0x4b8)
            
            if (x8_5 == 1)
                if (*(arg1 + 0x4c4) == 2)
                label_9b7fd8:
                    int32_t x8_8 = *(arg1 + 0x6e4)
                    
                    if (x8_8 == 1)
                        if (*(arg1 + 0x6f0) == 2)
                        label_9b8004:
                            int32_t x8_11 = *(arg1 + 0x910)
                            
                            if (x8_11 == 1)
                                if (*(arg1 + 0x91c) == 2)
                                label_9b8030:
                                    int32_t x8_14 = *(arg1 + 0xb3c)
                                    
                                    if (x8_14 == 1)
                                        if (*(arg1 + 0xb48) == 2)
                                        label_9b805c:
                                            int32_t x8_17 = *(arg1 + 0xd68)
                                            
                                            if (x8_17 == 1)
                                                if (*(arg1 + 0xd74) == 2)
                                                label_9b8088:
                                                    int32_t x8_20 = *(arg1 + 0xf94)
                                                    
                                                    if (x8_20 == 1)
                                                        if (*(arg1 + 0xfa0) == 2)
                                                            return 1
                                                    else if (x8_20 != 2 || *(arg1 + 0xf98) != 0)
                                                        return 1
                                            else if (x8_17 != 2 || *(arg1 + 0xd6c) != 0)
                                                goto label_9b8088
                                    else if (x8_14 != 2 || *(arg1 + 0xb40) != 0)
                                        goto label_9b805c
                            else if (x8_11 != 2 || *(arg1 + 0x914) != 0)
                                goto label_9b8030
                    else if (x8_8 != 2 || *(arg1 + 0x6e8) != 0)
                        goto label_9b8004
            else if (x8_5 != 2 || *(arg1 + 0x4bc) != 0)
                goto label_9b7fd8
    else if (x8_2 != 2 || *(arg1 + 0x290) != 0)
        goto label_9b7fac

return 0
