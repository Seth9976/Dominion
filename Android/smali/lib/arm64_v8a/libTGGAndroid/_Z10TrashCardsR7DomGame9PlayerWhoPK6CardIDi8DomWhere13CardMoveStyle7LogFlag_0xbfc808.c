// 函数: _Z10TrashCardsR7DomGame9PlayerWhoPK6CardIDi8DomWhere13CardMoveStyle7LogFlag
// 地址: 0xbfc808
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void var_c90

if (arg4 s>= 1)
    uint64_t x8_1 = zx.q(arg4)
    int64_t i_4
    
    if (arg4 u>= 8)
        i_4 = x8_1 & 0xfffffff8
        int128_t v0
        v0.d = arg5
        v0:4.d = arg5
        v0:8.d = arg5
        v0:0xc.d = arg5
        void var_c80
        void* x10_1 = &var_c80
        int64_t i_3 = i_4
        int64_t i
        
        do
            *(x10_1 - 0x10) = v0
            *x10_1 = v0
            i = i_3
            i_3 -= 8
            x10_1 += 0x20
        while (i != 8)
        
        if (i_4 != x8_1)
            goto label_bfc85c
    else
        i_4 = 0
    label_bfc85c:
        void* x10_2 = &var_c90 + (i_4 << 2)
        int64_t i_2 = x8_1 - i_4
        int64_t i_1
        
        do
            i_1 = i_2
            i_2 -= 1
            *x10_2 = arg5
            x10_2 += 4
        while (i_1 != 1)

return TrashCards(arg1, arg2, arg3, arg4, &var_c90, arg6, arg7)
