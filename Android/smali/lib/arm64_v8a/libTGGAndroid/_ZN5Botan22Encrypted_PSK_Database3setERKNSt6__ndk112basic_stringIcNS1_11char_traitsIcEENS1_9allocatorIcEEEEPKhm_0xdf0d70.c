// 函数: _ZN5Botan22Encrypted_PSK_Database3setERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPKhm
// 地址: 0xdf0d70
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = zx.q(*arg2)
int32_t temp0 = x8.d & 1
void* x0

if (temp0 != 0)
    x0 = *(arg2 + 0x10)
else
    x0 = &arg2[1]

uint64_t x1

if (temp0 == 0)
    x1 = x8 u>> 1
else
    x1 = *(arg2 + 8)

Botan::nist_key_wrap_padded(x0, x1, *(arg1 + 8))
Botan::BlockCipher* x0_2 = (*(**(arg1 + 8) + 0x68))()
int64_t* x23 = *(arg1 + 0x10)
uint8_t* result
int64_t var_40
(*(*x23 + 0x18))(x23, result, var_40 - result)
Botan::Buffered_Computation::final()
uint64_t var_60
Botan::SymmetricAlgorithm::set_key(x0_2, var_60)
void* x0_6 = var_60
void* var_58

if (x0_6 != 0)
    var_58 = x0_6
    int64_t var_50
    Botan::deallocate_memory(x0_6, var_50 - x0_6, 1)

uint64_t entry_x3
Botan::nist_key_wrap_padded(arg3, entry_x3, x0_2)
Botan::base64_encode(result, var_40 - result)
uint8_t* x0_9 = var_60
Botan::base64_encode(x0_9, var_58 - x0_9)
char var_90
char var_78
(*(*arg1 + 0x38))(arg1, &var_78, &var_90)

if ((zx.d(var_90) & 1) == 0)
    if ((zx.d(var_78) & 1) != 0)
        goto label_df0ecc
    
    goto label_df0e74

void* var_80
operator delete(var_80)
uint64_t var_58_1

if ((zx.d(var_78) & 1) == 0)
label_df0e74:
    
    if (var_60 != 0)
        var_58_1 = var_60
        operator delete(var_60)
else
label_df0ecc:
    void* var_68
    operator delete(var_68)
    
    if (var_60 != 0)
        var_58_1 = var_60
        operator delete(var_60)
(*(*x0_2 + 8))(x0_2)

if (result == 0)
    return result

uint8_t* result_1 = result
return operator delete(result)
