// 函数: sub_e77818
// 地址: 0xe77818
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((zx.d(arg5) & 1) == 0)
    if ((zx.d(arg11) & 1) != 0)
        goto label_e77854
    
    goto label_e77830

operator delete(arg6)

if ((zx.d(arg11) & 1) != 0)
label_e77854:
    operator delete(arg12)
    
    if ((zx.d(arg9) & 1) == 0)
        goto label_e77838
    
    goto label_e77874

label_e77830:

if ((zx.d(arg9) & 1) != 0)
label_e77874:
    operator delete(arg10)
    
    if ((zx.d(arg7) & 1) != 0)
        operator delete(arg8)
else
label_e77838:
    
    if ((zx.d(arg7) & 1) != 0)
        operator delete(arg8)

void* x0_4 = *arg4
int64_t* x0_5

if (x0_4 != 0)
    *(arg2 + 0x18) = x0_4
    operator delete(x0_4)
    x0_5 = *arg3
    *arg3 = 0
    
    if (x0_5 != 0)
    label_e77930:
        (*(*x0_5 + 8))()
        sub_1101e04(arg1)
        noreturn
else
    x0_5 = *arg3
    *arg3 = 0
    
    if (x0_5 != 0)
        goto label_e77930
sub_1101e04(arg1)
noreturn
