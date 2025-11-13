// 函数: sub_50d4c0
// 地址: 0x50d4c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

sub_513d60(0x2d)
void* eax = sub_573400()
char const* const var_cb4
int32_t var_cb0
char const* const var_cac
char* ecx

if (*eax == 4)
    uint32_t eax_1 = sub_50cc00(*(eax + 0x10))
    void* eax_2 = sub_573400()
    uint32_t edi_1 = zx.d(eax_1.w)
    uint32_t var_c98 = *(eax_2 + 4)
    
    if (edi_1 u>= 0x320)
        sub_591930()
    
    uint32_t ecx_2 = var_c98
    var_c98 = eax_1
    int32_t var_c94_1 = *(edi_1 * 0x64 + ecx_2 + 0x1a54)
    sub_573050(&var_c98, 0xffffffff, *(eax_2 + 4), &var_c98)
    eax = *(eax_2 + 4)
    
    if (*(eax + 0x19e4) == 0)
        int32_t var_c90 = 0
        sub_56c680(&var_c90, sub_50d5f0, 8, sub_4f9bf0, 0x10000, &var_c90, 0)
        TEB* fsbase
        void* ecx_4 = *fsbase->ThreadLocalStoragePointer
        eax = *(ecx_4 + 0xf010)
        
        if (eax s> 0)
            *(ecx_4 + 0xf010) = eax - 1
            return eax - 1
        
        var_cac = "DomPopContext"
        var_cb0 = 0x792
        var_cb4 = "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp"
        ecx = "cs.numContexts > 0"
    else
        var_cac = "Landmod_Event_Motivational"
        var_cb0 = 0x8db
        var_cb4 = "C:\x\ax2017\Jams\Dominion\code\DomCards_Campaign.cpp"
        ecx = "c.g->turn_id == 0"
else
    var_cac = "StampGetPileSetup"
    var_cb0 = 0xc59
    var_cb4 = "C:\x\ax2017\Jams\Dominion\code\DomCards_Campaign.cpp"
    ecx = "c.contextType == CONTEXT_SETUP"

sub_63b870(eax, &data_801800, ecx, var_cb4, var_cb0, var_cac)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
