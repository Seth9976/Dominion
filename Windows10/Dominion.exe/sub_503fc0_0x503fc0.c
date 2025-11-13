// 函数: sub_503fc0
// 地址: 0x503fc0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t edx = __chkstk(0x2608)
__security_cookie
void arg_58
void arg_1968
__builtin_memcpy(&arg_1968, sub_568780(&arg_58, edx, 0x3ea, &arg_58), 0xc84)
void* eax_4 = sub_573400()
int32_t ecx_1 = arg3

if (ecx_1 s>= sub_583fc0(eax_4, *(eax_4 + 0xc), *(eax_4 + 4), 0x1000))
    void* eax_6 = sub_573400()
    ecx_1 = sub_583fc0(eax_6, *(eax_6 + 0xc), *(eax_6 + 4), 0x1000)

int32_t arg_4 = 0
var_4.q = 0
int64_t arg_c
__builtin_memset(&arg_c, 0, 0x1c)
int128_t arg_28 = 0xf5.o
int128_t arg_38 = ecx_1.o
int128_t arg_48 = arg1.o
void arg_ce0
__builtin_memcpy(&arg_ce0, 
    sub_563960(&arg_58, 0, &arg_1968, &arg_58, ecx_1, 0x14, &arg_28, 0xa, 0, 0), 0xc84)
void* eax_10 = sub_573400()
uint32_t eax_11 = sub_56b780()
sub_594010(eax_11, *(eax_10 + 0xc), *(eax_10 + 4), eax_11, arg2)
sub_561f60(neg.d(arg2), 0)
void* esi_3 = &arg_ce0
void* var_10 = &arg_ce0
void* result = &arg_ce0 + (arg2 << 2)
void* result_1 = result

if (&arg_ce0 != result)
    do
        void* eax_12 = sub_573400()
        uint32_t esi_5 = zx.d((*esi_3).w)
        int32_t edi_1 = *(eax_12 + 4)
        
        if (esi_5 u>= 0x320)
            sub_591930()
        
        result = esi_5 * 0x64
        esi_3 = var_10 + 4
        var_10 = esi_3
        *(result + edi_1 + 0x1a6c) |= 0x80
    while (esi_3 != result_1)

CookieCheckFunction(result)
return result
