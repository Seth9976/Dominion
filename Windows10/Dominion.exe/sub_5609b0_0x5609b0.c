// 函数: sub_5609b0
// 地址: 0x5609b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebp
int32_t var_4 = ebp
__chkstk(0x191c)
__security_cookie
int32_t esi
int32_t var_10 = esi
uint32_t var_18 = sub_56b800()
int32_t var_18_1 = 4
int32_t* result = sub_564ac0(esi)
int32_t* edi = result

if (edi != 0)
    uint32_t esi_1 = zx.d(edi.w)
    result = *(sub_573400() + 4)
    int32_t* result_1 = result
    
    if (esi_1 u>= 0x320)
        sub_591930()
        result = result_1
    
    if (result[esi_1 * 0x19 + 0x694] == 0x474)
        int32_t* result_2 = *(sub_573400() + 4)
        result_1 = result_2
        
        if (esi_1 u>= 0x320)
            sub_591930()
            result_2 = result_1
        
        int32_t var_18_2 = result_2[esi_1 * 0x19 + 0x693]
        int32_t arg_c84 = 1
        int32_t* var_1c_1 = &arg_c84
        int32_t* arg_c88 = edi
        int32_t arg_1908 = 1
        var_4 = 3
        __return_addr = edi
        int32_t arg_4 = sub_56c290(sub_4fc7c0, sub_560ad0)
        int32_t arg_c80 = 2
        result = sub_56bba0(&var_4, 0, sub_560b90, &var_4, 0x29, 2)

CookieCheckFunction(result)
return result
