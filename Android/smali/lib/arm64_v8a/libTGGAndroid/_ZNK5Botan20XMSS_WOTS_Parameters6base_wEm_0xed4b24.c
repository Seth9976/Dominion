// 函数: _ZNK5Botan20XMSS_WOTS_Parameters6base_wEm
// 地址: 0xed4b24
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8_1 = *(arg1 + 0x50) * zx.q(*(arg1 + 0x68))
uint64_t i_2 = vcvtpd_u64_f64(float.s(zx.d(x8_1)) * fconvert.s(0.125f))
uint64_t i_1

i_1 = i_2 u> 8 ? 8 : i_2

void* result_1
__builtin_memset(&result_1, 0, 0x18)
int64_t entry_x1
int64_t var_38 = entry_x1 << (8 - (x8_1 & 7))
int64_t* var_28

if (i_2 u>= 9)
    var_28.b = 0
    std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(&result_1, i_2 - 8)

var_28 = &result_1
int64_t var_40

if (i_1 != 0)
    uint64_t i
    
    do
        sub_f4a08c(&var_28, &var_40:7 + i_1)
        i = i_1
        i_1 -= 1
    while (i != 1)

*(arg1 + 0x50)
Botan::XMSS_WOTS_Parameters::base_w(arg1, &result_1)
void* result = result_1

if (result == 0)
    return result

void* result_2 = result
return Botan::deallocate_memory(result, var_40 - result, 1)
