// 函数: sub_67a000
// 地址: 0x67a000
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t i = 0

if (data_ca9a70 s> 0)
    int32_t* ebx_1 = &data_c29c84
    
    do
        int32_t* esi_1 = *ebx_1
        int32_t* eax
        
        if (esi_1[1] != 0)
            sub_63b870(eax, &data_801800, "gUI2Editor.undoStack[i].def->pParseTree == NULL", 
                "C:\x\ax2017\Engine\UI2.cpp", 0x561b, "UI2EditorDispose")
            
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
        ebx_1 = &ebx_1[0x407]
    while (i s< data_ca9a70)

bool cond:0 = data_c27c24 == 0
data_ca9a6c = 0
data_ca9a70 = 0
data_c28c58 = 0

if (cond:0)
    return 

data_c27c20 = 0
sub_64e810(&data_c27c24)
data_c27c24 = 0
