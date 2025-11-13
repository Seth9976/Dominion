// 函数: sub_665770
// 地址: 0x665770
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = arg1
char* ecx = sub_6656f0()

if (arg1.b != 0)
    sub_6ee530(ecx)

int32_t i = data_ca9a6c
void* eax_1

if (i != 0x80)
    eax_1 = data_ca9a70
else
    int32_t* esi_1 = data_c29c84
    
    if ((esi_1[2].b & 1) == 0)
        sub_69cee0(*esi_1, esi_1[3])
        *esi_1 = 0
    
    char** ecx_2 = esi_1[1]
    
    if (ecx_2 != 0)
        sub_6a3220(ecx_2)
        esi_1[1] = 0
    
    _aligned_free(esi_1)
    memmove(0xc28c6c, 0xc29c88, 0x7fde4)
    i = data_ca9a6c - 1
    eax_1 = data_ca9a70 - 1
    data_ca9a6c = i
    data_ca9a70 = eax_1

int32_t var_1c
char const* const var_18_3
char* ecx_8

if (i s< eax_1)
    void* ebx_2 = &(&data_c29c84)[i * 0x407]
    
    do
        int32_t* esi_2 = *ebx_2
        
        if (esi_2[1] != 0)
            var_18_3 = "UI2CreateUndoCheckpoint"
            var_1c = 0x35c7
            ecx_8 = "gUI2Editor.undoStack[i].def->pParseTree == NULL"
            goto label_665934
        
        if ((esi_2[2].b & 1) == 0)
            sub_69cee0(*esi_2, esi_2[3])
            *esi_2 = 0
        
        char** ecx_4 = esi_2[1]
        
        if (ecx_4 != 0)
            sub_6a3220(ecx_4)
            esi_2[1] = 0
        
        eax_1 = _aligned_free(esi_2)
        i += 1
        ebx_2 += 0x101c
    while (i s< data_ca9a70)
    
    i = data_ca9a6c

memcpy(i * 0x101c + 0xc28c6c, &data_c27c54, 0x1018)
void* ebx_3 = data_1724a84
int32_t* esi_3 = *data_c27c20
int128_t* eax_5 = sub_687730(0x10)
*eax_5 = zx.o(0)
*eax_5 = sub_69d4c0(*esi_3, ebx_3)
void* eax_7 = i * 0x101c + 0xc28c6c
*(eax_5 + 0xc) = ebx_3
*(eax_7 + 0x1018) = eax_5
int32_t* ebx_4 = *eax_5
int32_t i_1 = 0

if (ebx_4[2] s> 0)
    int32_t esi_4 = 0
    
    do
        sub_6653b0(*ebx_4 + esi_4)
        i_1 += 1
        esi_4 += 0x18
    while (i_1 s< ebx_4[2])
    
    eax_7 = i * 0x101c + 0xc28c6c

eax_1 = *(eax_7 + 0x1018)

if (*(eax_1 + 4) == 0)
    int32_t result = data_ca9a6c + 1
    data_ca9a6c = result
    data_ca9a70 = result
    return result

var_18_3 = "UI2SaveUndoState"
var_1c = 0x3575
ecx_8 = "s.def->pParseTree == NULL"
label_665934:
sub_63b870(eax_1, &data_801800, ecx_8, "C:\x\ax2017\Engine\UI2.cpp", var_1c, var_18_3)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
