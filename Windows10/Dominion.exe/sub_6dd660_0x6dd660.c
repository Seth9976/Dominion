// 函数: sub_6dd660
// 地址: 0x6dd660
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* var_8 = arg1
void* edi = data_147abe8
char const* const var_20
int32_t var_1c
char const* const var_18
int32_t* i_1
char* ecx

if (edi != 0)
    void** edi_1 = *(edi + 4)
    
    if (arg2[8] == 2)
        *(arg1 + arg2[0xa] * 0xc + 0x20) = 0
        i_1 = arg2[0xa]
        *(arg1 + (*(arg1 + 0x88) << 2) + 0x8c) = i_1
        *(arg1 + 0x88) += 1
    
    int32_t* i = edi_1[1]
    
    while (i != 0)
        void* edx_1 = &i[1]
        i_1 = i
        i = *i
        
        if (arg2 u>= edx_1)
            i_1 = &i_1[1 + edi_1[2] * 0x2d]
            
            if (arg2 u< i_1)
                int32_t eax_5
                int32_t edx_2
                edx_2:eax_5 = sx.q(arg2 - edx_1)
                i_1 = divs.dp.d(edx_2:eax_5, 0xb4)
                
                if (mods.dp.d(edx_2:eax_5, 0xb4) == 0)
                    void* result = *edi_1
                    edi_1[3] -= 1
                    *arg2 = result
                    *edi_1 = arg2
                    return result
    
    var_18 = "XTypedAllocator<struct AnimSet>::Free"
    var_1c = 0x112
    var_20 = "C:\x\ax2017\Engine\xAlloc.h"
    ecx = "IsPointerFromAllocator(pItem)"
else
    var_18 = "GetGameData"
    var_1c = 0x45
    var_20 = "C:\x\ax2017\Engine\Game.h"
    ecx = "gpGameData"

sub_63b870(i_1, &data_801800, ecx, var_20, var_1c, var_18)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
