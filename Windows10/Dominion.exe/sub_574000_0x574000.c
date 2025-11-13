// 函数: sub_574000
// 地址: 0x574000
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* var_14 = arg3
int32_t* edx = arg4
int32_t* result = (edx << 4) + 0x1524 + arg3
int32_t var_28
char* ecx

if (*result == 0)
    void* edi_3 = (arg2 << 4) + arg3
    
    if (*(edi_3 + 0x1524) != 0)
        int32_t eax_3 = *(arg3 + 0x1504)
        
        if (eax_3 != 3 && eax_3 != 5 && eax_3 != 4 && eax_3 != 6)
            arg3.b = eax_3 == 2
            sub_61b1b0(eax_3, 0x2b, arg3.b, 0xffffffff, 0, arg2, edx, nullptr, nullptr, 0, 0, 0, 0, 
                0)
            arg3 = var_14
            edx = arg4
        
        void* edi_6
        
        for (int32_t i = *(edi_3 + 0x152c); i != 0; i = *(edi_6 + 0x1aa4))
            uint32_t edi_4 = zx.d(i.w)
            
            if (edi_4 u>= 0x320)
                sub_591930()
                arg3 = var_14
                edx = arg4
            
            edi_6 = edi_4 * 0x64 + arg3
            *(edi_6 + 0x1a50) = edx
            int32_t eax_4 = *(arg3 + 0x1504)
            
            if (eax_4 != 3 && eax_4 != 5 && eax_4 != 4 && eax_4 != 6)
                arg3.b = eax_4 == 2
                sub_61b1b0(eax_4, 0x2a, arg3.b, 0xffffffff, i, edx, nullptr, nullptr, nullptr, 0, 
                    0, 0, 0, 0)
                arg3 = var_14
                edx = arg4
        
        *result = *(edi_3 + 0x1524)
        *(edi_3 + 0x1524) = zx.o(0)
        return result
    
    char const* const var_24_1 = "ShiftPile"
    var_28 = 0x957
    ecx = "g._boardPiles[where].what != CARD_NONE"
else
    char const* const var_24 = "ShiftPile"
    var_28 = 0x956
    ecx = "g._boardPiles[newWhere].what == CARD_NONE"

sub_63b870(result, &data_801800, ecx, "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp", var_28, 
    "ShiftPile")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
