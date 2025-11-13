// 函数: sub_5d09f0
// 地址: 0x5d09f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebx
ebx.b = arg2
int32_t var_18
char const* const var_14
void* result

if (*(arg1 + 0x2c) == 3)
    result = sub_5cb070()
    
    if (ebx.b == 0 && result != 0)
        result = *(result + 0xc)
        
        if (result != 0x11 && result != 0x13)
            return result
    
    if (*(arg1 + 0x2c) == 3)
        int32_t eax = *(arg1 + 0x30)
        
        if (eax != 0x1301 && eax != 0x70d && eax != 0xd3d && eax != 0x1128 && eax != 0x718
                && eax != 0xd30)
            return sub_5cffd0()
        
        return sub_5cbfe0(arg1, 0)
    
    var_14 = "PileIs"
    var_18 = 0x8e1
else
    var_14 = "DomZoomPile"
    var_18 = 0x175f

sub_63b870(result, &data_801800, "gfx.type == DOMGFX_PILE", 
    "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", var_18, var_14)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
