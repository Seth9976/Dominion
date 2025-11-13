// 函数: sub_562bb0
// 地址: 0x562bb0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ecx
int32_t edx
ecx, edx = __chkstk(0x1988)
__security_cookie
int32_t var_1c = arg2
int32_t var_20 = arg1
int32_t var_10 = ecx
void arg_60
uint32_t result_1
__builtin_memcpy(&result_1, sub_5685f0(&arg_60, 0, 0x3ea, &arg_60, var_20), 0xc84)

if (arg4 != 0)
    int32_t eax_4 = var_10
    var_4.q = 0
    __builtin_memset(&arg1, 0, 0x24)
    int128_t arg_28 = eax_4.o
    int128_t arg_38 = arg2.o
    int128_t arg_48 = arg3.o
    int32_t ecx_2 = __builtin_memcpy(&result_1, 
        sub_563960(&arg_60, 0, &result_1, &arg_60, 1, 9, &arg_28, edx, 0, 0), 0xc84)
    
    if (arg4 != 0)
        uint32_t result = result_1
        
        if (result != 0)
            int32_t var_1c_1 = ecx_2
            sub_5624a0(result, 0x3ea)
            CookieCheckFunction(result)
            return result

CookieCheckFunction(0)
return 0
