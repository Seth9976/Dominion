// 函数: sub_509920
// 地址: 0x509920
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

char const* const var_1c
int32_t var_18
char const* const var_14
void* result
char* ecx_1

if (arg2 == 1)
    uint32_t esi_2 = zx.d((*arg1).w)
    int32_t edi_1 = *(sub_573400() + 4)
    
    if (esi_2 u>= 0x320)
        sub_591930()
    
    int32_t i = *(esi_2 * 0x64 + edi_1 + 0x1a4c)
    result = sub_573400()
    
    if (*result == 5)
        void* esi_3 = *(result + 0x18)
        
        if (i == 0x104)
        label_5099a4:
            
            if (*(esi_3 + 0x24) s< 4)
                int32_t edx_2
                result, edx_2 = sub_509340()
                int32_t ecx_3 = *(esi_3 + 0x24)
                *(esi_3 + (ecx_3 << 3) + 4) = result
                *(esi_3 + (ecx_3 << 3) + 8) = edx_2
                *(esi_3 + 0x24) += 1
        else
            int32_t edx_1 = *(esi_3 + 0x48)
            int32_t ecx_2 = 0
            
            if (edx_1 s> 0)
                result = esi_3 + 0x28
                
                while (*result != i)
                    ecx_2 += 1
                    result += 4
                    
                    if (ecx_2 s>= edx_1)
                        result.b = 0
                        return result
                
                goto label_5099a4
        
        result.b = 0
        return result
    
    var_14 = "DomAchievementDataGet"
    var_18 = 0x1cb1
    var_1c = "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp"
    ecx_1 = "c.contextType == CONTEXT_ACHIEVEMENT"
else
    var_14 = "Mine_Achievement_OnTrash"
    var_18 = 0x389
    var_1c = "C:\x\ax2017\Jams\Dominion\code\DomCards_Base.cpp"
    ecx_1 = "numCards == 1"

sub_63b870(result, &data_801800, ecx_1, var_1c, var_18, var_14)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
