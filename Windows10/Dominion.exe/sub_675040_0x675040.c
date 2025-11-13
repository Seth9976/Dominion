// 函数: sub_675040
// 地址: 0x675040
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* result = nullptr
void* result_1 = data_c23ba8
void* edx = data_c23bac * 0x18d0 + result_1

while (true)
    if (result != 0)
        result += 0x18d0
    else
        result = result_1
    
    if (result u>= edx)
        break
    
    while ((*(result + 0x18c8) & 0xffff0000) == 0)
        result += 0x18d0
        
        if (result u>= edx)
            return 0
    
    int32_t esi_1 = *(result + 0x189c)
    int32_t ecx = 0
    
    if (esi_1 != 0)
        do
            if (*(result + (ecx << 2) + 0x179c) == *(arg1 + 0x18c8))
                if (*(result + 0x1600) != 0)
                    return result
                
                goto label_6750b9
            
            ecx += 1
        while (ecx != esi_1)

label_6750b9:
return nullptr
