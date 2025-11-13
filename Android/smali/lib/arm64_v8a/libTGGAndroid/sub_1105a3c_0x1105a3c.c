// 函数: sub_1105a3c
// 地址: 0x1105a3c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* var_68 = &arg3[1]

if (zx.d(*arg3) != 1)
    fwrite("libunwind: Unsupported .eh_frame_hdr version\n", 0x2d, 1, __sF + 0x130)
else
    var_68 = &arg3[2]
    uint32_t x8_3 = zx.d(arg3[1])
    var_68 = &arg3[3]
    uint32_t x26_1 = zx.d(arg3[2])
    var_68 = &arg3[4]
    uint32_t x9_2 = zx.d(arg3[3])
    void* x25_1 = &arg3[zx.q(arg4)]
    sub_11046b8(arg1, &var_68, x25_1, x8_3, arg3)
    
    if (x26_1 != 0xff)
        int64_t result = sub_11046b8(arg1, &var_68, x25_1, x26_1, arg3)
        
        if (result == 0)
            return result
        
        int64_t result_1 = result
        void* x28_1 = var_68
        int64_t x0_2 = sub_110600c(x9_2)
        int64_t x21_1 = 0
        void* x19_2
        int64_t x0_4
        
        do
            if (result_1 u<= 1)
                x19_2 = x28_1 + x21_1 * x0_2
                break
            
            uint64_t result_2 = result_1 u>> 1
            int64_t x24_1 = result_2 + x21_1
            x19_2 = x28_1 + x24_1 * x0_2
            var_68 = x19_2
            x0_4 = sub_11046b8(arg1, &var_68, x25_1, x9_2, arg3)
            
            if (x0_4 u< arg2)
                x21_1 = x24_1
            
            if (x0_4 u< arg2)
                result_1 -= result_2
            else
                result_1 = result_2
        while (x0_4 != arg2)
        var_68 = x19_2
        sub_11046b8(arg1, &var_68, x25_1, x9_2, arg3)
        
        if (sub_1102604(arg1, sub_11046b8(arg1, &var_68, x25_1, x9_2, arg3), arg5, arg6) == 0
                && arg5[3] u<= arg2 && arg5[4] u> arg2)
            return 1

return 0
