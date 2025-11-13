// 函数: sub_56acc0
// 地址: 0x56acc0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
void* result_3 = sub_573400()
int32_t var_d24 = 0
int32_t eax_3 = *(result_3 + 0x28)
char var_d28 = 0
int32_t var_d08 = *result_3
int32_t var_d04 = *(result_3 + 0x10)
int128_t var_cd0
int128_t* var_d30 = &var_cd0
int32_t var_d34 = 0x17
int32_t var_d38 = 1
void* result_2
__builtin_memcpy(&result_2, arg3, 0xc84)
int32_t ecx = *(result_3 + 0x2c)
int32_t var_d3c = 1
int64_t var_cfc
__builtin_memset(&var_cfc, 0, 0x1c)
int64_t var_cd8 = 0
int32_t var_cdc = ecx
void* result_1 = result_3
void* result_4 = result_1
var_cd0 = arg4.o
int32_t var_cf0
int128_t var_cc0 = var_cf0.o
int128_t var_cb0 = eax_3.o
int32_t var_20

if (sub_5869d0(&result_2, &var_d08, *(result_4 + 4), *(result_3 + 0xc), 1, &result_2, var_20, 
        var_d3c, var_d38, var_d34, var_d30, arg6, var_d28, var_d24) != 0)
    void* result = result_2
    result_1 = result
    
    if (result != 0)
        void* eax_8 = sub_573400()
        *(eax_8 + 0xc)
        *(eax_8 + 4)
        
        if (sub_582eb0(&result_1, 1, arg2, 0xb, 7, arg5, 0, 0, nullptr, nullptr) != 0)
            CookieCheckFunction(result)
            return result

CookieCheckFunction(0)
return 0
