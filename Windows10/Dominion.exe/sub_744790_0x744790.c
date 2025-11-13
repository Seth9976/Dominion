// 函数: sub_744790
// 地址: 0x744790
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

char* var_8 = arg1

if (arg1.b != 0)
    sub_6ee530(arg1)

int32_t i = data_14ff398
void* eax_1

if (i != 0x80)
    eax_1 = data_14ff39c
else
    int32_t* esi_1 = data_147ff9c
    
    if ((esi_1[2].b & 1) == 0)
        sub_69cee0(*esi_1, esi_1[3])
        *esi_1 = 0
    
    char** ecx_1 = esi_1[1]
    
    if (ecx_1 != 0)
        sub_6a3220(ecx_1)
        esi_1[1] = 0
    
    _aligned_free(esi_1)
    memmove(0x147ef98, 0x147ffa0, 0x7f3f8)
    i = data_14ff398 - 1
    eax_1 = data_14ff39c - 1
    data_14ff398 = i
    data_14ff39c = eax_1

int32_t var_1c
char const* const var_18_3
char* ecx_5

if (i s< eax_1)
    void* ebx_2 = &(&data_147ff9c)[i * 0x402]
    
    do
        int32_t* esi_2 = *ebx_2
        
        if (esi_2[1] != 0)
            var_18_3 = "FabCreateUndoCheckpoint"
            var_1c = 0x902
            ecx_5 = "gFab.undoStack[i].def->pParseTree == NULL"
            goto label_744924
        
        if ((esi_2[2].b & 1) == 0)
            sub_69cee0(*esi_2, esi_2[3])
            *esi_2 = 0
        
        char** ecx_3 = esi_2[1]
        
        if (ecx_3 != 0)
            sub_6a3220(ecx_3)
            esi_2[1] = 0
        
        eax_1 = _aligned_free(esi_2)
        i += 1
        ebx_2 += 0x1008
    while (i s< data_14ff39c)
    
    i = data_14ff398

memcpy(i * 0x1008 + 0x147ef98, &data_147df94, 0x1004)
void* ebx_3 = data_1777518
int32_t* esi_3 = *data_147df90
int128_t* eax_5 = sub_687730(0x10)
*eax_5 = zx.o(0)
*eax_5 = sub_69d4c0(*esi_3, ebx_3)
eax_1 = i * 0x1008 + 0x147ef98
*(eax_5 + 0xc) = ebx_3
*(eax_1 + 0x1004) = eax_5

if (*(eax_5 + 4) == 0)
    int32_t result = data_14ff398 + 1
    data_14ff398 = result
    data_14ff39c = result
    return result

var_18_3 = "FabSaveUndoState"
var_1c = 0x8e8
ecx_5 = "s.def->pParseTree == NULL"
label_744924:
sub_63b870(eax_1, &data_801800, ecx_5, "C:\x\ax2017\Engine\Editor\FabEditor.cpp", var_1c, var_18_3)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
