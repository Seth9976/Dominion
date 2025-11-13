// 函数: sub_50cec0
// 地址: 0x50cec0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

sub_513d60(0x29)
void* eax = sub_573400()

if (*eax == 4)
    int32_t edi = *(eax + 0x10)
    int32_t esi_1 = *(sub_571b30(edi, 0x17) + 0x90) << 0x10
    void* eax_2 = sub_573400()
    return sub_5911e0(eax_2, 0xffffffff, *(eax_2 + 4), 0x20, esi_1 | edi, 0, 0, 0, 1, 0xffffffff, 
        0, 0)

sub_63b870(eax, &data_801800, "c.contextType == CONTEXT_SETUP", 
    "C:\x\ax2017\Jams\Dominion\code\DomCards_Campaign.cpp", 0xc59, "StampGetPileSetup")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
