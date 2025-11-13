// 函数: sub_54ad50
// 地址: 0x54ad50
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebp
int32_t var_4 = ebp
__chkstk(0x1998)
__security_cookie
int32_t esi
int32_t var_14 = esi
int32_t var_1c = 0
uint32_t var_20 = 2
int32_t arg_cf8
int32_t* var_24 = &arg_cf8
*(sub_573400() + 0x40)
uint32_t eax_3 = sub_56f370(esi, var_24, var_20, var_1c)
int32_t var_28 = 0
char var_2c = 0
int64_t arg_c
__builtin_memset(&arg_c, 0, 0x2c)
int32_t var_30 = 0xa
int128_t arg_38
int128_t* var_34 = &arg_38
arg_38 = 0x112.o
int32_t var_38 = 0x14
int32_t arg_70
__builtin_memcpy(&arg_70, eax_3, 0xc84)
int128_t arg_48 = arg1.o
int128_t arg_58 = arg2.o
int32_t* result =
    sub_563960(&arg_cf8, 0, &arg_70, &arg_cf8, 1, var_38, var_34, var_30, var_2c, var_28)
__builtin_memcpy(&arg_70, result, 0xc84)

if (arg3 != 0)
    int32_t esi_3 = arg_70
    
    if (esi_3 != 0)
        var_4 = 0
        void* eax_5 = sub_573400()
        int32_t eax_6 = *(eax_5 + 4)
        uint32_t eax_7 = zx.d(esi_3.w)
        
        if (eax_7 u>= 0x320)
            sub_591930()
        
        int32_t* ecx_2 = *(eax_5 + 4)
        int32_t var_30_1
        __builtin_memset(&var_30_1, 0, 0x18)
        int32_t var_2c_1
        char* var_28_1
        int32_t var_24_1
        void* var_20_1
        void* var_1c_1
        uint32_t eax_9 = sub_582d10(eax_6, *(eax_7 * 0x64 + eax_6 + 0x1a70), ecx_2, esi_3, 0x3e9, 
            0xb, 0x467, nullptr, *(eax_5 + 0x28), *(eax_5 + 0x2c), *(eax_5 + 0x30), var_30_1, 
            var_2c_1, var_28_1, var_24_1, var_20_1, var_1c_1)
        int32_t var_54_1 = 0
        int32_t var_58_1 = 0x39
        arg_cf8 = 1
        int32_t arg_cfc = esi_3
        int32_t arg_197c = 1
        result = sub_56bd60(eax_9, &arg_cf8, sub_54acc0, var_58_1, var_54_1)

CookieCheckFunction(result)
return result
