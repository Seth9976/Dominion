// 函数: sub_58f080
// 地址: 0x58f080
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_14
int32_t* i
char const* const ecx

if ((arg2 & 0x20000) == 0)
    void* eax_1 = sub_571b30(arg1, data_cce9b0)
    i = *(eax_1 + 0x9c) & 0x940
    
    if (((*(eax_1 + 0x98) & 0x7f000400) | i) != 0)
        int32_t edx_1 = data_cce9b8
        
        if (edx_1 s>= 4)
            i.b = 0
            return i
        
        data_cce9b8 = edx_1 + 1
        int32_t ecx_6 = edx_1 * 0xf
        *(data_cce9c4 + (ecx_6 << 2) + 0x28) = arg1
        int32_t eax_5 = data_cce9c4
        *(eax_5 + (ecx_6 << 2) + 0x2c) = zx.o(0)
        *(eax_5 + (ecx_6 << 2) + 0x3c) = zx.o(0)
        *(eax_5 + (ecx_6 << 2) + 0x4c) = zx.o(0)
        *(eax_5 + (ecx_6 << 2) + 0x5c) = 0
        sub_58e890(arg1, 0)
        int32_t eax_6
        eax_6.b = 1
        return eax_6
    
    char const* const var_10_1 = "RollKingdom_AddLandscape"
    var_14 = 0x45e3
    ecx = "PregameIsLandscape(what)"
else
    int32_t edi_1 = data_cce9c4
    int32_t esi_1 = 0x11
    
    for (i = 0x15c; i s<= 0x16c; )
        if (*(i + edi_1) == 0)
            *(edi_1 + (esi_1 << 2) + 0x118) = arg1
            sub_58e890(arg1, arg2)
            int32_t eax
            eax.b = 1
            return eax
        
        i = &i[1]
        esi_1 += 1
    
    char const* const var_10 = "RollKingdom_AddLandscape"
    var_14 = 0x45df
    ecx = "Halt"

sub_63b870(i, &data_801800, ecx, "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp", var_14, 
    "RollKingdom_AddLandscape")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
