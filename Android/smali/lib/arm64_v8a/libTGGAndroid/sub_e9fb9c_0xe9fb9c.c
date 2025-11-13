// 函数: sub_e9fb9c
// 地址: 0xe9fb9c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg5 != 0)
    char* x8_1 = arg6
    char* x0_1
    
    if (x8_1 == arg5)
        x0_1 = arg5
    else
        char* x24_1 = x8_1
        
        do
            x24_1 = &x24_1[-0x18]
            
            if ((zx.d(*x24_1) & 1) != 0)
                operator delete(*(x8_1 - 8))
            
            x8_1 = x24_1
        while (arg5 != x24_1)
        
        x0_1 = arg5
    
    arg6 = arg5
    operator delete(x0_1)

if (arg3 != 0)
    (*(*arg3 + 8))(arg3)

if (arg2 != 1)
    sub_1101e04(arg1)
    noreturn

__cxa_begin_catch(arg1)
__cxa_end_catch()

if (*(arg4 + 0x28) == arg7)
    return 0x1195

__stack_chk_fail()
noreturn
