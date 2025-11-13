// 函数: sub_697d80
// 地址: 0x697d80
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

arg4 - 1f
int32_t esi = arg2
arg1:1.b = (arg4 == 1f ? 1 : 0) << 6 | (is_unordered.d(arg4, 1f) ? 1 : 0) << 2 | (arg4 < 1f ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}

if (p_1 && esi s>= 0)
    int32_t temp1_1
    
    do
        void* eax = sub_697380(arg3, esi)
        
        if (*(eax + 4) == 6)
            float xmm0_7 = arg4 - 0f
            float xmm3
            
            if (not(0 f< xmm0_7))
                xmm3 = (zx.o(0)).d
            else if (xmm0_7 < 1f)
                xmm3 = sub_4ae110(4, xmm0_7, (zx.o(0)).d, 1f)
            else
                xmm3 = 1f
            
            float xmm0_9 = *(eax + 0x80)
            int128_t xmm1_1 = arg6[1]
            int128_t xmm0_10 = *arg6
            int128_t xmm3_1 = arg6[2]
            int128_t xmm4 = arg6[3]
            int128_t xmm5 = arg6[4]
            int128_t xmm6 = arg6[5]
            int128_t var_6c
            var_6c.d = (0f f- *(eax + 0x7c)) * xmm3 f+ *(eax + 0x7c) f+ xmm0_10
            var_6c:4.d = (0f - xmm0_9) * xmm3 + xmm0_9 f+ xmm0_10:4.d
            var_6c:8.d = ((1f f- *(eax + 0x74)) * xmm3 f+ *(eax + 0x74)) f* var_6c:8.d
            *arg5 = var_6c
            arg5[1] = xmm1_1
            arg5[2] = xmm3_1
            arg5[3] = xmm4
            arg5[4] = xmm5
            arg5[5] = xmm6
            return arg5
        
        temp1_1 = esi
        esi -= 1
    while (temp1_1 - 1 s>= 0)

*arg5 = *arg6
arg5[1] = arg6[1]
arg5[2] = arg6[2]
arg5[3] = arg6[3]
arg5[4] = arg6[4]
arg5[5] = arg6[5]
return arg5
