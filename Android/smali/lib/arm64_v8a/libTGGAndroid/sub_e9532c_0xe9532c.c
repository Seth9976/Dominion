// 函数: sub_e9532c
// 地址: 0xe9532c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t arg_180 = arg2 + 0x10
int64_t* x0_1

if (arg6 == 0)
    x0_1 = arg5
    arg5 = nullptr
    
    if (x0_1 != 0)
        goto label_e954f0
    
    goto label_e954c8

void* arg_190 = arg6
operator delete(arg6)
x0_1 = arg5
arg5 = nullptr
void* arg_80

if (x0_1 == 0)
label_e954c8:
    
    if (arg3 != 0)
        arg_80 = arg3
        Botan::deallocate_memory(arg3, arg4 - arg3, 1)
else
label_e954f0:
    (*(*x0_1 + 0x38))()
    
    if (arg3 != 0)
        arg_80 = arg3
        Botan::deallocate_memory(arg3, arg4 - arg3, 1)

if (arg7 != 0)
    void* arg_258 = arg7
    Botan::deallocate_memory(arg7, arg8 - arg7, 1)

if (arg11 != 0)
    (*(*arg11 + 0x38))()

if (arg9 != 0)
    Botan::deallocate_memory(arg9, arg10 - arg9, 1)

sub_1101e04(arg1)
noreturn
