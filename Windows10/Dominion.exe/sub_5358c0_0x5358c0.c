// 函数: sub_5358c0
// 地址: 0x5358c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_14 = __chkstk(0x1920)
void var_8
sub_561e00(__security_cookie ^ &var_8, 0, 4, 0)
void arg_c88
uint32_t result = sub_567110(&arg_c88, 6, 0, 5)
__builtin_memcpy(&__return_addr, result, 0xc84)

if (arg2 == 2)
    void* eax_2 = sub_573400()
    uint32_t esi_1 = zx.d(__return_addr.w)
    void* edi_1 = *(eax_2 + 4)
    
    if (esi_1 u>= 0x320)
        sub_591930()
    
    int32_t eax_3 = esi_1 * 0x64
    result = sub_5754f0(eax_3, *(eax_3 + edi_1 + 0x1a4c), edi_1, 4, 0)
    
    if (result.b != 0)
        uint32_t esi_2 = zx.d(arg1)
        void* edi_2 = *(sub_573400() + 4)
        
        if (esi_2 u>= 0x320)
            sub_591930()
        
        int32_t eax_5 = esi_2 * 0x64
        result = sub_5754f0(eax_5, *(eax_5 + edi_2 + 0x1a4c), edi_2, 4, 0)
        
        if (result.b != 0)
            int32_t* var_38 = &std::_Func_impl_no_alloc<enum CardID (__cdecl *)(void), void>::`vftable'{for `std::_Func_base<void>'}
            int32_t* (* var_34_1)() = sub_565ce0
            int32_t** var_14_3 = &var_38
            result = sub_5699b0(var_38)

CookieCheckFunction(result)
return result
