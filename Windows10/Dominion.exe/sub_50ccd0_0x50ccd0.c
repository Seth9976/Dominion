// 函数: sub_50ccd0
// 地址: 0x50ccd0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

sub_513d60(0x24)
void* eax = sub_573400()
char const* const var_2c
int32_t var_28
char const* const var_24
char* ecx

if (*eax == 4)
    uint32_t eax_1 = sub_50cc00(*(eax + 0x10))
    void* eax_2 = sub_573400()
    uint32_t edi_1 = zx.d(eax_1.w)
    uint32_t var_10 = *(eax_2 + 4)
    
    if (edi_1 u>= 0x320)
        sub_591930()
    
    uint32_t ecx_2 = var_10
    var_10 = eax_1
    int32_t var_c_1 = *(edi_1 * 0x64 + ecx_2 + 0x1a54)
    int32_t edx_1 = sub_573050(&var_10, 0xffffffff, *(eax_2 + 4), &var_10)
    eax = *(eax_2 + 4)
    
    if (*(eax + 0x19e4) == 0)
        *(eax + 0x19e4) = 0xffffffff
        int32_t* var_48 = &std::_Func_impl_no_alloc<class <lambda_d92472ec2d4fa9ff81e8ccd5f7f4de12>, void>::`vftable'{for `std::_Func_base<void>'}
        int32_t** var_24_2 = &var_48
        sub_569b30(&var_48, edx_1, 0, var_48)
        *(*(eax_2 + 4) + 0x19e4) = 0
        TEB* fsbase
        void* ecx_4 = *fsbase->ThreadLocalStoragePointer
        eax = *(ecx_4 + 0xf010)
        
        if (eax s> 0)
            *(ecx_4 + 0xf010) = eax - 1
            return eax - 1
        
        var_24 = "DomPopContext"
        var_28 = 0x792
        var_2c = "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp"
        ecx = "cs.numContexts > 0"
    else
        var_24 = "Landmod_Event_Stamp_GotItAlready"
        var_28 = 0x84b
        var_2c = "C:\x\ax2017\Jams\Dominion\code\DomCards_Campaign.cpp"
        ecx = "c.g->turn_id == 0"
else
    var_24 = "StampGetPileSetup"
    var_28 = 0xc59
    var_2c = "C:\x\ax2017\Jams\Dominion\code\DomCards_Campaign.cpp"
    ecx = "c.contextType == CONTEXT_SETUP"

sub_63b870(eax, &data_801800, ecx, var_2c, var_28, var_24)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
