// 函数: sub_553520
// 地址: 0x553520
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void var_48
sub_561af0(__security_cookie ^ &var_48, 0, 1, 0)
sub_562100(1, 0)
int32_t var_44
int32_t* eax_2 = sub_562880(arg2, arg1, var_44)

if (eax_2 != 0)
    void* eax_3 = sub_573400()
    uint32_t esi_1 = zx.d(eax_2.w)
    int32_t ecx_1 = *(eax_3 + 0xc)
    void* edi = *(eax_3 + 4)
    var_44 = ecx_1
    
    if (esi_1 u>= 0x320)
        sub_591930()
        ecx_1 = var_44
    
    int32_t eax_4 = esi_1 * 0x64
    sub_576e90(eax_4, edi, &var_44, ecx_1, *(eax_4 + edi + 0x1a4c), 0)
    uint32_t var_40[0xb]
    int32_t eax_7
    int32_t edx_2
    edx_2:eax_7 = sx.q((*sub_576c00(&var_40, var_44)).d)
    sub_562100((eax_7 - edx_2) s>> 1, 0)

struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_f370586ea7c35aa952f27ab7f57b15ca>, void>::VTable
    * const var_78 = &std::_Func_impl_no_alloc<class <lambda_f370586ea7c35aa952f27ab7f57b15ca>, void>::`vftable'{for `std::_Func_base<void>'}
struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_f370586ea7c35aa952f27ab7f57b15ca>, void>::VTable
    * const* var_54_3 = &var_78
uint32_t result = sub_5699b0(var_78)
CookieCheckFunction(result)
return result
