// 函数: sub_588db0
// 地址: 0x588db0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax = sub_571ee0(arg1, arg2, arg3, 0xb08)
int32_t eax_1

if (eax != 0xffffffff)
    eax_1 = eax << 5

uint32_t result_1
uint32_t result

if (eax == 0xffffffff || arg3[eax * 8 + 0x54b7] == 0 || arg5 == 1)
    result = result_1
else
    result = result_1
    
    if (result s> 0)
        uint32_t result_3 = sub_571ee0(eax_1, arg2, arg3, 0xb08)
        result_1 = result_3
        
        if (result_3 == 0xffffffff)
            sub_591930()
            result_3 = result_1
        
        if (arg3[result_3 * 8 + 0x54b7] != 1)
            sub_591930()
            result_3 = result_1
        
        sub_571cb0(result_3, result_3, arg3, 0xffffffff, 0, 0)
        result -= 1

int32_t eax_3 = sub_590c70(sub_5ee870(), arg2, arg3, 0x3eb)

if (result s> eax_3)
    eax_3 = sub_588490(arg3, arg2)

uint32_t result_2 = 0

if (result s> 0)
    do
        eax_3 = sub_5889b0(eax_3, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg10, arg11)
        arg9[result_2] = eax_3
        
        if (eax_3 == 0)
            result = result_2
            break
        
        result_2 += 1
    while (result_2 s< result)

void var_58
memset(&var_58, 0, 0x48)
result_1 = 0x19
sub_580700(result, &result_1, 1, &var_58, 0, arg9, result, nullptr)
return result
