// 函数: _ZN5Botan27XMSS_Verification_Operation6verifyERKNS_14XMSS_SignatureERKNSt6__ndk16vectorIhNS_16secure_allocatorIhEEEERKNS_14XMSS_PublicKeyE
// 地址: 0xed3e84
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* var_58
__builtin_memset(&var_58, 0, 0x18)
int64_t* x0 = Botan::allocate_memory(0x20, 1)
*x0 = 0
*(x0 + 7) = 0
x0[2] = 0
x0[3] = 0
void* var_70
__builtin_memset(&var_70, 0, 0x18)
var_58 = x0
void* var_50 = &x0[4]
*(x0 + 0xf) = 0xff
void* var_a0 = *arg2
int64_t i_2 = *(*(arg1 + 8) + 0x58)
int64_t i_1

i_1 = i_2 u> 8 ? 8 : i_2

int64_t* var_88

if (i_2 u>= 9)
    var_88.b = 0
    std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(&var_70, i_2 - 8)

var_88 = &var_70

if (i_1 != 0)
    int64_t i
    
    do
        void var_a1
        sub_f4a08c(&var_88, &var_a1 + i_1)
        i = i_1
        i_1 -= 1
    while (i != 1)

std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::vector(&var_a0)
(*(**(arg1 + 0x18) + 0x38))()
int64_t* x0_5 = *(arg1 + 0x18)
int64_t x1_3 = *(arg1 + 0x20)
(*(*x0_5 + 0x18))(x0_5, x1_3, *(arg1 + 0x28) - x1_3)
int64_t* x0_6 = *(arg1 + 0x18)
char var_34 = 2
(*(*x0_6 + 0x18))(x0_6, &var_34, 1)
int64_t* x0_7 = *(arg1 + 0x18)
void* x1_5 = var_a0
void* var_98
(*(*x0_7 + 0x18))(x0_7, x1_5, var_98 - x1_5)
int64_t* x0_8 = *(arg1 + 0x18)
int64_t* entry_x3
int64_t x1_6 = entry_x3[0x1e]
(*(*x0_8 + 0x18))(x0_8, x1_6, entry_x3[0x1f] - x1_6)
int64_t* x0_9 = *(arg1 + 0x18)
void* x1_7 = var_70
int64_t var_68
(*(*x0_9 + 0x18))(x0_9, x1_7, var_68 - x1_7)
int64_t* x0_10 = *(arg1 + 0x18)
int64_t x1_8 = *arg3
(*(*x0_10 + 0x18))(x0_10, x1_8, *(arg3 + 8) - x1_8)
*(arg1 + 0x18)
Botan::Buffered_Computation::final()
void* x0_12 = var_a0
int64_t var_90

if (x0_12 != 0)
    var_98 = x0_12
    Botan::deallocate_memory(x0_12, var_90 - x0_12, 1)

(*(*entry_x3 + 0x90))(entry_x3)
Botan::XMSS_Verification_Operation::root_from_signature(arg1, arg2, &var_88, &var_58)
void* x0_16 = var_a0
char* x9_5 = entry_x3[0x1e]
int32_t x19_1
void* var_98_1

if (var_98 - x0_16 != entry_x3[0x1f] - x9_5)
    x19_1 = 0
    
    if (x0_16 != 0)
        var_98_1 = x0_16
        Botan::deallocate_memory(x0_16, var_90 - x0_16, 1)
else if (x0_16 == var_98)
    x19_1 = 1
    
    if (x0_16 != 0)
        var_98_1 = x0_16
        Botan::deallocate_memory(x0_16, var_90 - x0_16, 1)
else
    void* x10_2 = x0_16
    
    do
        uint32_t x11_1 = zx.d(*x10_2)
        uint32_t x12_1 = zx.d(*x9_5)
        x19_1 = x11_1 == x12_1 ? 1 : 0
        
        if (x11_1 != x12_1)
            break
        
        x10_2 += 1
        x9_5 = &x9_5[1]
    while (var_98 != x10_2)
    
    if (x0_16 != 0)
        var_98_1 = x0_16
        Botan::deallocate_memory(x0_16, var_90 - x0_16, 1)
int64_t* x0_17 = var_88

if (x0_17 != 0)
    int64_t* var_80_1 = x0_17
    int64_t var_78
    Botan::deallocate_memory(x0_17, var_78 - x0_17, 1)

void* x0_18 = var_70

if (x0_18 != 0)
    void* var_68_1 = x0_18
    int64_t var_60
    Botan::deallocate_memory(x0_18, var_60 - x0_18, 1)

int64_t* x0_19 = var_58

if (x0_19 != 0)
    int64_t* var_50_1 = x0_19
    Botan::deallocate_memory(x0_19, &x0[4] - x0_19, 1)

return zx.q(x19_1)
