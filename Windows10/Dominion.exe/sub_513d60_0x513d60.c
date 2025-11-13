// 函数: sub_513d60
// 地址: 0x513d60
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* var_4 = arg1
void* eax = sub_573400()
void* eax_1 = sub_573400()

if (*eax_1 == 4)
    void* result = *(*(eax + 4) + 0x1504)
    
    if (result != 3 && result != 5 && result != 4 && result != 6)
        return sub_61b1b0(result, 0x1b, result == 2, 0xffffffff, 0x14, arg1, *(eax_1 + 0x10), 
            nullptr, nullptr, 0, 0, 0, 0, 0)
    
    return result

sub_63b870(eax_1, &data_801800, "c.contextType == CONTEXT_SETUP", 
    "C:\x\ax2017\Jams\Dominion\code\DomCards_Campaign.cpp", 0xc59, "StampGetPileSetup")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
