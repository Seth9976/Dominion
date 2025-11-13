// 函数: sub_56ca80
// 地址: 0x56ca80
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = sub_573400()
int32_t ecx = *(eax + 0x44)

if (ecx != 0xffffffff)
    *(arg1 + 0xc80) = ecx
    memcpy(arg1, *(eax + 0x48), ecx << 2)
    return arg1

sub_63b870(eax, &data_801800, "c.triggerNumAssociatedCards != -1", 
    "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 0x14b9, "Trigger_AssociatedCardsList")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
