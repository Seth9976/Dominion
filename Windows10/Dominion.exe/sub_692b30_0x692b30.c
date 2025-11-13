// 函数: sub_692b30
// 地址: 0x692b30
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

char** result = arg3
char** result_1 = result
void* const esi = &data_7ff640
int32_t eax_2

while (true)
    char* eax = arg2
    void* edx = esi + 8
    
    while (true)
        arg3.b = *edx
        char temp0_1 = *eax
        bool c_1 = arg3.b u< temp0_1
        
        if (arg3.b == temp0_1)
            if (arg3.b == 0)
                eax_2 = 0
                break
            
            arg3.b = *(edx + 1)
            char temp1_1 = eax[1]
            c_1 = arg3.b u< temp1_1
            
            if (arg3.b == temp1_1)
                edx += 2
                eax = &eax[2]
                
                if (arg3.b != 0)
                    continue
                
                eax_2 = 0
                break
        
        eax_2 = sbb.d(eax, eax, c_1) | 1
        break
    
    if (eax_2 == 0)
        if (esi == 0)
            break
        
        char* edx_1 = *(esi + 0x10)
        char* var_24_1
        
        if (edx_1 != 0)
            eax_2 = *esi
            
            if (eax_2 == 0x7c)
                if (arg6 == 3)
                    edx_1 = "., $"
                
                var_24_1 = *(esi + 0xc)
            else if (eax_2 != 0x2f4 || arg6 != 2)
                var_24_1 = *(esi + 0xc)
            else
                var_24_1 = &data_878224
        else
            edx_1 = "$ ,."
            var_24_1 = *(esi + 0xc)
        
        sub_692860(eax_2, edx_1, result, arg4, arg5, *(esi + 4), var_24_1)
        return result
    
    esi += 0x14
    
    if (esi == 0x7ffb04)
        break

if (arg6 != 1)
    sub_692860(eax_2, ",. $", result, arg4, arg5, 2, arg2)
    return result

sub_692860(eax_2, "$ ,.", result, arg4, arg5, 2, arg2)
return result
