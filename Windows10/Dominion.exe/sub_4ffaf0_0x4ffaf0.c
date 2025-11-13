// 函数: sub_4ffaf0
// 地址: 0x4ffaf0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* ebp
int32_t* var_4 = ebp
int32_t esi
int32_t var_14 = esi
int32_t var_1c = __chkstk(0x19a8)
void var_10
sub_561e00(__security_cookie ^ &var_10, 0, 1, 0)
int32_t arg_d08
uint32_t eax_2 = sub_5678e0(esi, &arg_d08, 4, 0, 0x80, 0)
int32_t arg_18 = 0xd7
int64_t arg_1c
__builtin_memset(&arg_1c, 0, 0x2c)
int32_t var_1c_1 = 0
char var_20_1 = 0
int32_t var_24_1 = 0xb
int128_t arg_48
int128_t* var_28_1 = &arg_48
arg_48 = arg_18.o
int32_t var_2c_1 = 1
int32_t* arg_80
__builtin_memcpy(&arg_80, eax_2, 0xc84)
int128_t arg_58 = arg1.o
int128_t arg_68 = arg2.o
int32_t* result =
    sub_563960(&arg_d08, 0, &arg_80, &arg_d08, 1, var_2c_1, var_28_1, var_24_1, var_20_1, var_1c_1)
__builtin_memcpy(&arg_80, result, 0xc84)

if (arg3 != 0)
    int32_t* edi_1 = arg_80
    
    if (edi_1 != 0)
        void* eax_4 = sub_573400()
        uint32_t esi_3 = zx.d(edi_1.w)
        int32_t* ecx_2 = *(eax_4 + 4)
        uint32_t eax_5 = *(eax_4 + 0xc)
        var_4 = ecx_2
        
        if (esi_3 u>= 0x320)
            sub_591930()
            ecx_2 = var_4
        
        char var_1c_2 = 0
        var_4.q = 0
        int64_t arg_10 = 0
        int32_t arg_c = ecx_2[esi_3 * 0x19 + 0x695]
        int32_t* var_20_2 = &var_4
        int32_t* arg_8 = edi_1
        sub_586320(&arg_8, eax_5, ecx_2, &arg_8, &arg_10, var_20_2, var_1c_2)
        int128_t* eax_9 = sub_56b800()
        void* eax_10 = sub_573400()
        int32_t var_2c_2 = 0
        result = sub_5820c0(eax_10, *(eax_10 + 0xc), *(eax_10 + 4), edi_1, 0x3e9, eax_9, 0xb, 0, 
            *(eax_10 + 0x28), *(eax_10 + 0x2c), 0, nullptr)
        
        if (result.b != 0)
            int32_t var_1c_3 = 2
            arg_d08 = 1
            int32_t* arg_d0c = edi_1
            int32_t arg_198c = 1
            result = sub_56bba0(&arg_d08, 0, sub_4ffce0, &arg_d08, 1, var_1c_3)

CookieCheckFunction(result)
return result
