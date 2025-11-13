// 函数: sub_567a50
// 地址: 0x567a50
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* ebp
int32_t* var_4 = ebp
__chkstk(0x19a8)
__security_cookie
int32_t esi
int32_t var_14 = esi
void arg_80
uint32_t eax_2 = sub_5678e0(esi, &arg_80, 6, 0, 0, 0)
int32_t arg_18 = 0xdf
int64_t arg_1c
__builtin_memset(&arg_1c, 0, 0x2c)
int128_t arg_48 = arg_18.o
uint32_t result_2
__builtin_memcpy(&result_2, eax_2, 0xc84)
int128_t arg_58 = arg1.o
int128_t arg_68 = arg2.o
__builtin_memcpy(&result_2, sub_563960(&arg_80, 0, &result_2, &arg_80, 1, 1, &arg_48, 0xb, 0, 0), 
    0xc84)

if (arg3 == 0)
    CookieCheckFunction(0)
    return 0

uint32_t result = result_2

if (result != 0)
    void* eax_5 = sub_573400()
    uint32_t edi_1 = zx.d(result.w)
    int32_t* ecx_3 = *(eax_5 + 4)
    uint32_t eax_6 = *(eax_5 + 0xc)
    var_4 = ecx_3
    
    if (edi_1 u>= 0x320)
        sub_591930()
        ecx_3 = var_4
    
    var_4.q = 0
    int64_t arg_10 = 0
    int32_t arg_c = ecx_3[edi_1 * 0x19 + 0x695]
    uint32_t result_1 = result
    sub_586320(&result_1, eax_6, ecx_3, &result_1, &arg_10, &var_4, 0)

CookieCheckFunction(result)
return result
