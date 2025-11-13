// 函数: _Z13LogReadActionPiiRiR8DomYield
// 地址: 0x9f4c78
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x10 = sx.q(*arg3)

if (x10.d s< arg2)
    *arg3 = x10.d + 1
    int32_t x8_2 = arg1[x10]
    int32_t x9_1 = *(arg4 + 4)
    
    if (x9_1 != x8_2 && x8_2 != 9 && x9_1 != 1)
        printf("choice mismatch %d %d\n", zx.q(x9_1), zx.q(x8_2))
        pthread_kill(pthread_self(), 6)
        return MCTS_ClearSavedLog(XNoReturn()) __tailcall
    
    *(arg4 + 4) = x8_2
    int64_t x8_3 = sx.q(*arg3)
    *arg3 = x8_3.d + 1
    int32_t x9_3 = *(arg4 + 4)
    uint64_t x8_4 = zx.q(arg1[x8_3])
    *(arg4 + 0x74) = x8_4.d
    
    if (x9_3 == 5 || x9_3 == 9)
    label_9f4d14:
        
        if (*(arg4 + 0xd18) != 0 && x8_4.d s>= 1)
            int64_t i = 0
            
            do
                int64_t x11_2 = sx.q(*arg3)
                *arg3 = x11_2.d + 1
                *(arg4 + 0xd08 + (i << 2)) = arg1[x11_2]
                i += 1
            while (i s< sx.q(*(arg4 + 0x74)))
    else if (x8_4.d s>= 1)
        int64_t x9_4 = 0
        
        do
            int64_t x8_5 = sx.q(*arg3)
            *arg3 = x8_5.d + 1
            *(arg4 + 0x78 + (x9_4 << 2)) = arg1[x8_5]
            x8_4 = sx.q(*(arg4 + 0x74))
            x9_4 += 1
        while (x9_4 s< x8_4)
        
        goto label_9f4d14
    
    int64_t x8_7 = sx.q(*arg3)
    *arg3 = x8_7.d + 1
    *(arg4 + 0x48) = arg1[x8_7]
    int64_t x8_9 = sx.q(*arg3)
    *arg3 = x8_9.d + 1
    *(arg4 + 0x70) = arg1[x8_9]

return zx.q(x10.d s< arg2 ? 1 : 0)
