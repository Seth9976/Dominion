// 函数: sub_d89180
// 地址: 0xd89180
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg8 != 0)
    char* x8_3 = arg9
    char* x0_1 = arg8
    
    if (x8_3 != arg8)
        char* x21_1 = x8_3
        
        do
            x21_1 = &x21_1[-0x18]
            
            if ((zx.d(*x21_1) & 1) != 0)
                operator delete(*(x8_3 - 8))
            
            x8_3 = x21_1
        while (arg8 != x21_1)
        
        x0_1 = arg8
    
    arg9 = arg8
    operator delete(x0_1)
    
    if ((zx.d(arg6) & 1) == 0)
        goto label_d89198
    
    goto label_d89268

if ((zx.d(arg6) & 1) == 0)
label_d89198:
    
    if ((zx.d(arg4) & 1) != 0)
        goto label_d89278
    
    goto label_d891a0

label_d89268:
operator delete(arg7)

if ((zx.d(arg4) & 1) == 0)
label_d891a0:
    
    if ((zx.d(arg2) & 1) == 0)
        sub_1101e04(arg1)
        noreturn
else
label_d89278:
    operator delete(arg5)
    
    if ((zx.d(arg2) & 1) == 0)
        sub_1101e04(arg1)
        noreturn

operator delete(arg3)
sub_1101e04(arg1)
noreturn
