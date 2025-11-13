// 函数: sub_52d160
// 地址: 0x52d160
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax
sub_561af0(eax, 0, 1, 0)
int32_t* result
int32_t ecx_1
int32_t edx
result, ecx_1, edx = sub_562880(arg3, arg2, arg1)

if (result != 0)
    int32_t var_1c_1 = ecx_1
    int32_t ebx
    ebx:1.b = sub_568530(result, edx, result.w, 3)
    uint32_t esi_1 = zx.d(result.w)
    void* edi = *(sub_573400() + 4)
    
    if (esi_1 u>= 0x320)
        sub_591930()
    
    int32_t eax_3 = esi_1 * 0x64
    result = sub_5754f0(eax_3, *(eax_3 + edi + 0x1a4c), edi, 2, 0)
    ebx.b = result.b
    
    if (ebx.b != 0)
        result = sub_56e9c0(1)
    
    int32_t* var_40
    
    if (ebx:1.b != 0)
        var_40 = &std::_Func_impl_no_alloc<enum CardID (__cdecl *)(void), void>::`vftable'{for `std::_Func_base<void>'}
        int32_t* (* var_3c_1)() = sub_565ce0
        int32_t** var_1c_4 = &var_40
        result = sub_5699b0(var_40)
    
    if (ebx.b != 0)
        var_40 = &std::_Func_impl_no_alloc<class <lambda_2de6b240643c1e4d24e9b017095c2619>, void>::`vftable'{for `std::_Func_base<void>'}
        int32_t** var_1c_5 = &var_40
        return sub_5699b0(var_40)

return result
