// 函数: sub_6d8120
// 地址: 0x6d8120
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
*(arg4 + 8) = 0
*(arg4 + 0xc) = 0
uint32_t eax_2 = *(eax + 0x10) - 1
char const* const ecx_3

if (eax_2 u> 0x28)
label_6d829e:
    char const* const var_1c_8 = "sMaterialFunctionalRenderStateValueFromConstant"
    int32_t var_20_5 = 0x28c
    ecx_3 = "Halt"
label_6d82ad:
    char const* const var_24_2 = "C:\x\ax2017\Engine\Material.cpp"
    sub_63b870(eax_2, &data_801800, ecx_3)
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

eax_2 = zx.d(lookup_table_6d82ec[eax_2])

switch (eax_2)
    case 0
        *(arg4 + 4) = sub_6dcf50(eax_2, arg2, &data_8ce7bc, arg3)
    label_6d8288:
        void* var_1c_7 = arg4
        int32_t* var_20_4 = arg2
        int32_t var_24_1 = arg3
        return (*(*data_147b070 + 0x7c))() != 0
    case 1
        *(arg4 + 4) = sub_6dd090(eax_2, arg2, &data_8ce7bc, arg3)
        goto label_6d8288
    case 2
        *(arg4 + 4) = zx.d(sub_6dcff0(eax_2, arg2, &data_8ce7bc, arg3))
        goto label_6d8288
    case 3
        *(arg4 + 4) = sub_6dd280(eax_2, arg2, &data_8ce7bc, arg3)
        goto label_6d8288
    case 4
        eax_2 = sub_6dd1e0(eax_2, arg2, &data_8ce7bc, data_1724a6c, arg3)
        
        if (eax_2 == 0)
            char const* const var_1c_6 = "sMaterialFunctionalRenderStateValueFromConstant"
            int32_t var_20_3 = 0x287
            ecx_3 = "pColor"
            goto label_6d82ad
        
        float var_24
        int32_t eax_14 = sub_64b360((*eax_2).d, var_24)
        *(arg4 + 4) = (((((eax_14 u>> 0x18 << 8) + zx.d(eax_14.b)) << 8) + zx.d((eax_14 u>> 8).b))
            << 8) + zx.d((eax_14 u>> 0x10).b)
        goto label_6d8288
    case 5
        int32_t* eax_8 = sub_6dd1e0(eax_2, arg2, &data_8ce7bc, data_1724a70, arg3)
        
        if (eax_8 == 0)
            goto label_6d8288
        
        int32_t ecx = *eax_8
        *(arg4 + 4) = (((((ecx u>> 0x18 << 8) + zx.d(ecx.b)) << 8) + zx.d((ecx u>> 8).b)) << 8)
            + zx.d((ecx u>> 0x10).b)
        goto label_6d8288
    case 6
        goto label_6d829e
