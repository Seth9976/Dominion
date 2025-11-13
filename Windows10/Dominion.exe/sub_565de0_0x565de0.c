// 函数: sub_565de0
// 地址: 0x565de0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = sub_573400()
int32_t eax_1 = sub_57dc30(*(eax + 4), arg1)

if (eax_1 != 0)
    int32_t edx_1 = 7
    int32_t* ecx_2 = *(eax + 4) + 0x1594
    
    while (true)
        if (*ecx_2 == eax_1 || ecx_2[1] == eax_1)
            if (edx_1 == 0)
                break
            
            int32_t eax_2
            eax_2.b = sub_563590(arg2) != 0
            return eax_2
        
        edx_1 += 1
        ecx_2 = &ecx_2[4]
        
        if (edx_1 s>= 0x48)
            break
        
        continue

eax_1.b = 0
return eax_1
