// 函数: sub_502fd0
// 地址: 0x502fd0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = sub_573400()
sub_590760(eax, *(eax + 0xc), *(eax + 4), 1, 1, 0, 0)
void* eax_1 = sub_573400()
int32_t ecx_1 = *(eax_1 + 0xc)

if (ecx_1 != 0xffffffff)
    int32_t eax_2 = *(eax_1 + 4)
    int32_t ecx_2 = ecx_1 * 0x5a30
    *(ecx_2 + eax_2 + 0x17558) |= 2
    sub_4febe0(0x1032)
    int32_t var_14
    int32_t* result = sub_562880(arg2, arg1, var_14)
    
    if (result == 0)
        return result
    
    uint32_t esi_1 = zx.d(result.w)
    void* edi = *(sub_573400() + 4)
    
    if (esi_1 u>= 0x320)
        sub_591930()
    
    int32_t eax_4 = esi_1 * 0x64
    result = sub_5754f0(eax_4, *(eax_4 + edi + 0x1a4c), edi, 2, 0)
    
    if (result.b == 0)
        return result
    
    void* eax_5 = sub_573400()
    int32_t var_24_1 = 0
    int32_t var_28_1 = 0xffffffff
    int32_t var_2c_1 = 0
    int32_t var_34
    sub_571fa0(eax_5, *(eax_5 + 0xc), *(eax_5 + 4), 0x1000, 1, 0x476, nullptr, var_34)
    eax_1 = sub_573400()
    int32_t ecx_6 = *(eax_1 + 0xc)
    
    if (ecx_6 != 0xffffffff)
        int32_t eax_6 = *(eax_1 + 4)
        int32_t ecx_7 = ecx_6 * 0x5a30
        *(ecx_7 + eax_6 + 0x17558) |= 0x80
        sub_56e9c0(1)
        uint32_t eax_7 = sub_56b800()
        void* eax_8 = sub_573400()
        uint32_t ebx_1 = zx.d(eax_7.w)
        int32_t eax_9 = *(eax_8 + 4)
        
        if (ebx_1 u>= 0x320)
            sub_591930()
        
        return sub_582d10(eax_9, *(ebx_1 * 0x64 + eax_9 + 0x1a70), *(eax_8 + 4), eax_7, 0x3e9, 0xb, 
            0x3eb, 2, *(eax_8 + 0x28), *(eax_8 + 0x2c), *(eax_8 + 0x30), 0, 0, nullptr, 0, nullptr, 
            nullptr)

sub_63b870(eax_1, &data_801800, "c.activePlayer != PLAYER_NONE", 
    "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 0x52, "SetGainFlag")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
