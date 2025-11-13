// 函数: _Z23GLSetSamplerRenderStateiP21FunctionalRenderStateP16OpenGLBufferData
// 地址: 0xf8e594
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8_1 = zx.q(*arg2 - 0x1c)

if (x8_1.d u> 0x2e)
    if (0xffffffff == arg1)
    label_f8e5e4:
        
        if (zx.d(*(arg3 + 0x147)) == 0)
            if (zx.d(*(arg3 + 0x148)) == 0)
                arg1 = 0xde1
            else
                arg1 = 0x8513
            
            if (x8_1.d u<= 0x2e)
                switch (x8_1)
                    case 0, 6, 0xc, 0x12, 0x18, 0x1e, 0x24, 0x2a
                        int64_t x2 = *(arg2 + 8)
                        
                        if (x2 != sx.q(*(arg3 + 0xec)))
                            glTexParameteri(arg1, 0x2802, x2)
                            *(arg3 + 0xec) = (*(arg2 + 8)).d
                    case 1, 7, 0xd, 0x13, 0x19, 0x1f, 0x25, 0x2b
                        int64_t x2_1 = *(arg2 + 8)
                        
                        if (x2_1 != sx.q(*(arg3 + 0xf0)))
                            glTexParameteri(arg1, 0x2803, x2_1)
                            *(arg3 + 0xf0) = (*(arg2 + 8)).d
                    case 2, 8, 0xe, 0x14, 0x1a, 0x20, 0x26, 0x2c
                        int64_t x2_2 = *(arg2 + 8)
                        
                        if (x2_2 != sx.q(*(arg3 + 0xf4)))
                            glTexParameteri(arg1, 0x8072, x2_2)
                            *(arg3 + 0xf4) = (*(arg2 + 8)).d
                    case 3, 9, 0xf, 0x15, 0x1b, 0x21, 0x27, 0x2d
                        int32_t x21_1 = *(arg2 + 8)
                        
                        if (zx.d(*(arg3 + 0x145)) != 0)
                            int32_t x8_9 = x21_1 & 0xfffffffd
                            
                            if (x8_9 == 0x2700)
                                x21_1 = 0x2600
                            else if (x8_9 == 0x2701)
                                x21_1 = 0x2601
                        
                        if (*(arg3 + 0xf8) != x21_1)
                            glTexParameteri(arg1, 0x2801, zx.q(x21_1))
                            *(arg3 + 0xf8) = x21_1
                        
                        int64_t x8_13 = *(arg2 + 0x10)
                        
                        if (x8_13 != sx.q(*(arg3 + 0x100)))
                            *(arg3 + 0x100) = x8_13.d
                    case 4, 0xa, 0x10, 0x16, 0x1c, 0x22, 0x28, 0x2e
                        int64_t x2_3 = *(arg2 + 8)
                        
                        if (x2_3 != sx.q(*(arg3 + 0xfc)))
                            glTexParameteri(arg1, 0x2800, x2_3)
                            *(arg3 + 0xfc) = (*(arg2 + 8)).d
else if (*(&data_865ea0 + (sx.q(x8_1.d) << 2)) == arg1)
    goto label_f8e5e4
