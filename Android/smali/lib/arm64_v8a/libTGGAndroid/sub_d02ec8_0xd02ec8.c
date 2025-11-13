// 函数: sub_d02ec8
// 地址: 0xd02ec8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((zx.d(arg5) & 1) == 0)
    if ((zx.d(arg7) & 1) != 0)
        goto label_d02f30
    
    goto label_d02ee0

operator delete(arg6)
int64_t* x0_4

if ((zx.d(arg7) & 1) != 0)
label_d02f30:
    operator delete(arg8)
    x0_4 = arg2[0xc]
    arg2[0xc] = 0
    
    if (x0_4 == 0)
        goto label_d02eec
    
    goto label_d02f78

label_d02ee0:
x0_4 = arg2[0xc]
arg2[0xc] = 0
int64_t* x0

if (x0_4 != 0)
label_d02f78:
    (*(*x0_4 + 8))()
    x0 = *arg4
    *arg4 = 0
    
    if (x0 != 0)
        (*(*x0 + 0x10))()
else
label_d02eec:
    x0 = *arg4
    *arg4 = 0
    
    if (x0 != 0)
        (*(*x0 + 0x10))()
*arg2 = arg3 + 0x10
std::__ndk1::recursive_mutex::~recursive_mutex()
sub_1101e04(arg1)
noreturn
