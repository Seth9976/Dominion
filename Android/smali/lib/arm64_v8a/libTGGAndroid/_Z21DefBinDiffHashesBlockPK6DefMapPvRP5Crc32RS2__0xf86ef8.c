// 函数: _Z21DefBinDiffHashesBlockPK6DefMapPvRP5Crc32RS2_
// 地址: 0xf86ef8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x25 = (*arg4).d
int32_t i_1 = DefIterGetFirst(arg1)
int32_t i = i_1

if (i_1 != 0xffffffff)
    do
        DefField* x0_5 = DefIterGetNext(arg1, &i)
        DefMap* x0_6 = *(x0_5 + 0x18)
        int32_t x24_1 = *(x0_6 + 0x18)
        
        if ((DefTypeIsBuiltIn(x0_6) & 1) == 0)
            if (x24_1 == 0xf)
            label_f87038:
                pthread_kill(pthread_self(), 6)
                XNoReturn()
                break
            
            if ((DefTypeIsDeepStructure(*(x0_5 + 0x18)) & 1) != 0)
                uint64_t x8_10 = zx.q(x24_1 - 5)
                
                if (x8_10.d u> 0xc)
                label_f86f44:
                    DefTypeIsBuiltIn(*(x0_5 + 0x18))
                    void* x0_2 = DefinitionGetFieldData(arg2, x0_5)
                    DefBinDiffHashesBlock(*(x0_5 + 0x18), x0_2, arg3, arg4)
                else
                    switch (x8_10)
                        case 0, 1, 3, 4, 6, 7, 0xc
                            goto label_f87038
                        case 2, 5, 8, 9, 0xb
                            goto label_f86f44
        else
            int32_t* x27_1 = *arg3
            *arg3 = &x27_1[1]
            uint8_t* x0_9 = DefinitionGetFieldData(arg2, x0_5)
            int32_t x0_10 = memcrc32(x0_9, sx.q(*(*(x0_5 + 0x18) + 0x14)), 0)
            
            if (*x27_1 != x0_10)
                *x27_1 = x0_10
                memcpy(*arg4, x0_9, sx.q(*(*(x0_5 + 0x18) + 0x14)))
                *arg4 += sx.q(*(*(x0_5 + 0x18) + 0x14))
    while (i != 0xffffffff)

return zx.q(*arg4 - x25)
