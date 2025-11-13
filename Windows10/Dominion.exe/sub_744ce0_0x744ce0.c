// 函数: sub_744ce0
// 地址: 0x744ce0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

char* var_8 = arg1

if (arg1.b != 0)
    sub_6ee530(arg1)

int32_t i = data_1593c64
void* eax_1

if (i != 0x80)
    eax_1 = data_1593c68
else
    int32_t* esi_1 = data_1514470
    
    if ((esi_1[2].b & 1) == 0)
        sub_69cee0(*esi_1, esi_1[3])
        *esi_1 = 0
    
    char** ecx_1 = esi_1[1]
    
    if (ecx_1 != 0)
        sub_6a3220(ecx_1)
        esi_1[1] = 0
    
    _aligned_free(esi_1)
    memmove(0x1513464, 0x1514474, 0x7f7f0)
    i = data_1593c64 - 1
    eax_1 = data_1593c68 - 1
    data_1593c64 = i
    data_1593c68 = eax_1

int32_t var_1c
char const* const var_18_3
char* ecx_5

if (i s< eax_1)
    void* ebx_2 = &(&data_1514470)[i * 0x404]
    
    do
        int32_t* esi_2 = *ebx_2
        
        if (esi_2[1] != 0)
            var_18_3 = "CreateUndoCheckpoint"
            var_1c = 0xf2
            ecx_5 = "gUI.undoStack[i].def->pParseTree == NULL"
            goto label_744e74
        
        if ((esi_2[2].b & 1) == 0)
            sub_69cee0(*esi_2, esi_2[3])
            *esi_2 = 0
        
        char** ecx_3 = esi_2[1]
        
        if (ecx_3 != 0)
            sub_6a3220(ecx_3)
            esi_2[1] = 0
        
        eax_1 = _aligned_free(esi_2)
        i += 1
        ebx_2 += 0x1010
    while (i s< data_1593c68)
    
    i = data_1593c64

memcpy(i * 0x1010 + 0x1513464, &data_1512458, 0x100c)
void* ebx_3 = data_17774dc
int32_t* esi_3 = *data_1512450
int128_t* eax_5 = sub_687730(0x10)
*eax_5 = zx.o(0)
*eax_5 = sub_69d4c0(*esi_3, ebx_3)
eax_1 = i * 0x1010 + 0x1513464
*(eax_5 + 0xc) = ebx_3
*(eax_1 + 0x100c) = eax_5

if (*(eax_5 + 4) == 0)
    int32_t result = data_1593c64 + 1
    data_1593c64 = result
    data_1593c68 = result
    return result

var_18_3 = "SaveUndoState"
var_1c = 0xd8
ecx_5 = "s.def->pParseTree == NULL"
label_744e74:
sub_63b870(eax_1, &data_801800, ecx_5, "C:\x\ax2017\Engine\Editor\UIEditor.cpp", var_1c, var_18_3)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
