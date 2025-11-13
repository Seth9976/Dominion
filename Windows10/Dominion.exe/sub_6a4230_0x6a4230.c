// 函数: sub_6a4230
// 地址: 0x6a4230
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

if (arg4 == 0)
    *arg3 = 0
    arg3[2] = 0
    return 

int32_t ecx = *(arg4 + 0xc)
*(arg4 + 0x10) = 0

if (ecx == 0)
    *arg3 = 0
    arg3[2] = 0
    return 

void* eax = *(arg2 + 0xc)

if (*(eax + 0x10) != 0x13)
    sub_63b870(eax, &data_801800, "pField->pDefMap->defType == DT_ATTRIB_MAP", 
        "C:\x\ax2017\Engine\DefParseTree.cpp", 0x377, "DefParseReadAttribMap")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

void* eax_1 = *(arg2 + 0x1c)
int32_t count = ecx << 4
int32_t eax_2 = sub_687730(count)
int32_t* ecx_1
arg1, ecx_1 = memset(eax_2, 0, count)
arg3[2] = eax_2
int32_t* i = *(arg4 + 4)
int32_t* esi_2 = nullptr

while (i != 0)
    int32_t var_1c_2 = *i
    i = i[1]
    arg1 = sub_6a3dc0(arg1, (esi_2 << 4) + arg3[2], eax_1, ecx_1)
    ecx_1 = esi_2 + 1
    
    if (arg1.b == 0)
        ecx_1 = esi_2
    
    esi_2 = ecx_1

*arg3 = esi_2

if (esi_2 != 0)
    return 

arg1 = arg3[2]

if (arg1 != 0)
    _aligned_free(arg1)
    arg3[2] = esi_2
    return 

arg3[2] = 0
