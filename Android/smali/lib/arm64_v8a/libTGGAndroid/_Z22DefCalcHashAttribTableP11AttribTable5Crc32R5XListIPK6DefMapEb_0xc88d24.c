// 函数: _Z22DefCalcHashAttribTableP11AttribTable5Crc32R5XListIPK6DefMapEb
// 地址: 0xc88d24
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint32_t x21

if (arg1 == 0)
    x21 = 0
else
    x21 = arg2
    
    if (*(arg1 + 0x10) s>= 1)
        if ((arg4.d & 1) == 0)
            int64_t i = 0
            
            do
                int64_t x26_1 = *(arg1 + 8)
                uint8_t* x22_1 = x26_1 + i * 0x68
                uint32_t x0_22 = memcrc32(x22_1, 4, x21)
                uint8_t* x21_3 = *(x22_1 + 8)
                int32_t x0_26 = memcrc32(x21_3, strlen(x21_3), x0_22)
                uint32_t x0_32 = memcrc32(&x22_1[0x50], 4, 
                    memcrc32(&x22_1[0x40], 4, 
                        DefCalcHashFieldType(*(x22_1 + 0x18), zx.q(x0_26), arg3, false)))
                int32_t x8_10 = *(x22_1 + 0x50)
                x21 = x0_32
                
                if ((x8_10 & 3) != 0)
                    uint8_t* x22_2 = *(x26_1 + i * 0x68 + 0x38)
                    
                    if (*(x22_2 + 8) != 0)
                        int64_t j
                        
                        do
                            uint32_t x0_34 = memcrc32(x22_2, 4, x21)
                            char* x21_4 = *(x22_2 + 8)
                            uint32_t x0_38 = memcrc32(x21_4, strlen(x21_4), x0_34)
                            j = *(x22_2 + 0x18)
                            x21 = x0_38
                            x22_2 = &x22_2[0x10]
                        while (j != 0)
                else if ((x8_10 & 0x20) != 0)
                    x21 = DefCalcHashAttribTable(*(x26_1 + i * 0x68 + 0x38), zx.q(x21), arg3, false)
                
                i += 1
            while (i s< sx.q(*(arg1 + 0x10)))
        else
            int64_t i_1 = 0
            
            do
                int64_t x27_1 = *(arg1 + 8)
                int32_t* x23_1 = x27_1 + i_1 * 0x68
                *(x23_1 + 8)
                *x23_1
                XTrace("              table %s pos %d")
                uint32_t x0_1 = memcrc32(x23_1, 4, x21)
                uint8_t* x21_1 = *(x23_1 + 8)
                int32_t x0_5 = memcrc32(x21_1, strlen(x21_1), x0_1)
                uint32_t x0_11 = memcrc32(&x23_1[0x14], 4, 
                    memcrc32(&x23_1[0x10], 4, 
                        DefCalcHashFieldType(*(x23_1 + 0x18), zx.q(x0_5), arg3, true)))
                int32_t x8_4 = x23_1[0x14]
                x21 = x0_11
                
                if ((x8_4 & 3) != 0)
                    uint8_t* x23_2 = *(x27_1 + i_1 * 0x68 + 0x38)
                    
                    if (*(x23_2 + 8) != 0)
                        int64_t j_1
                        
                        do
                            uint32_t x0_13 = memcrc32(x23_2, 4, x21)
                            uint8_t* x21_2 = *(x23_2 + 8)
                            uint32_t x0_17 = memcrc32(x21_2, strlen(x21_2), x0_13)
                            j_1 = *(x23_2 + 0x18)
                            x21 = x0_17
                            x23_2 = &x23_2[0x10]
                        while (j_1 != 0)
                else if ((x8_4 & 0x20) != 0)
                    x21 =
                        DefCalcHashAttribTable(*(x27_1 + i_1 * 0x68 + 0x38), zx.q(x21), arg3, true)
                
                i_1 += 1
            while (i_1 s< sx.q(*(arg1 + 0x10)))

return zx.q(x21)
