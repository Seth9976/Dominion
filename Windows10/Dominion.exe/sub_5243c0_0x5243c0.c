// 函数: sub_5243c0
// 地址: 0x5243c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebp
int32_t var_4 = ebp
__chkstk(0x1988)
__security_cookie
void* eax_2 = sub_573400()
void arg_60
uint32_t eax_3
int32_t edx_1
eax_3, edx_1 = sub_5777b0(eax_2, *(eax_2 + 0xc), *(eax_2 + 4), &arg_60, 4)
uint32_t arg_ce0 = eax_3
void arg_ce8
__builtin_memcpy(&arg_ce8, &arg_60, 0xc84)
int32_t var_24 = 0
sub_561880(eax_3, edx_1, &arg_ce8, 0x20)
int32_t arg_4
__builtin_memset(&arg_4, 0, 0x24)
var_4.q = 0
int128_t arg_28 = 0x67.o
int128_t arg_38 = arg1.o
int128_t arg_48 = arg2.o
int32_t* result = sub_563c40(&arg_28, 0xc, 0)

if (result != 0)
    void* eax_4 = sub_573400()
    result = sub_583720(eax_4, *(eax_4 + 0xc), *(eax_4 + 4), result, 0x476, nullptr, 0x476, 0, 0, 4)

CookieCheckFunction(result)
return result
