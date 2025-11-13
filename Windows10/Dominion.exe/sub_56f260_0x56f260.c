// 函数: sub_56f260
// 地址: 0x56f260
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

uint32_t esi = zx.d(arg1.w)
int32_t eax_1 = *(sub_573400() + 4)

if (esi u>= 0x320)
    sub_591930()

int32_t edi = esi * 0x64
int32_t ecx = *(edi + eax_1 + 0x1a58)
int32_t eax_2 = *(edi + eax_1 + 0x1a5c)
int32_t ecx_1 = *(sub_573400() + 4)

if (esi u>= 0x320)
    sub_591930()

int32_t result

if (ecx == *(edi + ecx_1 + 0x1a50) && eax_2 == *(edi + ecx_1 + 0x1a54))
    result = *(sub_573400() + 4)
    
    if (esi u>= 0x320)
        sub_591930()
    
    if (*(edi + result + 0x1a50) != 0x3eb)
        result.b = 1
        return result
    
    void* eax_5 = sub_573400()
    int32_t ecx_2 = *(eax_5 + 0xc)
    
    if (ecx_2 == 0xffffffff)
        sub_63b870(eax_5, &data_801800, "who != PLAYER_NONE", 
            "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp", 0x33e, "GetPileHead")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    if (*(ecx_2 * 0x5a30 + *(eax_5 + 4) + 0x172d4) == arg1)
        result.b = 1
        return result

result.b = 0
return result
