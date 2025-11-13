// 函数: sub_e52274
// 地址: 0xe52274
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

std::exception::~exception()

if ((zx.d(arg7) & 1) != 0)
    return sub_e527c4(arg8) __tailcall

__cxa_free_exception()

if (arg6 != 0)
    int64_t arg_78 = arg6
    return sub_e5282c(arg6) __tailcall

void* x0_5

if ((zx.d(arg9) & 1) == 0)
    x0_5 = *arg4
    
    if (x0_5 != 0)
        goto label_e52880
    
    goto label_e52848

operator delete(arg10)
x0_5 = *arg4
void* x0_6

if (x0_5 != 0)
label_e52880:
    *(arg2 + 0x40) = x0_5
    operator delete(x0_5)
    x0_6 = *arg5
    
    if (x0_6 == 0)
        goto label_e52850
    
    goto label_e52894

label_e52848:
x0_6 = *arg5
int64_t* x0_8

if (x0_6 == 0)
label_e52850:
    x0_8 = *(arg2 + 0x18)
    *(arg2 + 0x18) = 0
    
    if (x0_8 != 0)
        goto label_e528b0
    
    goto label_e5285c

label_e52894:
*(arg2 + 0x28) = x0_6
operator delete(x0_6)
x0_8 = *(arg2 + 0x18)
*(arg2 + 0x18) = 0
int64_t* x20_1

if (x0_8 == 0)
label_e5285c:
    x20_1 = *(arg2 + 0x10)
    *(arg2 + 0x10) = 0
    
    if (x20_1 != 0)
    label_e528d4:
        memset(&x20_1[3], 0, 0x800)
        void* x0_10 = *x20_1
        
        if (x0_10 != 0)
            int64_t x8_10 = x20_1[2]
            x20_1[1] = x0_10
            Botan::deallocate_memory(x0_10, x8_10 - x0_10, 1)
        
        operator delete(x20_1)
else
label_e528b0:
    (*(*x0_8 + 8))()
    x20_1 = *(arg2 + 0x10)
    *(arg2 + 0x10) = 0
    
    if (x20_1 != 0)
        goto label_e528d4
void* x19 = *arg3
*arg3 = 0

if (x19 != 0)
    Botan::SRP6_Server_Session::~SRP6_Server_Session()
    operator delete(x19)

sub_1101e04(arg1)
noreturn
