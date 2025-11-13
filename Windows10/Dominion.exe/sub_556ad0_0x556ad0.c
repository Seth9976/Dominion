// 函数: sub_556ad0
// 地址: 0x556ad0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_14 = ecx
int32_t eax
sub_561e00(eax, 0, 1, 0)
void* eax_1 = sub_573400()
sub_590760(eax_1, *(eax_1 + 0xc), *(eax_1 + 4), 1, 2, 0, 0)
void* eax_2 = sub_573400()
int32_t ecx_2 = *(eax_2 + 0xc)

if (ecx_2 == 0xffffffff)
    sub_63b870(eax_2, &data_801800, "c.activePlayer != PLAYER_NONE", 
        "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 0x52, "SetGainFlag")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t eax_3 = *(eax_2 + 4)
int32_t ecx_3 = ecx_2 * 0x5a30
*(ecx_3 + eax_3 + 0x17558) |= 2
int32_t* result = sub_562880(arg3, arg2, arg1)

if (result != 0)
    uint32_t esi_1 = zx.d(result.w)
    void* edi = *(sub_573400() + 4)
    
    if (esi_1 u>= 0x320)
        sub_591930()
    
    int32_t eax_5 = esi_1 * 0x64
    result = sub_5754f0(eax_5, *(eax_5 + edi + 0x1a4c), edi, 8, 0)
    
    if (result.b != 0)
        result = sub_563590(0x100)
        
        if (result != 0)
            void* eax_6 = sub_573400()
            return sub_583720(eax_6, *(eax_6 + 0xc), *(eax_6 + 4), result, 0x476, nullptr, 0x476, 
                0, 0, 4)

return result
