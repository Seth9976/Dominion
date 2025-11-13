// 函数: sub_56a0a0
// 地址: 0x56a0a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* var_8 = arg1
void* result = arg2
int32_t i = 0
void* result_1 = result

if (*(result + 0xc80) s> 0)
    do
        int32_t eax = 0
        int32_t edx = *(arg1 + 0xc80)
        
        if (edx s> 0)
            do
                if (*(arg1 + (eax << 2)) == *(result + (i << 2)))
                    *(arg1 + 0xc80) = edx - 1
                    *(arg1 + (eax << 2)) = *(arg1 + ((edx - 1) << 2))
                    break
                
                eax += 1
            while (eax s< edx)
        
        result = result_1
        i += 1
    while (i s< *(result + 0xc80))

return result
