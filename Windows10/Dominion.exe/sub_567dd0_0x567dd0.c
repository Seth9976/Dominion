// 函数: sub_567dd0
// 地址: 0x567dd0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebp
int32_t var_4 = ebp
uint32_t ecx
int32_t edx
ecx, edx = __chkstk(0x1988)
__security_cookie
int32_t esi
int32_t var_14 = esi
uint32_t var_10 = ecx
void arg_60
uint32_t eax_2 = sub_5678e0(esi, &arg_60, 2, 0, 0, 0)
int32_t arg_4 = 0
bool cond:0 = var_10 s<= 1
int32_t arg_14 = 0
uint32_t result_1
__builtin_memcpy(&result_1, eax_2, 0xc84)
var_4.q = 0
int32_t eax_4 = 0x35
int64_t arg_c = 0

if (cond:0)
    eax_4 = 0xb

int64_t arg_20 = 0
int128_t arg_28 = edx.o
int128_t arg_38 = 0.o
int128_t arg_48 = 0.o
int32_t ecx_2 = __builtin_memcpy(&result_1, 
    sub_563960(&arg_60, 0, &result_1, &arg_60, 1, 1, &arg_28, eax_4, 0, 0), 0xc84)

if (arg1 != 0)
    uint32_t result = result_1
    
    if (result != 0)
        int32_t var_20 = ecx_2
        uint32_t eax_7 = sub_56b800()
        sub_566c60(eax_7, var_10, result, eax_7, 0)
        CookieCheckFunction(result)
        return result

CookieCheckFunction(0)
return 0
