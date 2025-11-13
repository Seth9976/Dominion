// 函数: sub_cf92dc
// 地址: 0xcf92dc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void arg_a8
sub_f2884c(&arg_a8, 0)
int64_t arg_8 = arg3 + 0x10

if (arg8 != 0)
    int64_t x9_1
    int32_t i
    
    do
        x9_1 = __ldaxr(&arg8[1])
        i = __stlxr(x9_1 - 1, &arg8[1])
    while (i != 0)
    
    if (x9_1 == 0)
        (*(*arg8 + 0x10))(arg8)
        std::__ndk1::__shared_weak_count::__release_weak()

arg_8 = arg2 + 0x10

if (arg7 != 0)
    void* arg_70 = arg7
    operator delete(arg7)

if (arg6 != 0)
    void* arg_58 = arg6
    operator delete(arg6)

void* __offset(vtable_for_Botan::AlgorithmIdentifier, 0x10) arg_10 =
    _vtable_for_Botan::AlgorithmIdentifier + 0x10

if (arg5 != 0)
    void* arg_40 = arg5
    operator delete(arg5)

void* __offset(vtable_for_Botan::OID, 0x10) arg_18 = _vtable_for_Botan::OID + 0x10
void** x22

if (arg4 != 0)
    void* arg_28 = arg4
    operator delete(arg4)
    x22 = arg9
    
    if (x22 == 0)
        sub_1101e04(arg1)
        noreturn
else
    x22 = arg9
    
    if (x22 == 0)
        sub_1101e04(arg1)
        noreturn

void** x20_1 = arg10
void** x0_8 = x22

if (x20_1 != x22)
    do
        x20_1 -= 0x88
        void arg_a0
        sub_f28658(&arg_a0, x20_1)
    while (x22 != x20_1)
    
    x0_8 = arg9

arg10 = x22
operator delete(x0_8)
sub_1101e04(arg1)
noreturn
