// 函数: _ZNK5Botan11Private_Key16private_key_infoEv
// 地址: 0xdf888c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x22 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x22 + 0x28)
int128_t var_60
__builtin_memset(&var_60, 0, 0x20)
int64_t var_70 = (zx.o(0)).q
int128_t var_a0
__builtin_memset(&var_a0, 0, 0x28)
Botan::DER_Encoder::start_cons(&var_a0, 0x10)
int64_t x0_2 = Botan::DER_Encoder::encode(&var_a0)
int64_t* entry_x0
(*(*entry_x0 + 0x88))(entry_x0)
int64_t* var_e0
(*var_e0)(&var_e0, x0_2)
(*(*entry_x0 + 0x80))(entry_x0)
uint64_t var_f8
Botan::DER_Encoder::add_object(x0_2, 4, nullptr, var_f8)
Botan::DER_Encoder::end_cons()
Botan::DER_Encoder::get_contents()

if (var_f8 != 0)
    uint64_t var_f0_1 = var_f8
    int64_t var_e8
    Botan::deallocate_memory(var_f8, var_e8 - var_f8, 1)

var_e0 = _vtable_for_Botan::AlgorithmIdentifier + 0x10
void* var_b8

if (var_b8 != 0)
    void* var_b0_1 = var_b8
    operator delete(var_b8)

void* __offset(vtable_for_Botan::OID, 0x10) var_d8 = _vtable_for_Botan::OID + 0x10
void* var_d0

if (var_d0 != 0)
    void* var_c8_1 = var_d0
    operator delete(var_d0)

void* x21_1 = var_60:8.q

if (x21_1 != 0)
    int128_t var_50
    void* __saved_x8_1 = var_50.q
    void* x0_13
    
    if (__saved_x8_1 == x21_1)
        x0_13 = x21_1
    else
        do
            __saved_x8_1 -= 0x38
            sub_f230d4(&var_50:8, __saved_x8_1)
        while (x21_1 != __saved_x8_1)
        
        x0_13 = var_60:8.q
    
    var_50.q = x21_1
    operator delete(x0_13)

int64_t x0_14 = var_70

if (x0_14 != 0)
    var_70 = x0_14
    Botan::deallocate_memory(x0_14, var_60.q - x0_14, 1)

int64_t* result_1
int64_t* result = result_1

if (&var_a0 == result)
    result = (*(*result + 0x20))()
else if (result != 0)
    result = (*(*result + 0x28))()

if (*(x22 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
