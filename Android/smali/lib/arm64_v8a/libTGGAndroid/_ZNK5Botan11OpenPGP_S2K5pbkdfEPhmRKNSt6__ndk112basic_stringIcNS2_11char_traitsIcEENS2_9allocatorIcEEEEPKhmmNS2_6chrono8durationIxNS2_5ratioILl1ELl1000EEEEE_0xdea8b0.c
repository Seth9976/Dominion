// 函数: _ZNK5Botan11OpenPGP_S2K5pbkdfEPhmRKNSt6__ndk112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEPKhmmNS2_6chrono8durationIxNS2_5ratioILl1ELl1000EEEEE
// 地址: 0xdea8b0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* result = arg7

if (arg7 == 0)
    int64_t* x0_1 = (*(**(arg1 + 8) + 0x28))()
    void* __offset(vtable_for_Botan::RFC4880_S2K_Family, 0x10) var_60 =
        _vtable_for_Botan::RFC4880_S2K_Family + 0x10
    uint64_t entry_x7
    Botan::RFC4880_S2K_Family::tune(&var_60, arg3, entry_x7)
    int64_t* var_68
    result = (*(*var_68 + 0x18))(var_68)
    (*(*var_68 + 8))(var_68)
    var_60 = _vtable_for_Botan::RFC4880_S2K_Family + 0x10
    int64_t var_58_2 = 0
    
    if (x0_1 != 0)
        (*(*x0_1 + 0x10))()

uint64_t x8_11 = zx.q(*arg4)
int32_t temp0 = x8_11.d & 1
void* x3

if (temp0 != 0)
    x3 = *(arg4 + 0x10)
else
    x3 = &arg4[1]

size_t x4

if (temp0 == 0)
    x4 = x8_11 u>> 1
else
    x4 = *(arg4 + 8)

sub_deafac(*(arg1 + 8), arg2, arg3, x3, x4, arg5, arg6, result)
return result
