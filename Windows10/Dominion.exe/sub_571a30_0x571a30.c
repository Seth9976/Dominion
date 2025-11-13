// 函数: sub_571a30
// 地址: 0x571a30
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax_1
char edx
edx:eax_1 = sx.q(arg1)
int32_t eax_3 = (eax_1 + zx.d(edx)) s>> 8
int32_t ecx_1 = eax_3 << 8
int32_t esi_1 = arg1 - ecx_1
int32_t var_10 = esi_1
int32_t var_8

if (sub_571770(eax_3, &var_8) == 0)
    return 0x931208

int32_t var_24_1
int32_t eax_7
char const* const ecx_4

while (true)
    void* result = esi_1 * 0x698 + var_8
    
    if (*(result + 4) s<= arg2)
        int32_t eax_6 = *(result + 8)
        
        if (arg2 s< eax_6)
            return result
        
        if (arg2 == 0x18 && eax_6 == arg2)
            return result
    
    eax_7 = *(result + 0xc)
    
    if (eax_7 == 0)
        int32_t var_20 = arg2
        int32_t var_24 = *(result + 0x8c)
        int32_t var_28 = arg1
        sub_63b5f0("can't find card %d cardcur %d version %d")
        return var_10 * 0x698 + var_8
    
    if (eax_7 == arg1)
        char const* const var_20_2 = "DomDefGetSlow"
        var_24_1 = 0x16d
        ecx_4 = "defs[idx].edition.replacementCard != what"
        break
    
    eax_7 -= ecx_1
    
    if (esi_1 == eax_7)
        char const* const var_20_1 = "DomDefGetSlow"
        var_24_1 = 0x170
        ecx_4 = "idx != newIdx"
        break
    
    esi_1 = eax_7

sub_63b870(eax_7, &data_801800, ecx_4, "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp", var_24_1, 
    "DomDefGetSlow")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
