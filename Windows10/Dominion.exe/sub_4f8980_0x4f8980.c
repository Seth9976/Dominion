// 函数: sub_4f8980
// 地址: 0x4f8980
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t var_1c = __chkstk(0x2608)
void var_10
void arg_58
int32_t eax_3
int32_t edx_1
eax_3, edx_1 = sub_568780(&arg_58, sub_561e00(__security_cookie ^ &var_10, 0, 2, 0), 0x3ea, &arg_58)
int32_t arg_4 = 0
var_4.q = 0
int64_t arg_c = 0
int64_t arg_20 = 0
void arg_ce0
__builtin_memcpy(&arg_ce0, eax_3, 0xc84)
int32_t ecx_1 = 2

if (arg1 s< 2)
    ecx_1 = arg1

int128_t arg_28 = 0x1b.o
int32_t arg_14 = 0
int128_t arg_38 = ecx_1.o
int128_t arg_48 = 0.o
__builtin_memcpy(&arg_ce0, sub_568780(&arg_58, edx_1, 0x3ea, &arg_58), 0xc84)
int32_t arg_1968
int32_t* result = sub_563960(&arg_1968, 0, &arg_ce0, &arg_1968, ecx_1, 0x19, &arg_28, 0x12, 0, 0)
int32_t ecx_3 = __builtin_memcpy(&arg_ce0, result, 0xc84)

if (arg1 != 0)
    int32_t var_1c_2 = 0
    uint32_t eax_7 = sub_56b800()
    sub_5661e0(eax_7, 0x3ea, &arg_ce0, eax_7, ecx_3)
    arg_1968 = 4
    void arg_196c
    memcpy(&arg_196c, &arg_ce0, arg1 << 2)
    int32_t arg_25ec = arg1
    result = sub_56bba0(&arg_1968, 0, sub_4f8b30, &arg_1968, 1, 2)

CookieCheckFunction(result)
return result
