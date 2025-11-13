// 函数: sub_52f1d0
// 地址: 0x52f1d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

uint32_t var_1c = sub_56b800()
void* eax_1 = sub_573400()
uint32_t esi_1 = zx.d(var_1c.w)
int32_t ebx = *(sub_573400() + 4)

if (esi_1 u>= 0x320)
    sub_591930()

sub_5716d0(&var_1c, 0x1b, *(eax_1 + 4), 0xffffffff, 0, &var_1c, 1, *(esi_1 * 0x64 + ebx + 0x1a4c), 
    0, 0, 0)
int32_t var_18 = 0
int32_t var_20 = 0xffffffff
int32_t* var_54 = &var_18
int32_t* var_58 = &std::_Func_impl_no_alloc<class <lambda_0f13ddf92200a284c2ed65f792062fab>, void>::`vftable'{for `std::_Func_base<void>'}
int32_t* var_50_1 = &var_20
int32_t** var_34_1 = &var_58
sub_569b30(&var_58, &var_20, 1, var_58)
int32_t eax_8 = *(*(sub_573400() + 4) + 0x1504)

if (eax_8 != 3 && eax_8 != 5 && eax_8 != 4 && eax_8 != 6)
    __builtin_memset(&var_58, 0, 0x28)
    void* var_50_2
    void* var_4c_1
    int128_t* var_48_1
    int32_t var_44_1
    int32_t var_40_1
    int32_t var_3c_1
    int32_t var_38_1
    int32_t var_34_2
    sub_61b1b0(eax_8, 0x2c, eax_8 == 2, 0xffffffff, var_58, var_54, var_50_2, var_4c_1, var_48_1, 
        var_44_1, var_40_1, var_3c_1, var_38_1, var_34_2)

if (var_20 != 0xffffffff)
    void* eax_9 = sub_573400()
    uint32_t eax_10 = sub_576b30(eax_9, *(eax_9 + 0xc), *(eax_9 + 4), 0x2d, 0xc3d, 0, 0)
    int32_t esi_2 = var_20
    int32_t edx_2 = var_18
    int32_t ecx_3
    ecx_3.b = eax_10 s> 0
    void* var_10_1 = (ecx_3 << 3) + 8
    var_54.q = esi_2.q
    var_58 = &std::_Func_impl_no_alloc<class <lambda_745907079bf92016103870c34dab2cf8>, void>::`vftable'{for `std::_Func_base<void>'}
    int32_t var_4c_2 = edx_2
    int32_t** var_34_4 = &var_58
    sub_5698b0(&var_58, edx_2, esi_2, var_58)

void* result = *(sub_573400() + 4)
*(result + 0x19b4) = 0
return result
