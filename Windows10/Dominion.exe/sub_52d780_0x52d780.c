// 函数: sub_52d780
// 地址: 0x52d780
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t edx = __chkstk(0x2608)
__security_cookie
int32_t arg_4 = 0
var_4.q = 0
int64_t arg_c = 0
int32_t var_1c_1 = 0
char var_20 = 0
int64_t arg_20 = 0
int32_t edx_1 = 5
void arg_58
int32_t arg_1968[0x320]
__builtin_memcpy(&arg_1968, sub_568780(&arg_58, edx, 0x3ec, &arg_58), 0xc84)
int32_t var_24 = 0xe

if (arg1 s< 5)
    edx_1 = arg1

int128_t arg_28
int128_t* var_28 = &arg_28
arg_28 = 0x9b.o
int32_t arg_14 = 0
int128_t arg_38 = 0.o
int128_t arg_48 = 0.o
void arg_ce0
__builtin_memcpy(&arg_58, 
    sub_563960(&arg_ce0, 0, &arg_1968, &arg_ce0, edx_1, 0x10, var_28, var_24, var_20, var_1c_1), 
    0xc84)
uint32_t eax_6 = sub_56a0a0(&arg_1968, &arg_58)
int32_t esi_2 = 0

if (arg1 s> 0)
    do
        eax_6 = sub_5695c0(eax_6, 0x3ec, arg_1968[esi_2], 0xb)
        esi_2 += 1
    while (esi_2 s< arg1)

void* eax_7 = sub_573400()
sub_588340(*(eax_7 + 4), *(eax_7 + 0xc))
int32_t result = sub_563590(0x102)

if (result != 0)
    void* eax_8 = sub_573400()
    result = sub_583720(eax_8, *(eax_8 + 0xc), *(eax_8 + 4), result, 0x476, nullptr, 0x476, 0, 0, 4)

CookieCheckFunction(result)
return result
