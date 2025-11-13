// 函数: sub_a027a4
// 地址: 0xa027a4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x22 = arg2.d
int32_t result = BoardPileWhere(arg1, arg2)

if (result != 0)
    void* x8_1 = arg1 + (sx.q(result) << 4)
    int32_t i = *(x8_1 + 0x1534)
    int32_t result_1 = result
    char var_1c60[0x31c]
    void var_cc0
    int64_t x21_1
    void* x23_1
    
    if (i == 0)
        x21_1 = 0
        x23_1 = x8_1 + 0x1534
        
        if (x22 == 0x923 || x22 == 0x91c)
            var_1c60[0] = 1
    else
        x21_1 = 0
        
        do
            void* x15_1 = arg1 + mulu.dp.d(i, 0x68)
            int32_t x16_2 = *(x15_1 + (sx.q(arg3) << 2) + 0x1aa8)
            *(&var_cc0 + (x21_1 << 2)) = i
            var_1c60[x21_1] = (x16_2 u>> 2).b & 1
            i = *(x15_1 + 0x1ac8)
            x21_1 += 1
        while (i != 0)
        
        x23_1 = x8_1 + 0x1534
        
        if (x22 == 0x923 || x22 == 0x91c)
            var_1c60[0] = 1
    
    void var_1940
    result = sub_a02940(&var_cc0, &var_1c60, &var_1940, x21_1.d)
    
    if (x21_1.d == 0)
        *x23_1 = 0
    else
        uint64_t i_4 = zx.q(x21_1.d)
        int64_t i_7
        
        if (x21_1.d != 1)
            i_7 = i_4 & 0xfffffffe
            void var_cbc
            void* x10_1 = &var_cbc
            int64_t i_6 = i_7
            int64_t i_1
            
            do
                uint64_t x14_1 = zx.q(*(x10_1 - 4))
                uint64_t x15_2 = zx.q(*x10_1)
                i_1 = i_6
                i_6 -= 2
                x10_1 += 8
                *(arg1 + 0x1a68 + x14_1 * 0x68 + 0x60) = 0
                *(arg1 + 0x1a68 + x15_2 * 0x68 + 0x60) = 0
            while (i_1 != 2)
            
            if (i_7 != i_4)
                goto label_a028c8
        else
            i_7 = 0
        label_a028c8:
            int64_t i_5 = i_4 - i_7
            void* x9_1 = &var_cc0 + (i_7 << 2)
            int64_t i_2
            
            do
                uint64_t x12_1 = zx.q(*x9_1)
                x9_1 += 4
                i_2 = i_5
                i_5 -= 1
                *(arg1 + x12_1 * 0x68 + 0x1ac8) = 0
            while (i_2 != 1)
        *x23_1 = 0
        
        if (x21_1.d s>= 1)
            uint64_t i_3
            
            do
                void var_1944
                uint64_t x11_3 = zx.q(*(&var_1944 + (i_4 << 2)))
                i_3 = i_4
                i_4 -= 1
                void* x12_3 = arg1 + x11_3 * 0x68
                *(x12_3 + 0x1a74) = result_1
                *(x12_3 + 0x1a8c) = 0
                *(x12_3 + 0x1ac8) = *x23_1
                *x23_1 = x11_3.d
            while (i_3 s> 1)

return result
