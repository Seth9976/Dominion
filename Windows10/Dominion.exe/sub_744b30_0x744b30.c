// 函数: sub_744b30
// 地址: 0x744b30
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t i = 0

if (data_1593c68 s> 0)
    int32_t* ebx_1 = &data_1514470
    
    do
        int32_t* esi_1 = *ebx_1
        int32_t eax
        
        if (esi_1[1] != 0)
            sub_63b870(eax, &data_801800, "gUI.undoStack[i].def->pParseTree == NULL", 
                "C:\x\ax2017\Engine\Editor\UIEditor.cpp", 0x5d, "UIEditorDispose")
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        
        if ((esi_1[2].b & 1) == 0)
            sub_69cee0(*esi_1, esi_1[3])
            *esi_1 = 0
        
        char** ecx_2 = esi_1[1]
        
        if (ecx_2 != 0)
            sub_6a3220(ecx_2)
            esi_1[1] = 0
        
        eax = _aligned_free(esi_1)
        i += 1
        ebx_1 = &ebx_1[0x404]
    while (i s< data_1593c68)

int32_t ecx_3 = data_1512454
data_1593c64 = 0
data_1593c68 = 0
data_151345c = 0
sub_698a30(ecx_3)
HWND hWnd = data_147b084
data_1512454 = 0
return DragAcceptFiles(hWnd, 0)
