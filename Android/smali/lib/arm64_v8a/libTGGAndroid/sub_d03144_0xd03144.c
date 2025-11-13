// 函数: sub_d03144
// 地址: 0xd03144
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((zx.d(arg5) & 1) == 0)
    if ((zx.d(arg7) & 1) != 0)
        goto label_d031ac
    
    goto label_d0315c

operator delete(arg6)
int64_t* x0_4

if ((zx.d(arg7) & 1) != 0)
label_d031ac:
    operator delete(arg8)
    x0_4 = arg2[0xc]
    arg2[0xc] = 0
    
    if (x0_4 == 0)
        goto label_d03168
    
    goto label_d031c4

label_d0315c:
x0_4 = arg2[0xc]
arg2[0xc] = 0
int64_t* x0

if (x0_4 != 0)
label_d031c4:
    (*(*x0_4 + 8))()
    x0 = *arg3
    *arg3 = 0
    
    if (x0 != 0)
        (*(*x0 + 0x10))()
else
label_d03168:
    x0 = *arg3
    *arg3 = 0
    
    if (x0 != 0)
        (*(*x0 + 0x10))()
*arg2 = arg4 + 0x10
std::__ndk1::recursive_mutex::~recursive_mutex()
sub_1101e04(arg1)
noreturn
