// 函数: _ZN5Botan14parse_asn1_oidERKNSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
// 地址: 0xe8f2dc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void var_50
int64_t result = Botan::OID::OID(&var_50)
int64_t* entry_x8
__builtin_memset(entry_x8, 0, 0x18)
void* var_48
int64_t var_40
uint64_t x21 = var_40 - var_48

if (var_40 != var_48)
    if ((x21 & 0xffffffff80000000) != 0)
        int64_t* x0_5 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
        void* x8_4 = *entry_x8
        
        if (x8_4 != 0)
            entry_x8[1] = x8_4
            operator delete(x8_4)
            
            if (var_48 != 0)
            label_e8f398:
                operator delete(var_48)
                sub_1101e04(x0_5)
                noreturn
        else if (var_48 != 0)
            goto label_e8f398
        
        sub_1101e04(x0_5)
        noreturn
    
    int64_t x0_2 = operator new(x21)
    *entry_x8 = x0_2
    entry_x8[1] = x0_2
    entry_x8[2] = x0_2 + (x21 s>> 2 << 2)
    result = memcpy(x0_2, var_48, x21)
    entry_x8[1] = x0_2 + x21

if (var_48 == 0)
    return result

return operator delete(var_48)
