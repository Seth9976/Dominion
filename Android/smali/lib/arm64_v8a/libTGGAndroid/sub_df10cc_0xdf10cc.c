// 函数: sub_df10cc
// 地址: 0xdf10cc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((zx.d(arg6) & 1) != 0)
    operator delete(arg7)
    
    if ((zx.d(arg4) & 1) != 0)
    label_df1118:
        operator delete(arg5)
        
        if ((zx.d(*arg3) & 1) == 0)
            goto label_df10e8
        
        goto label_df1138
else if ((zx.d(arg4) & 1) != 0)
    goto label_df1118

int64_t* x21

if ((zx.d(*arg3) & 1) != 0)
label_df1138:
    operator delete(arg2[0xa])
    x21 = arg2[7]
    
    if (x21 != 0)
    label_df1164:
        int64_t x9_1
        int32_t i
        
        do
            x9_1 = __ldaxr(&x21[1])
            i = __stlxr(x9_1 - 1, &x21[1])
        while (i != 0)
        
        if (x9_1 == 0)
            (*(*x21 + 0x10))(x21)
            std::__ndk1::__shared_weak_count::__release_weak()
else
label_df10e8:
    x21 = arg2[7]
    
    if (x21 != 0)
        goto label_df1164
void* x0_5 = arg2[3]
*arg2 = _vtable_for_Botan::Encrypted_PSK_Database + 0x10

if (x0_5 != 0)
    int64_t x8_8 = arg2[5]
    arg2[4] = x0_5
    Botan::deallocate_memory(x0_5, x8_8 - x0_5, 1)

int64_t* x0_6 = arg2[2]
arg2[2] = 0
int64_t* x0_7

if (x0_6 != 0)
    (*(*x0_6 + 0x10))()
    x0_7 = arg2[1]
    arg2[1] = 0
    
    if (x0_7 != 0)
    label_df11f0:
        (*(*x0_7 + 8))()
        sub_1101e04(arg1)
        noreturn
else
    x0_7 = arg2[1]
    arg2[1] = 0
    
    if (x0_7 != 0)
        goto label_df11f0
sub_1101e04(arg1)
noreturn
