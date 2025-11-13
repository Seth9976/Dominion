// 函数: Java_com_TGActivity_TGActivity_nativeCommitText
// 地址: 0x106a268
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* x0 = (*(*arg1 + 0x548))(arg1, arg3, 0)

if (zx.d(*x0) != 0)
    char* x23_1 = x0
    
    do
        int128_t var_60
        __builtin_memset(&var_60, 0, 0x28)
        XString::XString()
        var_60.d = 0
        int32_t x9_1 = sx.d(*x23_1)
        int32_t x8_4 = x9_1 & 0xff
        
        if ((x9_1 & 0x80000000) != 0)
            if ((x8_4 & 0xe0) == 0xc0)
                x8_4 = (zx.d(x23_1[1]) & 0x3f) | (0x1f & x8_4) << 6
            else if ((x9_1 & 0xf0) == 0xe0)
                x8_4 = (((0xfffff03f & (x8_4 & 0xf) << 0xc) | (0x3f & zx.d(x23_1[1])) << 6)
                    & 0xffffffc0) | (zx.d(x23_1[2]) & 0x3f)
            else if ((x8_4 & 0xf8) == 0xf0)
                x8_4 = (((0xfffff03f
                    & ((0xfffc0fff & (x8_4 & 7) << 0x12) | (0x3f & zx.d(x23_1[1])) << 0xc))
                    | (0x3f & zx.d(x23_1[2])) << 6) & 0xffffffc0) | (zx.d(x23_1[3]) & 0x3f)
        
        var_60:4.d = x8_4
        InputQueueAddThreaded(&var_60)
        int32_t x9_9 = sx.d(*x23_1)
        
        if ((x9_9 & 0x80000000) != 0)
            int32_t x8_10 = x9_9 & 0xff
            
            if ((x8_10 & 0xe0) == 0xc0)
                x23_1 = &x23_1[1]
            else if ((x9_9 & 0xf0) == 0xe0)
                x23_1 = &x23_1[2]
            else if ((x8_10 & 0xf8) == 0xf0)
                x23_1 = &x23_1[3]
        
        XString::~XString()
        x23_1 = &x23_1[1]
    while (zx.d(*x23_1) != 0)

return (*(*arg1 + 0x550))(arg1, arg3, x0)
