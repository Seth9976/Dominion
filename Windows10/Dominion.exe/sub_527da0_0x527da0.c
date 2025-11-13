// 函数: sub_527da0
// 地址: 0x527da0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t edx = __chkstk(0x1988)
__security_cookie
int32_t c = 2
void arg_60
void arg_ce8
__builtin_memcpy(&arg_60, sub_568780(&arg_ce8, edx, 0x3ea, &arg_ce8), 0xc84)

if (arg3 s< 2)
    c = arg3

uint32_t result
int32_t ecx

if (c != 0)
    int32_t arg_4
    __builtin_memset(&arg_4, 0, 0x24)
    var_4.q = 0
    void* ecx_1 = &arg_60
    int128_t arg_28 = 0x14.o
    int128_t arg_38 = arg1.o
    int128_t arg_48 = arg2.o
    uint32_t var_28_2
    char var_24_2
    int32_t var_20_2
    
    if (c != 1)
        __builtin_memcpy(&arg_60, sub_563960(&arg_ce8, c, ecx_1, &arg_ce8, c, 9, &arg_28, 7, 0, 1), 
            0xc84)
        void* eax_10 = sub_573400()
        *(eax_10 + 0xc)
        int32_t var_c_2 = *(eax_10 + 4)
        int32_t ecx_5
        int32_t edi_2
        
        if (arg3 s> 0)
            edi_2, ecx_5 = __memfill_u32(&arg_ce8, 0x3ea, arg3)
        int32_t var_1c_5 = 0
        var_20_2 = 0x12
        var_24_2 = &arg_ce8
        var_28_2 = arg3
    else
        __builtin_memcpy(&arg_60, sub_563960(&arg_ce8, 0, ecx_1, &arg_ce8, c, 9, &arg_28, 7, 0, 0), 
            0xc84)
        void* eax_6 = sub_573400()
        *(eax_6 + 0xc)
        int32_t var_c_1 = *(eax_6 + 4)
        int32_t ecx_3
        int32_t edi_1
        
        if (arg3 s> 0)
            edi_1, ecx_3 = __memfill_u32(&arg_ce8, 0x3ea, arg3)
        int32_t var_1c_3 = 0
        var_20_2 = 0x12
        var_24_2 = &arg_ce8
        var_28_2 = arg3
    
    void var_10
    result, ecx = sub_590de0(&arg_60, var_28_2, var_24_2, var_20_2, var_10, __return_addr)
else
    result, ecx = memset(&arg_60, c, 0xc84)

if (arg3 == 2)
    int32_t var_1c_6 = ecx
    sub_561af0(sub_561e00(result, 0, 2, 0), 0, 2, 0)
    struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_1f78e14559cb78cfded78feb422feee3>, void>::VTable
        * const var_40 = &std::_Func_impl_no_alloc<class <lambda_1f78e14559cb78cfded78feb422feee3>, void>::`vftable'{for `std::_Func_base<void>'}
    struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_1f78e14559cb78cfded78feb422feee3>, void>::VTable
        * const* var_1c_7 = &var_40
    result = sub_5699b0(var_40)

CookieCheckFunction(result)
return result
