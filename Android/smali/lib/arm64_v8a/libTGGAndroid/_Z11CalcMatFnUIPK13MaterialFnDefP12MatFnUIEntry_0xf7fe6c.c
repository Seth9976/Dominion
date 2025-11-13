// 函数: _Z11CalcMatFnUIPK13MaterialFnDefP12MatFnUIEntry
// 地址: 0xf7fe6c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8_1

if (*(arg1 + 8) s< 1)
    x8_1 = 0
else
    int64_t i = 0
    int32_t x17_1 = 0
    
    do
        int64_t x8_2 = *arg1
        void* x2_2 = x8_2 + i * 0x58
        
        if (*(x2_2 + 0x4c) f!= *V20 || not(*(x2_2 + 0x50) f== *(V20 + 4)))
            void* x2_3 = arg2 + (sx.q(x17_1) << 4)
            x17_1 += 1
            *x2_3 = 2
            *(x2_3 + 4) = i.d
            *(x2_3 + 0xc) = 4
        
        if (not(*(x8_2 + i * 0x58 + 0x40) f== 0f))
            void* x2_5 = arg2 + (sx.q(x17_1) << 4)
            x17_1 += 1
            *x2_5 = 2
            *(x2_5 + 4) = i.d
            *(x2_5 + 0xc) = 5
        
        if (*(x8_2 + i * 0x58 + 0x28) s>= 1)
            int32_t j = 0
            void* x3_1 = arg2 + 8 + (sx.q(x17_1) << 4)
            
            do
                *(x3_1 - 8) = 1
                *(x3_1 - 4) = i.d
                *x3_1 = j
                x3_1 += 0x10
                j += 1
            while (j s< *(x8_2 + i * 0x58 + 0x28))
            
            x17_1 += j
        
        void* x8 = arg2 + (sx.q(x17_1) << 4)
        *x8 = 0
        *(x8 + 4) = i.d
        x8_1 = x17_1 + 1
        i += 1
        x17_1 = x8_1
    while (i s< sx.q(*(arg1 + 8)))

return zx.q(x8_1)
