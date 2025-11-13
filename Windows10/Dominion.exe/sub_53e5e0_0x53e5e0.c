// 函数: sub_53e5e0
// 地址: 0x53e5e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* ebp
int32_t* var_4 = ebp
__chkstk(0x19a8)
__security_cookie
int32_t var_1c = 0
void arg_80
uint32_t eax_3 = sub_5685f0(&arg_80, 0, 0x3ec, &arg_80, 4)
int32_t arg_18 = 0xcf
int64_t arg_1c
__builtin_memset(&arg_1c, 0, 0x2c)
int128_t arg_48 = arg_18.o
int32_t arg_d08
__builtin_memcpy(&arg_d08, eax_3, 0xc84)
int128_t arg_58 = arg1.o
int128_t arg_68 = arg2.o
int32_t* result = sub_563960(&arg_80, 0, &arg_d08, &arg_80, 1, 1, &arg_48, 0xb, 0, 0)
__builtin_memcpy(&arg_d08, result, 0xc84)

if (arg3 != 0)
    int32_t esi_2 = arg_d08
    
    if (esi_2 != 0)
        void* eax_5 = sub_573400()
        uint32_t edi_1 = zx.d(esi_2.w)
        int32_t* ecx_1 = *(eax_5 + 4)
        uint32_t eax_6 = *(eax_5 + 0xc)
        var_4 = ecx_1
        
        if (edi_1 u>= 0x320)
            sub_591930()
            ecx_1 = var_4
        
        var_4.q = 0
        int64_t arg_10 = 0
        int32_t arg_c = ecx_1[edi_1 * 0x19 + 0x695]
        int32_t arg_8 = esi_2
        result = sub_586320(&arg_8, eax_6, ecx_1, &arg_8, &arg_10, &var_4, 0)

CookieCheckFunction(result)
return result
