// 函数: _ZNK5Botan20DL_Scheme_PrivateKey16private_key_bitsEv
// 地址: 0xd116cc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x21 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x21 + 0x28)
int128_t var_60
__builtin_memset(&var_60, 0, 0x20)
int64_t var_70 = (zx.o(0)).q
int128_t var_a0
__builtin_memset(&var_a0, 0, 0x28)
int64_t entry_x0
Botan::DER_Encoder::encode(&var_a0, entry_x0 + 8, 2)
Botan::DER_Encoder::get_contents()
void* x22 = var_60:8.q

if (x22 != 0)
    int128_t var_50
    void* __saved_x8_1 = var_50.q
    void* x0_2
    
    if (__saved_x8_1 == x22)
        x0_2 = x22
    else
        do
            __saved_x8_1 -= 0x38
            sub_f230d4(&var_50:8, __saved_x8_1)
        while (x22 != __saved_x8_1)
        
        x0_2 = var_60:8.q
    
    var_50.q = x22
    operator delete(x0_2)

int64_t x0_3 = var_70

if (x0_3 != 0)
    var_70 = x0_3
    Botan::deallocate_memory(x0_3, var_60.q - x0_3, 1)

int64_t* result_1
int64_t* result = result_1

if (&var_a0 == result)
    result = (*(*result + 0x20))()
else if (result != 0)
    result = (*(*result + 0x28))()

if (*(x21 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
