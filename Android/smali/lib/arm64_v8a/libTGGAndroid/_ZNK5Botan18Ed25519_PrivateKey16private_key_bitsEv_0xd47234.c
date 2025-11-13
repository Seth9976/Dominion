// 函数: _ZNK5Botan18Ed25519_PrivateKey16private_key_bitsEv
// 地址: 0xd47234
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x22 = _ReadMSR(tpidr_el0)
int64_t x9 = *(x22 + 0x28)
void* entry_x0
int128_t* x21 = *(entry_x0 + 0x20)
int128_t* x0
int128_t v0
int128_t v1
x0, v0, v1 = Botan::allocate_memory(0x20, 1)
v1 = *x21
v0 = x21[1]
int128_t var_60
__builtin_memset(&var_60, 0, 0x20)
int64_t var_70 = (zx.o(0)).q
*x0 = v1
x0[1] = v0
int128_t var_a0
__builtin_memset(&var_a0, 0, 0x28)
Botan::DER_Encoder::add_object(&var_a0, 4, nullptr, x0)
Botan::DER_Encoder::get_contents()
void* x23 = var_60:8.q

if (x23 != 0)
    int128_t var_50
    void* __saved_x8_1 = var_50.q
    void* x0_3
    
    if (__saved_x8_1 == x23)
        x0_3 = x23
    else
        do
            __saved_x8_1 -= 0x38
            sub_f230d4(&var_50:8, __saved_x8_1)
        while (x23 != __saved_x8_1)
        
        x0_3 = var_60:8.q
    
    var_50.q = x23
    operator delete(x0_3)

int64_t x0_4 = var_70

if (x0_4 != 0)
    var_70 = x0_4
    Botan::deallocate_memory(x0_4, var_60.q - x0_4, 1)

int64_t* result_1
int64_t* result = result_1

if (&var_a0 == result)
    result = (*(*result + 0x20))()
else if (result != 0)
    result = (*(*result + 0x28))()

if (x0 != 0)
    result = Botan::deallocate_memory(x0, 0x20, 1)

if (*(x22 + 0x28) == x9)
    return result

__stack_chk_fail()
noreturn
