// 函数: sub_500db0
// 地址: 0x500db0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
void* eax_2
int32_t edx
eax_2, edx = sub_573400()
void* esi = eax_2

if (*esi != 3)
    eax_2, edx = sub_591930()

void* eax_3 = sub_576940(eax_2, edx, *(esi + 4), *(esi + 0x10))
int32_t edi = *(eax_3 + 0xa0)
int32_t var_20[0x6]
void* result
int32_t edx_1
result, edx_1 = memcpy(&var_20, eax_3 + 0x88, edi << 2)
int32_t esi_1 = 0

if (edi s> 0)
    do
        int32_t ecx_2 = var_20[esi_1]
        int32_t* var_54 = &std::_Func_impl_no_alloc<class <lambda_dacc3e749dc66277cee47a3f4934abc7>, void>::`vftable'{for `std::_Func_base<void>'}
        int32_t** var_30_1 = &var_54
        result, edx_1 = sub_5698b0(&var_54, edx_1, ecx_2, var_54)
        esi_1 += 1
    while (esi_1 s< edi)

CookieCheckFunction(result)
return result
