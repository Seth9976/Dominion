// 函数: _ZN5Botan11ASN1_String11decode_fromERNS_11BER_DecoderE
// 地址: 0xcb5d04
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Botan::BER_Decoder::get_next_object()
uint32_t var_50
sub_cb578c(var_50)
*(arg1 + 0x38) = var_50
uint8_t* result
std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >::assign<uint8_t const*>(arg1 + 8, 
    result)
int32_t x8_1 = *(arg1 + 0x38)
int128_t var_68
int64_t var_58
int64_t var_38
void* __offset(Botan::BER_Decoder, 0x20) x20_1

if (x8_1 == 0x1c)
    uint8_t* x0_4 = *(arg1 + 8)
    Botan::ucs4_to_utf8(x0_4, *(arg1 + 0x10) - x0_4)
label_cb5d7c:
    x20_1 = arg1 + 0x20
    
    if ((zx.d(*x20_1) & 1) != 0)
        operator delete(*(arg1 + 0x30))
else
    if (x8_1 == 0x1e)
        uint8_t* x0_3 = *(arg1 + 8)
        Botan::ucs2_to_utf8(x0_3, *(arg1 + 0x10) - x0_3)
        goto label_cb5d7c
    
    int64_t var_40
    size_t x20_2 = var_40 - result
    
    if (x20_2 u>= -0x10)
        int64_t* x0_10 = std::__ndk1::__basic_string_common<true>::__throw_length_error()
        
        if (result != 0)
            uint8_t* result_2 = result
            Botan::deallocate_memory(result, var_38 - result, 1)
        
        sub_1101e04(x0_10)
        noreturn
    
    int64_t x22_1
    
    if (x20_2 u>= 0x17)
        uint64_t x23_1 = (x20_2 + 0x10) & 0xfffffffffffffff0
        int64_t x0_8 = operator new(x23_1)
        x22_1 = x0_8
        var_68:8.q = x20_2
        var_58 = x0_8
        var_68.q = x23_1 | 1
        memcpy(x22_1, result, x20_2)
    else
        x22_1 = &var_68 | 1
        var_68.b = (x20_2.d << 1).b
        
        if (x20_2 != 0)
            memcpy(x22_1, result, x20_2)
    
    *(x22_1 + x20_2) = 0
    x20_1 = arg1 + 0x20
    
    if ((zx.d(*x20_1) & 1) != 0)
        operator delete(*(arg1 + 0x30))

int128_t v0 = var_68
*(x20_1 + 0x10) = var_58
*x20_1 = v0

if (result == 0)
    return result

uint8_t* result_1 = result
return Botan::deallocate_memory(result, var_38 - result, 1)
