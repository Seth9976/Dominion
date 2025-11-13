// 函数: sub_504b00
// 地址: 0x504b00
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* result_3
int32_t* result_1 = result_3
__chkstk(0x19a8)
__security_cookie
void* eax_2 = sub_573400()
uint32_t eax_3 = sub_56b780()
sub_594010(eax_3, *(eax_2 + 0xc), *(eax_2 + 4), eax_3, 1)
sub_561f60(0xffffffff, 0)
void arg_80
uint32_t eax_4 = sub_5678e0(eax_2, &arg_80, 4, 0, 0, 0)
int64_t arg_1c
__builtin_memset(&arg_1c, 0, 0x2c)
int128_t arg_48 = 1.o
void arg_d08
__builtin_memcpy(&arg_d08, eax_4, 0xc84)
int128_t arg_58 = arg1.o
int128_t arg_68 = arg2.o
int32_t* result = sub_563c40(&arg_48, 0xb, 0)
result_1 = result

if (result != 0)
    void* eax_5 = sub_573400()
    uint32_t esi_3 = zx.d(result.w)
    int32_t* edi_1 = *(eax_5 + 4)
    uint32_t eax_6 = *(eax_5 + 0xc)
    
    if (esi_3 u>= 0x320)
        sub_591930()
    
    int32_t* result_2 = result_1
    result_1.q = 0
    int64_t arg_10 = 0
    int32_t arg_c = edi_1[esi_3 * 0x19 + 0x695]
    int32_t* result_4 = result_2
    result = sub_586320(&result_4, eax_6, edi_1, &result_4, &arg_10, &result_1, 0)

CookieCheckFunction(result)
return result
