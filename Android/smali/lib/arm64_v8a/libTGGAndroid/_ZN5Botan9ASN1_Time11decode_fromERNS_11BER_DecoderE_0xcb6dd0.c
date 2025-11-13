// 函数: _ZN5Botan9ASN1_Time11decode_fromERNS_11BER_DecoderE
// 地址: 0xcb6dd0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Botan::BER_Decoder::get_next_object()
void* result
int64_t var_40
size_t x20 = var_40 - result

if (x20 u>= -0x10)
    sub_c776cc(std::__ndk1::__basic_string_common<true>::__throw_length_error())
    noreturn

int64_t var_68
void* var_58
char* x22

if (x20 u>= 0x17)
    uint64_t x23_1 = (x20 + 0x10) & 0xfffffffffffffff0
    void* x0_2 = operator new(x23_1)
    x22 = x0_2
    size_t var_60_1 = x20
    var_58 = x0_2
    var_68 = x23_1 | 1
    memcpy(x22, result, x20)
else
    x22 = &var_68 | 1
    var_68.b = (x20.d << 1).b
    
    if (x20 != 0)
        memcpy(x22, result, x20)

x22[x20] = 0
Botan::ASN1_Time::set_to(arg1, &var_68)

if ((zx.d(var_68.b) & 1) != 0)
    operator delete(var_58)

if (result == 0)
    return result

void* result_1 = result
int64_t var_38
return Botan::deallocate_memory(result, var_38 - result, 1)
