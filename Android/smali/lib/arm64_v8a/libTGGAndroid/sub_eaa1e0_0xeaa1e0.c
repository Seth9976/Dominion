// 函数: sub_eaa1e0
// 地址: 0xeaa1e0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x0 = arg7
arg7 = nullptr
void* __offset(vtable_for_Botan::DataSource_Stream, 0x10) arg_8 =
    _vtable_for_Botan::DataSource_Stream + 0x10

if (x0 == 0)
    if ((zx.d(arg5) & 1) != 0)
        goto label_eaa22c
    
    goto label_eaa208

(*(*x0 + 8))()
int64_t* x21

if ((zx.d(arg5) & 1) == 0)
label_eaa208:
    x21 = arg2[0x10]
    
    if (x21 != 0)
    label_eaa258:
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
label_eaa22c:
    operator delete(arg6)
    x21 = arg2[0x10]
    
    if (x21 != 0)
        goto label_eaa258
void* x0_4 = arg2[0xc]
*arg2 = _vtable_for_Botan::X509_Object + 0x10
void* x0_5

if (x0_4 == 0)
    x0_5 = arg2[9]
    
    if (x0_5 != 0)
        goto label_eaa2d0
    
    goto label_eaa298

arg2[0xd] = x0_4
operator delete(x0_4)
x0_5 = arg2[9]
void* x0_7

if (x0_5 != 0)
label_eaa2d0:
    arg2[0xa] = x0_5
    operator delete(x0_5)
    x0_7 = arg2[6]
    arg2[1] = arg4 + 0x10
    
    if (x0_7 == 0)
        goto label_eaa2a8
    
    goto label_eaa2e8

label_eaa298:
x0_7 = arg2[6]
arg2[1] = arg4 + 0x10
void* x0_8

if (x0_7 != 0)
label_eaa2e8:
    arg2[7] = x0_7
    operator delete(x0_7)
    x0_8 = arg2[3]
    arg2[2] = arg3 + 0x10
    
    if (x0_8 != 0)
    label_eaa300:
        arg2[4] = x0_8
        operator delete(x0_8)
        sub_1101e04(arg1)
        noreturn
else
label_eaa2a8:
    x0_8 = arg2[3]
    arg2[2] = arg3 + 0x10
    
    if (x0_8 != 0)
        goto label_eaa300
sub_1101e04(arg1)
noreturn
