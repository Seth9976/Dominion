// 函数: sub_553d20
// 地址: 0x553d20
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebp
int32_t var_4 = ebp
__chkstk(0x1988)
__security_cookie
int32_t var_1c = 0
void arg_60
uint32_t eax_3 = sub_5685f0(&arg_60, 0, 0x3ea, &arg_60, 2)
int32_t arg_4
__builtin_memset(&arg_4, 0, 0x24)
var_4.q = 0
int128_t arg_28 = 0x49.o
int32_t arg_ce8
__builtin_memcpy(&arg_ce8, eax_3, 0xc84)
int128_t arg_38 = arg1.o
int128_t arg_48 = arg2.o
int32_t* result = sub_563960(&arg_60, 0, &arg_ce8, &arg_60, 1, 0x20, &arg_28, 0xc, 0, 0)
__builtin_memcpy(&arg_ce8, result, 0xc84)

if (arg3 != 0)
    int32_t esi_2 = arg_ce8
    
    if (esi_2 != 0)
        void arg_cec
        int32_t eax_5 = memset(&arg_cec, 0, 0xc80)
        arg3 += 1
        arg_ce8 = esi_2
        sub_566370(eax_5, 0x3ea, &arg_ce8, 0)
        result = sub_5638e0(esi_2)

CookieCheckFunction(result)
return result
