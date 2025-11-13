// 函数: sub_e9fb60
// 地址: 0xe9fb60
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg9 != 0)
    (*(*arg9 + 0x18))(arg9)

if ((zx.d(arg5) & 1) != 0)
    operator delete(arg6)

if (arg7 != 0)
    char* x8_4 = arg8
    char* x0_3
    
    if (x8_4 == arg7)
        x0_3 = arg7
    else
        char* x24_1 = x8_4
        
        do
            x24_1 = &x24_1[-0x18]
            
            if ((zx.d(*x24_1) & 1) != 0)
                operator delete(*(x8_4 - 8))
            
            x8_4 = x24_1
        while (arg7 != x24_1)
        
        x0_3 = arg7
    
    arg8 = arg7
    operator delete(x0_3)

if (arg3 != 0)
    (*(*arg3 + 8))(arg3)

if (arg2 != 1)
    sub_1101e04(arg1)
    noreturn

__cxa_begin_catch(arg1)
__cxa_end_catch()

if (*(arg4 + 0x28) == arg10)
    return 0x1195

__stack_chk_fail()
noreturn
