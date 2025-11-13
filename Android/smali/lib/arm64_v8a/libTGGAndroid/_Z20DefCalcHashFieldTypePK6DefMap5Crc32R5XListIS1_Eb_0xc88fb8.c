// 函数: _Z20DefCalcHashFieldTypePK6DefMap5Crc32R5XListIS1_Eb
// 地址: 0xc88fb8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint32_t x21 = arg2

if (arg1 != 0)
    if (*(arg1 + 0x18) - 1 u<= 0x10)
        uint8_t* x19_1 = *arg1
        return memcrc32(x19_1, strlen(x19_1), x21) __tailcall
    
    int64_t* i = *arg3
    int32_t x22_1 = arg4.d
    
    for (; i != 0; i = i[1])
        if (*i == arg1)
            return zx.q(x21)
    
    DefMap** x0_4 = XPooledCalloc(0x18)
    *x0_4 = arg1
    x0_4[1] = 0
    x0_4[2] = *(arg3 + 8)
    void* x8_5 = *(arg3 + 8)
    DefMap*** x8_6
    
    if (x8_5 == 0)
        x8_6 = arg3
    else
        x8_6 = x8_5 + 8
    
    *x8_6 = x0_4
    int32_t x8_7 = *(arg3 + 0x10)
    *(arg3 + 8) = x0_4
    *(arg3 + 0x10) = x8_7 + 1
    
    if ((x22_1 & 1) != 0)
        *arg1
        *(arg1 + 0x14)
        XTrace("      def %s size %d")
    
    uint32_t x0_10 =
        memcrc32(arg1 + 0x2c, 4, memcrc32(arg1 + 0x28, 4, memcrc32(arg1 + 0x14, 4, x21)))
    uint8_t* x21_1 = *arg1
    uint32_t x0_14 = memcrc32(x21_1, strlen(x21_1), x0_10)
    int32_t x24_1 = *(arg1 + 0x10)
    x21 = x0_14
    
    if (x24_1 != 0)
        DefField* x23_2 = *(arg1 + 8)
        
        if ((x22_1 & 1) == 0)
            x21 = DefCalcHashField(x23_2, zx.q(x21), arg3, false)
            
            if (x24_1 s>= 2)
                int32_t x22_2 = 1
                int64_t x23_4 = 0x68
                int32_t x24_3
                
                do
                    x24_3 = *(arg1 + 0x10)
                    x22_2 += 1
                    x21 = DefCalcHashField(*(arg1 + 8) + x23_4, zx.q(x21), arg3, false)
                    x23_4 += 0x68
                while (x22_2 s< x24_3)
        else
            uint32_t x0_16 = DefCalcHashField(x23_2, zx.q(x21), arg3, true)
            *arg1
            *(x23_2 + 8)
            x21 = x0_16
            XTrace("      def %s field %s %x")
            
            if (x24_1 s>= 2)
                int32_t x23_3 = 1
                int64_t x24_2 = 0x70
                int32_t x25_1
                
                do
                    x25_1 = *(arg1 + 0x10)
                    int64_t* x26_1 = *(arg1 + 8) + x24_2
                    x23_3 += 1
                    uint32_t x0_18 = DefCalcHashField(x26_1 - 8, zx.q(x21), arg3, true)
                    *arg1
                    *x26_1
                    x21 = x0_18
                    XTrace("      def %s field %s %x")
                    x24_2 += 0x68
                while (x23_3 s< x25_1)

return zx.q(x21)
