// 函数: sub_566a70
// 地址: 0x566a70
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_28 = arg3
void* eax = sub_573400()
void* var_1c = eax
uint32_t esi = zx.d(arg2.w)
int32_t* edi = *(eax + 4)
int32_t var_20

if (arg2 == 0)
    var_20 = esi * 0x64
else
    if (esi u>= 0x320)
        sub_591930()
    
    var_20 = esi * 0x64
    void* eax_2 = sub_571b30(edi[esi * 0x19 + 0x693], edi[0x352])
    int32_t eax_4 = *(eax_2 + 0x9c) & 0x940
    
    if (((*(eax_2 + 0x98) & 0x7f000400) | eax_4) != 0)
        sub_63b870(eax_4, &data_801800, 
            "whichExtraPlay == CARDID_NULL || !IsLandscape(g, whichExtraPlay)", 
            "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 0x6ca, "ReplayCard")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    eax = var_1c

uint32_t eax_5 = *(eax + 0xc)
uint32_t eax_7 = zx.d(var_28.w)
var_1c = eax_7

if (eax_7 u>= 0x320)
    sub_591930()
    eax_7 = var_1c

var_28.q = 0
int32_t eax_9 = edi[eax_7 * 0x19 + 0x695]
int32_t var_10 = var_28
int32_t var_c = eax_9

if (esi u>= 0x320)
    sub_591930()

var_1c = arg2
int32_t var_18 = *(var_20 + edi + 0x1a54)
return sub_586320(&var_10, eax_5, edi, &var_10, &var_1c, &var_28, arg4 | 4)
