// 函数: sub_53a180
// 地址: 0x53a180
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* ecx
int32_t edx
ecx, edx = __chkstk(0x191c)
__security_cookie
int32_t __saved_ebp
uint32_t result = sub_566240(&__saved_ebp, edx, 2, &__saved_ebp, &data_7bf9e4)
int32_t arg_c84
__builtin_memcpy(&arg_c84, result, 0xc84)

if (arg2 != 0)
    int32_t eax_5 = *(*(sub_573400() + 4) + 0x1504)
    int32_t* var_3c
    
    if (eax_5 != 3 && eax_5 != 5 && eax_5 != 4 && eax_5 != 6)
        void* var_34
        __builtin_memset(&var_34, 0, 0x20)
        int32_t* var_38_1 = 1
        var_3c = nullptr
        void* var_30
        int128_t* var_2c
        int32_t var_28
        int32_t var_24
        int32_t var_20
        int32_t var_1c_1
        int32_t var_18_1
        sub_61b1b0(eax_5, 7, eax_5 == 2, 0xffffffff, var_3c, var_38_1, var_34, var_30, var_2c, 
            var_28, var_24, var_20, var_1c_1, var_18_1)
    
    void* eax_6 = sub_573400()
    void* var_18_2 = nullptr
    void* var_1c_2 = nullptr
    *(eax_6 + 0xc)
    int32_t var_20_1 = 0
    int32_t var_24_1 = 0
    char var_28_1 = 0
    int32_t var_2c_1 = 7
    int128_t* var_30_1 = 0x14
    int32_t var_34_1 = 0x3ee
    var_3c = &arg_c84
    *(eax_6 + 4)
    sub_582eb0(var_3c, arg2, var_34_1, var_30_1, var_2c_1, var_28_1, var_24_1, var_20_1, var_1c_2, 
        var_18_2)
    result = arg2
    
    if (result == 2)
        uint32_t esi_2 = zx.d(arg_c84.w)
        int32_t edi_1 = *(sub_573400() + 4)
        
        if (esi_2 u>= 0x320)
            sub_591930()
        
        int32_t edi_2 = *(esi_2 * 0x64 + edi_1 + 0x1a4c)
        uint32_t esi_4 = zx.d(arg1)
        int32_t var_8 = *(sub_573400() + 4)
        
        if (esi_4 u>= 0x320)
            sub_591930()
        
        result = arg2
        
        if (edi_2 == *(esi_4 * 0x64 + var_8 + 0x1a4c))
            result -= 1
            arg2 = result
    
    int32_t esi_5 = 0
    
    if (result s> 0)
        do
            int32_t ecx_4 = *(ecx + 4)
            int32_t edx_2 = (&arg_c84)[esi_5]
            var_3c = &std::_Func_impl_no_alloc<class <lambda_fc37d54027b2048d9411f3567529d64d>, void>::`vftable'{for `std::_Func_base<void>'}
            int32_t var_38_3 = edx_2
            int32_t** var_18_3 = &var_3c
            result = sub_5698b0(&var_3c, edx_2, ecx_4, var_3c)
            esi_5 += 1
        while (esi_5 s< arg2)

CookieCheckFunction(result)
return result
