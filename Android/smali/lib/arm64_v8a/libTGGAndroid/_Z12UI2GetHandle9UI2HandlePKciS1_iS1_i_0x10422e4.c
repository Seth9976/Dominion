// 函数: _Z12UI2GetHandle9UI2HandlePKciS1_iS1_i
// 地址: 0x10422e4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x0 = UI2GetHandle(arg1, arg2)

if (x0.d != 0)
    uint64_t x10_1 = zx.q(x0.d) & 0xffff
    int64_t x8_1 = *gUI2
    uint64_t i_1 = zx.q(*(x8_1 + mulu.dp.d(x10_1.d, 0x19a8) + 0x1970))
    
    if (i_1.d == 0)
        x0 = 0
    else
        if (i_1.d s> arg3)
            x0 = zx.q(*(x8_1 + x10_1 * 0x19a8 + (sx.q(arg3) << 2) + 0x1870))
        
        if (i_1.d s<= arg3 || *(x8_1 + (x0 & 0xffff) * 0x19a8 + 0x1658) != arg3)
            if (i_1.d s< 1)
                x0 = 0
            else
                int32_t* x10_3 = x8_1 + x10_1 * 0x19a8 + 0x1870
                uint64_t i
                
                do
                    x0 = zx.q(*x10_3)
                    
                    if (*(x8_1 + (x0 & 0xffff) * 0x19a8 + 0x1658) == arg3)
                        goto label_10423b8
                    
                    i = i_1
                    i_1 -= 1
                    x10_3 = &x10_3[1]
                while (i != 1)
                x0 = 0

label_10423b8:
return UI2GetHandle(x0, arg4, arg5, arg6, arg7) __tailcall
