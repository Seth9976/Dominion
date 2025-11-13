// 函数: sub_6a5650
// 地址: 0x6a5650
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* edi = arg4
int32_t edx = *edi

if (edx == 0xffffffff)
    return 

void* eax = &edi[2]
void* var_c_1 = eax
char const* const var_24_3
int32_t var_20_2
char const* const var_1c_2
char* ecx_8

if (edx s< 0 || edx s>= *(arg2 + 0x10))
label_6a5779:
    var_1c_2 = "AttribTagGetField"
    var_20_2 = 0x8b
    ecx_8 = "(int)tag >= 0 && (int)tag < pAttribTable->lookupTableSize"
    var_24_3 = "C:\x\ax2017\Engine\AttribMap.cpp"
label_6a5792:
    sub_63b870(eax, &data_801800, ecx_8, var_24_3, var_20_2, var_1c_2)
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

char* eax_3 = *(*(*(arg2 + 0xc) + (edx << 2)) + 4)
eax = sub_6dd320(arg2, edx)
void* ebx_1 = eax

if (*(ebx_1 + 0x10) - 1 u> 0x10)
    eax = sub_69c590(ebx_1)
    
    if (eax.b != 0)
        sub_6a4d40(eax, *var_c_1, arg3, ebx_1, eax_3, 0, nullptr)
        return 
    
    int32_t ecx_7 = *edi
    
    if (ecx_7 s< 0 || ecx_7 s>= *(arg2 + 0x10))
        goto label_6a5779
    
    if ((*(*(*(arg2 + 0xc) + (ecx_7 << 2)) + 0x28) & 0x40) == 0)
        edi[2]
        sub_6a4b50(arg3, eax_3)[3]
        sub_6a6290(ebx_1, nullptr)
        return 
    
    eax = *(ebx_1 + 4)
    
    if ((*(eax + 0x28) & 0x40) != 0)
        sub_6a4d40(eax, edi[2], arg3, *(eax + 0xc), eax_3, 0, nullptr)
        return 
    
    var_1c_2 = "DefParseTreeMakeFromDefinitionTagValue"
    var_20_2 = 0x702
    var_24_3 = "C:\x\ax2017\Engine\DefParseTree.cpp"
    ecx_8 = "pDefMap->pDTMapFields[0].fieldFlags & DEF_FIELD_FLAG_INLINE_XML"
    goto label_6a5792

int32_t ecx_3 = *edi

if (ecx_3 s< 0 || ecx_3 s>= *(arg2 + 0x10))
    goto label_6a5779

void* eax_5 = *(*(arg2 + 0xc) + (ecx_3 << 2))
sub_6a4d40(eax_5, &edi[2], arg3, ebx_1, eax_3, *(eax_5 + 0x28), *(eax_5 + 0x1c))
