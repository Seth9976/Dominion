// 函数: sub_509ef0
// 地址: 0x509ef0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* result = sub_573400()

if (*result != 5)
    sub_63b870(result, &data_801800, "c.contextType == CONTEXT_ACHIEVEMENT", 
        "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 0x1cb1, "DomAchievementDataGet")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

void* esi_1 = *(result + 0x18) + 4
int32_t ecx = *(esi_1 + 0x28)

if (ecx != 0)
    int32_t edx_1 = arg2
    int32_t ebx_1 = 0
    
    if (edx_1 s> 0)
        do
            result = nullptr
            
            if (ecx s> 0)
                do
                    if (*(esi_1 + (result << 2)) == *(arg1 + (ebx_1 << 2)))
                        *(esi_1 + 0x28) = ecx - 1
                        *(esi_1 + (result << 2)) = *(esi_1 + ((ecx - 1) << 2))
                        break
                    
                    result += 1
                while (result s< ecx)
                
                edx_1 = arg2
            
            ecx = *(esi_1 + 0x28)
            
            if (ecx == 0)
                result.b = 1
                return result
            
            ebx_1 += 1
        while (ebx_1 s< edx_1)

result.b = 0
return result
