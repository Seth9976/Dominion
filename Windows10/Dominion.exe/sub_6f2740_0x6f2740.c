// 函数: sub_6f2740
// 地址: 0x6f2740
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_c = ecx
int32_t* ecx_1 = data_147ded0
int32_t edi

if (ecx_1 == 0 || ecx_1[1] != 0x19)
    edi = 0
else
    int32_t eax_1 = sub_5af880(ecx_1)
    ecx_1 = data_147ded0
    edi = eax_1

int32_t* esi

if (ecx_1 == 0 || ecx_1[1] != 0x1b)
    esi = nullptr
else
    esi = sub_5af880(ecx_1)

LRESULT eax_4 = SendMessageA(GetDlgItem(data_147d470, 0x76), 0x188, 0, 0)

if (edi != 0)
    int32_t result = sub_6f2220(nullptr, 5)
    
    if (result == 0)
        return result
    
    LRESULT esi_1 = 0
    
    if (eax_4 != 0xffffffff)
        esi_1 = eax_4 + 1
    
    LRESULT var_20_1 = eax_4 + 1
    int32_t* eax_6 = sub_69dd00(data_177750c, 0)
    sub_6fb630(eax_6, eax_6, edi, esi_1)
    sub_6f2600(esi_1)
    int32_t* eax_8
    int32_t edx_2
    edx_2:eax_8 = sx.q(result)
    char* ecx_7 = sub_6dcc50(eax_8, esi_1 * 0x168 + *edi, &data_8cc5f8, 5, eax_8, edx_2)
    void* eax_9 = data_147ded0
    
    if (eax_9 != 0)
        int32_t eax_10 = *(eax_9 + 4)
        
        if (eax_10 == 0x19)
            ecx_7 = sub_6f0170(esi_1, 0xffffffff)
        else if (eax_10 == 0x1b)
            ecx_7 = sub_6f0970(esi_1)
    
    data_147d474 = 0
    sub_6ee530(ecx_7)
    sub_73d740()
    return sub_73d5c0()

if (esi == 0)
    sub_63b870(eax_4, &data_801800, "Halt", "C:\x\ax2017\Engine\Windows\EditorWindow.cpp", 0x9b7, 
        "EditorAddEmitter")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

LRESULT edi_1 = 0

if (eax_4 != 0xffffffff)
    edi_1 = eax_4 + 1

LRESULT var_20_3 = eax_4
int32_t* eax_12 = sub_69dd00(data_1777590, 0)
sub_6fb630(eax_12, eax_12, esi, edi_1)
int32_t ecx_12 = edi_1 * 3
int32_t* esi_2 = *esi + (ecx_12 << 3)
int32_t var_20_4 = ecx_12
int32_t* eax_14 = sub_69dd00(data_1777598, 0)
int32_t var_20_5 = sub_6fb630(eax_14, eax_14, esi_2, 0)
int32_t* eax_15 = sub_69dd00(data_1777598, 0)
char* ecx_18 = sub_6fb630(eax_15, eax_15, esi_2, 0)
int32_t* eax_16 = *esi_2
*eax_16 = 0
eax_16[1] = 0
eax_16[2] = 0
eax_16[3] = 1
void* eax_17 = *esi_2
*(eax_17 + 0x10) = 0x3f800000
*(eax_17 + 0x14) = 0x3f800000
*(eax_17 + 0x18) = 0x3f800000
*(eax_17 + 0x1c) = 1
void* eax_18 = data_147ded0

if (eax_18 != 0)
    int32_t eax_19 = *(eax_18 + 4)
    
    if (eax_19 == 0x19)
        char* ecx_20 = sub_6f0170(edi_1, 0xffffffff)
        data_147d474 = 0
        return sub_6ee530(ecx_20)
    
    if (eax_19 == 0x1b)
        ecx_18 = sub_6f0970(edi_1)

data_147d474 = 0
return sub_6ee530(ecx_18)
