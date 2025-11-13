// 函数: sub_6fe250
// 地址: 0x6fe250
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

char const* const var_10
int32_t var_c
char const* const var_8
void* eax_1
char* ecx

if (arg1[2].b == 0)
    eax_1 = *arg1
    
    if (eax_1 != 0)
        arg1[1] = eax_1 + 0xc
        goto label_6fe282
    
    var_8 = "AttactIterNext"
    var_c = 0xd4
    var_10 = "C:\x\ax2017\Engine\Attachment.cpp"
    ecx = "iter->mAttachment"
else
    arg1[2].b = 0
label_6fe282:
    int32_t edx_1 = *arg1[1]
    eax_1 = data_147abe8
    
    if (eax_1 != 0)
        void* esi = *(eax_1 + 0x14)
        
        if (edx_1 != 0)
            uint32_t eax_4 = zx.d(edx_1.w)
            
            if (eax_4 u< *(esi + 4))
                void* const result = eax_4 * 0x34 + *esi
                
                if (*(result + 0x30) != edx_1)
                    result = nullptr
                
                *arg1 = result
                return result
        
        *arg1 = 0
        return 0
    
    var_8 = "GetGameData"
    var_c = 0x45
    var_10 = "C:\x\ax2017\Engine\Game.h"
    ecx = "gpGameData"

sub_63b870(eax_1, &data_801800, ecx, var_10, var_c, var_8)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
