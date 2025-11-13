// 函数: _Z13AddMapToMergePK9AttribMapPS1_PfRiPK16UI2StateOverridef
// 地址: 0x10152a8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* x23 = *(arg5 + 8)

if (x23 != 0 && arg1 != 0 && zx.d(*x23) != 0)
    arg1 = AttribMapGetDef(*gUI2AttribTable, arg1, *macro_ptr_UI2StateOverrides, 0x69)
    
    if (arg1 != 0)
        uint64_t i_1 = zx.q(*(arg1 + 8))
        
        if (i_1.d s>= 1)
            void* x25_1 = *arg1 + 0x18
            uint64_t i
            
            do
                if (strcmp(x23, *(x25_1 - 0x18)).d == 0)
                    int64_t x8_3 = sx.q(*arg4)
                    *arg4 = x8_3.d + 1
                    arg2[x8_3] = x25_1
                    arg3[sx.q(*arg4) - 1] = arg6
                    break
                
                i = i_1
                i_1 -= 1
                x25_1 += 0x30
            while (i != 1)

int64_t x8_6 = sx.q(*arg4)
*arg4 = x8_6.d + 1
arg2[x8_6] = arg5 + 0x18
arg3[sx.q(*arg4) - 1] = arg6
