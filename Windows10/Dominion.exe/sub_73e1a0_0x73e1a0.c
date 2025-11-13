// 函数: sub_73e1a0
// 地址: 0x73e1a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t i = 0

if (data_14ff39c s> 0)
    int32_t* ebx_1 = &data_147ff9c
    
    do
        int32_t* esi_1 = *ebx_1
        int32_t eax
        
        if (esi_1[1] != 0)
            sub_63b870(eax, &data_801800, "gFab.undoStack[i].def->pParseTree == NULL", 
                "C:\x\ax2017\Engine\Editor\FabEditor.cpp", 0x9d, "FabEditorDispose")
            
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
        ebx_1 = &ebx_1[0x402]
    while (i s< data_14ff39c)

HWND hWnd = data_147b084
data_14ff398 = 0
data_14ff39c = 0
data_147ef94 = 0
DragAcceptFiles(hWnd, 0)
int32_t eax_1 = data_14ff3dc

if (eax_1 != 0)
    uint32_t eax_2 = sub_6d1370(eax_1)
    int32_t edx_2 = data_cafe78
    data_cafe78 = zx.d(*(eax_2 + 0x4cc))
    *(eax_2 + 0x4cc) = edx_2
    data_cafe7c -= 1
    data_14ff3dc = 0

uint32_t result = data_14ff3e4

if (result != 0)
    result = sub_6d1370(result)
    int32_t edx_3 = data_cafe78
    data_cafe78 = zx.d(*(result + 0x4cc))
    *(result + 0x4cc) = edx_3
    data_cafe7c -= 1
    data_14ff3e4 = 0

return result
