// 函数: sub_e52278
// 地址: 0xe52278
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((zx.d(arg6) & 1) != 0)
    operator delete(arg7)

if (arg8 != 0)
    void* arg_a8 = arg8
    operator delete(arg8)

if (arg11 != 0)
    void* arg_d8 = arg11
    Botan::deallocate_memory(arg11, (arg12 - arg11) s>> 2, 4)

if ((zx.d(arg9) & 1) != 0)
    operator delete(arg10)

if ((zx.d(arg13) & 1) != 0)
    return sub_e5282c(arg14) __tailcall

void* x0_6

if ((zx.d(arg15) & 1) == 0)
    x0_6 = *arg4
    
    if (x0_6 != 0)
        goto label_e52880
    
    goto label_e52848

operator delete(arg16)
x0_6 = *arg4
void* x0_7

if (x0_6 != 0)
label_e52880:
    *(arg2 + 0x40) = x0_6
    operator delete(x0_6)
    x0_7 = *arg5
    
    if (x0_7 == 0)
        goto label_e52850
    
    goto label_e52894

label_e52848:
x0_7 = *arg5
int64_t* x0_9

if (x0_7 == 0)
label_e52850:
    x0_9 = *(arg2 + 0x18)
    *(arg2 + 0x18) = 0
    
    if (x0_9 != 0)
        goto label_e528b0
    
    goto label_e5285c

label_e52894:
*(arg2 + 0x28) = x0_7
operator delete(x0_7)
x0_9 = *(arg2 + 0x18)
*(arg2 + 0x18) = 0
int64_t* x20

if (x0_9 == 0)
label_e5285c:
    x20 = *(arg2 + 0x10)
    *(arg2 + 0x10) = 0
    
    if (x20 != 0)
    label_e528d4:
        memset(&x20[3], 0, 0x800)
        void* x0_11 = *x20
        
        if (x0_11 != 0)
            int64_t x8_12 = x20[2]
            x20[1] = x0_11
            Botan::deallocate_memory(x0_11, x8_12 - x0_11, 1)
        
        operator delete(x20)
else
label_e528b0:
    (*(*x0_9 + 8))()
    x20 = *(arg2 + 0x10)
    *(arg2 + 0x10) = 0
    
    if (x20 != 0)
        goto label_e528d4
void* x19 = *arg3
*arg3 = 0

if (x19 != 0)
    Botan::SRP6_Server_Session::~SRP6_Server_Session()
    operator delete(x19)

sub_1101e04(arg1)
noreturn
