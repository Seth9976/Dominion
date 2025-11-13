// 函数: sub_de6bb8
// 地址: 0xde6bb8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((zx.d(arg1) & 1) == 0)
    if ((zx.d(arg7) & 1) != 0)
        goto label_de6bf4
    
    goto label_de6bd0

operator delete(arg2)

if ((zx.d(arg7) & 1) != 0)
label_de6bf4:
    operator delete(arg8)
    
    if ((zx.d(arg5) & 1) == 0)
        goto label_de6bd8
    
    goto label_de6c14

label_de6bd0:

if ((zx.d(arg5) & 1) != 0)
label_de6c14:
    operator delete(arg6)
    
    if ((zx.d(arg3) & 1) == 0)
        return sub_de6cb4() __tailcall
else
label_de6bd8:
    
    if ((zx.d(arg3) & 1) == 0)
        return sub_de6cb4() __tailcall

operator delete(arg4)
return sub_de6cb4() __tailcall
