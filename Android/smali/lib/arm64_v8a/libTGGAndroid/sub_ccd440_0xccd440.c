// 函数: sub_ccd440
// 地址: 0xccd440
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x0 = arg8
arg8 = nullptr

if (x0 == 0)
    if ((zx.d(arg4) & 1) != 0)
        goto label_ccd49c
    
    goto label_ccd45c

(*(*x0 + 0x10))()

if ((zx.d(arg4) & 1) == 0)
label_ccd45c:
    
    if ((zx.d(arg6) & 1) != 0)
        operator delete(arg7)
else
label_ccd49c:
    operator delete(arg5)
    
    if ((zx.d(arg6) & 1) != 0)
        operator delete(arg7)

operator delete(arg3)
int64_t* x0_4 = *(arg2 + 8)
*(arg2 + 8) = 0

if (x0_4 != 0)
    (*(*x0_4 + 8))()

sub_1101e04(arg1)
noreturn
