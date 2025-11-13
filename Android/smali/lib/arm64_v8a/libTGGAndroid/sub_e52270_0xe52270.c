// 函数: sub_e52270
// 地址: 0xe52270
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((zx.d(arg7) & 1) != 0)
    operator delete(arg8)

if (arg6 != 0)
    void* arg_78 = arg6
    operator delete(arg6)

void* x0_2

if ((zx.d(arg9) & 1) == 0)
    x0_2 = *arg4
    
    if (x0_2 != 0)
        goto label_e52880
    
    goto label_e52848

operator delete(arg10)
x0_2 = *arg4
void* x0_3

if (x0_2 != 0)
label_e52880:
    *(arg2 + 0x40) = x0_2
    operator delete(x0_2)
    x0_3 = *arg5
    
    if (x0_3 == 0)
        goto label_e52850
    
    goto label_e52894

label_e52848:
x0_3 = *arg5
int64_t* x0_5

if (x0_3 == 0)
label_e52850:
    x0_5 = *(arg2 + 0x18)
    *(arg2 + 0x18) = 0
    
    if (x0_5 != 0)
        goto label_e528b0
    
    goto label_e5285c

label_e52894:
*(arg2 + 0x28) = x0_3
operator delete(x0_3)
x0_5 = *(arg2 + 0x18)
*(arg2 + 0x18) = 0
int64_t* x20

if (x0_5 == 0)
label_e5285c:
    x20 = *(arg2 + 0x10)
    *(arg2 + 0x10) = 0
    
    if (x20 != 0)
    label_e528d4:
        memset(&x20[3], 0, 0x800)
        void* x0_7 = *x20
        
        if (x0_7 != 0)
            int64_t x8_8 = x20[2]
            x20[1] = x0_7
            Botan::deallocate_memory(x0_7, x8_8 - x0_7, 1)
        
        operator delete(x20)
else
label_e528b0:
    (*(*x0_5 + 8))()
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
