// 函数: sub_ea9e14
// 地址: 0xea9e14
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x21 = arg2[0x10]

if (x21 != 0)
    int64_t x9_1
    int32_t i
    
    do
        x9_1 = __ldaxr(&x21[1])
        i = __stlxr(x9_1 - 1, &x21[1])
    while (i != 0)
    
    if (x9_1 == 0)
        (*(*x21 + 0x10))(x21)
        std::__ndk1::__shared_weak_count::__release_weak()

void* x0_2 = arg2[0xc]
*arg2 = _vtable_for_Botan::X509_Object + 0x10
void* x0_3

if (x0_2 == 0)
    x0_3 = arg2[9]
    
    if (x0_3 != 0)
        goto label_ea9ea8
    
    goto label_ea9e70

arg2[0xd] = x0_2
operator delete(x0_2)
x0_3 = arg2[9]
void* x0_5

if (x0_3 != 0)
label_ea9ea8:
    arg2[0xa] = x0_3
    operator delete(x0_3)
    x0_5 = arg2[6]
    arg2[1] = arg4 + 0x10
    
    if (x0_5 == 0)
        goto label_ea9e80
    
    goto label_ea9ec0

label_ea9e70:
x0_5 = arg2[6]
arg2[1] = arg4 + 0x10
void* x0_6

if (x0_5 != 0)
label_ea9ec0:
    arg2[7] = x0_5
    operator delete(x0_5)
    x0_6 = arg2[3]
    arg2[2] = arg3 + 0x10
    
    if (x0_6 != 0)
    label_ea9ed8:
        arg2[4] = x0_6
        operator delete(x0_6)
        sub_1101e04(arg1)
        noreturn
else
label_ea9e80:
    x0_6 = arg2[3]
    arg2[2] = arg3 + 0x10
    
    if (x0_6 != 0)
        goto label_ea9ed8
sub_1101e04(arg1)
noreturn
