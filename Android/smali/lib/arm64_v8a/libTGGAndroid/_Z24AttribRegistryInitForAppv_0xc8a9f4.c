// 函数: _Z24AttribRegistryInitForAppv
// 地址: 0xc8a9f4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*gAttribTableLookupCount s< 1)
    return 

int64_t i = 0

do
    void* x22_1 = *(gAttribTableFastLookupArray + (i << 3))
    int32_t x23_2
    
    if (*(x22_1 + 0x10) s< 1)
        x23_2 = 1
    else
        int64_t x23_1 = 0
        int64_t j = 0
        int32_t x24_1 = 0
        
        do
            int32_t* x26_1 = *(x22_1 + 8) + x23_1
            int64_t x0_2 = DefMapFromTypeString(*(x26_1 + 0x10))
            int32_t x8_4 = *x26_1
            *(x26_1 + 0x18) = x0_2
            j += 1
            
            if (x8_4 s> x24_1)
                x24_1 = x8_4
            
            x23_1 += 0x68
        while (j s< sx.q(*(x22_1 + 0x10)))
        
        x23_2 = x24_1 + 1
    
    int64_t x0 = XCalloc(x23_2 << 3)
    int32_t x8_5 = *(x22_1 + 0x10)
    *(x22_1 + 0x18) = x0
    *(x22_1 + 0x20) = x23_2
    
    if (x8_5 s>= 1)
        int32_t* x8_6 = *(x22_1 + 8)
        *(x0 + (zx.q(*x8_6) << 3)) = x8_6
        
        if (*(x22_1 + 0x10) s>= 2)
            int64_t x8_8 = 0x68
            int64_t j_1 = 1
            
            do
                j_1 += 1
                int32_t* x10_2 = *(x22_1 + 8) + x8_8
                x8_8 += 0x68
                *(*(x22_1 + 0x18) + (zx.q(*x10_2) << 3)) = x10_2
            while (j_1 s< sx.q(*(x22_1 + 0x10)))
    
    i += 1
while (i s< sx.q(*gAttribTableLookupCount))
