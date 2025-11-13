// 函数: sub_6f2600
// 地址: 0x6f2600
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

if (arg1 u> 0xff)
    int32_t eax
    sub_63b870(eax, &data_801800, "emitterIndex >= 0 && emitterIndex < MAX_EMITTERS", 
        "C:\x\ax2017\Engine\Windows\EditorWindow.cpp", 0x946, "ToolDataAddItem")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t esi = arg1 << 3

if (0xff - arg1 s> 0)
    memmove(esi + &data_147d4bc, esi + &data_147d4b4, (0xff - arg1) << 3)

*(esi + &data_147d4b8) = 0
*(esi + &data_147d4b4) = arg1 + 0x64
return arg1 + 0x64
