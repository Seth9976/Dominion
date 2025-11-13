// 函数: sub_6f29a0
// 地址: 0x6f29a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

LRESULT eax = sub_6ee740()
int32_t result = sub_6f2220(sub_6ee7a0(), eax)

if (result == 0)
    return result

int32_t* eax_2 = sub_6ee6b0()

if (eax_2 == 0)
    sub_63b870(eax_2, &data_801800, "pEmitter", "C:\x\ax2017\Engine\Windows\EditorWindow.cpp", 
        0xa72, "EditorPickAsset")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t* eax_4
int32_t edx_1
edx_1:eax_4 = sx.q(result)
char* ecx_2 = sub_6dcc50(eax_4, eax_2, &data_8cc5f8, eax, eax_4, edx_1)
void* eax_5 = data_147ded0

if (eax_5 != 0)
    int32_t eax_6 = *(eax_5 + 4)
    
    if (eax_6 == 0x19)
        return sub_6ee530(sub_6f0170(0xffffffff, 0xffffffff))
    
    if (eax_6 == 0x1b)
        ecx_2 = sub_6f0970(0xffffffff)

return sub_6ee530(ecx_2)
