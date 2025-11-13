// 函数: sub_562880
// 地址: 0x562880
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

uint32_t result_5
uint32_t result_1 = result_5
void* ecx
uint32_t result_4
ecx, result_4 = __chkstk(0x1998)
__security_cookie
result_1 = result_4
void* eax_2
int32_t edx
eax_2, edx = sub_573400()
void arg_70
int32_t* result_6
__builtin_memcpy(&result_6, sub_568780(&arg_70, edx, 0x3ea, &arg_70), 0xc84)

if (arg3 != 0)
    int32_t* result_3
    
    if (arg3 != 1)
        uint8_t result_2 = result_1.b
        int64_t arg_c
        __builtin_memset(&arg_c, 0, 0x2c)
        int128_t arg_38 = 0x12.o
        int128_t arg_48 = arg1.o
        int128_t arg_58 = arg2.o
        result_3 = sub_563c40(&arg_38, ecx, result_2)
    else
        result_3 = result_6
    
    result_1 = result_3
    
    if (result_3 != 0)
        int32_t var_1c_1 = 0
        result_6 = 0x3ea
        *(eax_2 + 0xc)
        *(eax_2 + 4)
        void var_10
        sub_590de0(&result_1, 1, &result_6, 0x12, var_10, ecx)
        uint32_t result = result_1
        CookieCheckFunction(result)
        return result

CookieCheckFunction(0)
return 0
