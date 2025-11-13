// 函数: _ZN5Botan22Encrypted_PSK_Database6removeERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE
// 地址: 0xdf09ac
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* entry_x1
uint64_t x8 = zx.q(*entry_x1)
int32_t temp0 = x8.d & 1
void* x0

if (temp0 != 0)
    x0 = *(entry_x1 + 0x10)
else
    x0 = &entry_x1[1]

uint64_t x1

if (temp0 == 0)
    x1 = x8 u>> 1
else
    x1 = *(entry_x1 + 8)

Botan::nist_key_wrap_padded(x0, x1, *(arg1 + 8))
uint8_t* result
int64_t var_20
Botan::base64_encode(result, var_20 - result)
char var_40
(*(*arg1 + 0x48))(arg1, &var_40)
void* var_30

if ((zx.d(var_40) & 1) != 0)
    operator delete(var_30)

if (result == 0)
    return result

uint8_t* result_1 = result
return operator delete(result)
