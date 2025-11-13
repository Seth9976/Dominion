// 函数: sub_6d7af0
// 地址: 0x6d7af0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebp_1
int32_t __saved_ebp = __saved_ebp_1
int32_t __saved_ebx_1
int32_t __saved_ebx = __saved_ebx_1
int32_t __saved_esi_1
int32_t __saved_esi = __saved_esi_1
int32_t __saved_edi_1
int32_t __saved_edi = __saved_edi_1
void* eax = sub_6dd320(&data_8ce7bc, arg3)
int32_t ecx = 0
*(arg4 + 0xc) = eax
int32_t edx_1 = *arg2
float var_24
uint32_t eax_3
char const* const ecx_4

if (edx_1 s<= 0)
label_6d7b32:
    eax_3 = *(eax + 0x10) - 1
    
    if (eax_3 u> 0x28)
        return eax_3
    
    eax_3 = zx.d(lookup_table_6d7da0[eax_3])
    
    switch (eax_3)
        case 0
            if (arg3 s>= 0 && arg3 s< data_8ce7cc)
                int32_t eax_15 = *(*(data_8ce7c8 + (arg3 << 2)) + 0x24)
                *(arg4 + 0x10) = eax_15
                return eax_15
        case 1
        label_6d7c8d:
            int32_t eax_16 = sub_6dd280(eax_3, arg2, &data_8ce7bc, arg3)
            *(arg4 + 0x10) = eax_16
            return eax_16
        case 2
            if (arg3 s>= 0 && arg3 s< data_8ce7cc)
                eax_3 = *(data_8ce7c8 + (arg3 << 2))
                int128_t* ecx_11 = *(eax_3 + 0x24)
                
                if (ecx_11 == 0)
                    return eax_3
                
                float var_20
                float var_1c
                int32_t eax_24 = sub_64b360((*ecx_11).d, var_24, var_20, var_1c)
                uint32_t eax_26 = zx.d((eax_24 u>> 0x10).b)
                *(arg4 + 0x10) = (((((eax_24 u>> 0x18 << 8) + zx.d(eax_24.b)) << 8)
                    + zx.d((eax_24 u>> 8).b)) << 8) + eax_26
                return eax_26
        case 3
            if (arg3 s>= 0 && arg3 s< data_8ce7cc)
                eax_3 = *(data_8ce7c8 + (arg3 << 2))
                int32_t* ecx_8 = *(eax_3 + 0x24)
                
                if (ecx_8 == 0)
                    return eax_3
                
                int32_t ecx_9 = *ecx_8
                uint32_t eax_22 = zx.d((ecx_9 u>> 0x10).b)
                *(arg4 + 0x10) = (((((ecx_9 u>> 0x18 << 8) + zx.d(ecx_9.b)) << 8)
                    + zx.d((ecx_9 u>> 8).b)) << 8) + eax_22
                return eax_22
        case 4
            return eax_3
    
    char const* const var_1c_7 = "AttribTagGetField"
    int32_t var_20_6 = 0x8b
    char const* const var_24_3 = "C:\x\ax2017\Engine\AttribMap.cpp"
    ecx_4 = "(int)tag >= 0 && (int)tag < pAttribTable->lookupTableSize"
    goto label_6d7d73

int32_t* eax_1 = arg2[2]

while (*eax_1 != arg3)
    ecx += 1
    eax_1 = &eax_1[4]
    
    if (ecx s>= edx_1)
        goto label_6d7b32

void* edx_2 = *(arg4 + 0xc)
eax_3 = *(edx_2 + 0x10) - 1

if (eax_3 u> 0x28)
label_6d7c43:
    char const* const var_1c_5 = "sMaterialRenderStateValueFromConstant"
    int32_t var_20_5 = 0x1f3
    char const* const var_24_2 = "C:\x\ax2017\Engine\Material.cpp"
    ecx_4 = "Halt"
label_6d7d73:
    sub_63b870(eax_3, &data_801800, ecx_4)
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

eax_3 = zx.d(lookup_table_6d7de0[eax_3])

switch (eax_3)
    case 0
        eax_3 = sub_6dd1e0(eax_3, arg2, &data_8ce7bc, edx_2, arg3)
        *(arg4 + 0x10) = eax_3
        return eax_3
    case 1
        goto label_6d7c8d
    case 2
        eax_3 = sub_6dd1e0(eax_3, arg2, &data_8ce7bc, data_1724a6c, arg3)
        
        if (eax_3 != 0)
            int32_t eax_10 = sub_64b360((*eax_3).d, var_24)
            uint32_t eax_12 = zx.d((eax_10 u>> 0x10).b)
            *(arg4 + 0x10) = (((((eax_10 u>> 0x18 << 8) + zx.d(eax_10.b)) << 8)
                + zx.d((eax_10 u>> 8).b)) << 8) + eax_12
            return eax_12
        
        char const* const var_1c_4 = "sMaterialRenderStateValueFromConstant"
        int32_t var_20_4 = 0x1eb
        char const* const var_24_1 = "C:\x\ax2017\Engine\Material.cpp"
        ecx_4 = "pColor"
        goto label_6d7d73
    case 3
        eax_3 = sub_6dd1e0(eax_3, arg2, &data_8ce7bc, data_1724a70, arg3)
        
        if (eax_3 == 0)
            return eax_3
        
        int32_t ecx_1 = *eax_3
        uint32_t eax_9 = zx.d((ecx_1 u>> 0x10).b)
        *(arg4 + 0x10) =
            (((((ecx_1 u>> 0x18 << 8) + zx.d(ecx_1.b)) << 8) + zx.d((ecx_1 u>> 8).b)) << 8) + eax_9
        return eax_9
    case 4
        goto label_6d7c43
