// 函数: sub_6092a0
// 地址: 0x6092a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ecx = __chkstk(0x3324)
int32_t result = 0
sub_4bbdb0()
void arg_198c
memcpy(&var_4, sub_4e49d0(0, &arg_198c), 0x1990)
int32_t i = 0

if (var_4 != 0)
    int32_t* ecx_2 = &var_4
    
    while (i s< 0xa)
        if (*ecx_2 == 1)
            int32_t eax_3
            char edx_1
            edx_1:eax_3 = sx.q(ecx_2[1])
            
            if ((eax_3 + zx.d(edx_1)) s>> 8 == ecx)
                result += 1
        
        ecx_2 = &ecx_2[4]
        i += 1
        
        if (*ecx_2 == 0)
            break

int32_t i_1 = 0
int32_t arg_9c

if (arg_9c != 0)
    int32_t* ecx_3 = &arg_9c
    
    while (i_1 s< 4)
        if (*ecx_3 == 1)
            int32_t eax_7
            char edx_3
            edx_3:eax_7 = sx.q(ecx_3[1])
            
            if ((eax_7 + zx.d(edx_3)) s>> 8 == ecx)
                result += 1
        
        ecx_3 = &ecx_3[0x12]
        i_1 += 1
        
        if (*ecx_3 == 0)
            break

return result
