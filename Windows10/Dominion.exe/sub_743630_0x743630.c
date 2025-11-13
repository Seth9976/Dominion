// 函数: sub_743630
// 地址: 0x743630
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

HMENU hMenu = CreatePopupMenu()
POINT point
GetCursorPos(&point)
HMENU eax = CreatePopupMenu()
InsertMenuA(eax, 0xffffffff, MF_BYPOSITION, 0x11, "SizeToSource")
int32_t ebx
ebx.b = sub_7435b0()
HMENU eax_2 = CreatePopupMenu()
InsertMenuA(eax_2, 0xffffffff, zx.d(ebx.b) << 3 | 0x400, 0x16, "Lock")
InsertMenuA(hMenu, 0xffffffff, 0x410, eax_2, "Layer")
InsertMenuA(hMenu, 0xffffffff, 0x410, eax, "Transform")
BOOL result
char* ecx_3
result, ecx_3 = TrackPopupMenu(hMenu, TPM_RETURNCMD, point.x, point.y, 0, data_147b084, nullptr)

if (result != 0)
    char const* const var_30_1
    int32_t var_2c_3
    char const* const var_28_1
    char* ecx_4
    
    if (result != 0x11)
        if (result != 0x16)
            var_28_1 = "FabDoRClickMenu"
            var_2c_3 = 0x79c
            var_30_1 = "C:\x\ax2017\Engine\Editor\FabEditor.cpp"
            ecx_4 = "Halt"
        label_7437de:
            sub_63b870(result, &data_801800, ecx_4, var_30_1, var_2c_3, var_28_1)
            
            if (sub_63bc30() == 0)
                sub_63bb00()
                noreturn
            
            breakpoint
        
        result = sub_7435b0()
        int32_t esi_1 = 0
        HMENU ebx_1
        ebx_1.b = result.b
        
        if (data_147ef94 s<= 0)
        label_743746:
            ecx_3.b = 1
            return sub_744790(ecx_3)
        
        while (true)
            int32_t* ecx_5 = data_147df90
            int32_t edi_1 = (&data_147df94)[esi_1]
            
            if (ecx_5[1] != 0x20)
                break
            
            esi_1 += 1
            result = *sub_5af880(ecx_5)
            (edi_1 * 0xe0)[result + 0x39] = ebx_1.b ^ 1
            
            if (esi_1 s>= data_147ef94)
                goto label_743746
        
        goto label_7437c5
    
    int32_t* ecx_6 = data_147df90
    
    if (ecx_6[1] != 0x20)
    label_7437c5:
        var_28_1 = "FabDefGet"
        var_2c_3 = 0xeb
        ecx_4 = "ptr->assetType == ASSET_TYPE_FAB"
        var_30_1 = "C:\x\ax2017\Engine\FabDef.cpp"
        goto label_7437de
    
    result = sub_5af880(ecx_6)
    int32_t esi_2 = data_147ef94
    int32_t edx_2 = 0
    BOOL result_1 = result
    
    if (esi_2 s> 0)
        do
            BOOL* ecx_8 = (&data_147df94)[edx_2] * 0xe0 + *result_1
            result = *ecx_8
            
            if (result == 3 || result == 2 || result == 1)
                *(ecx_8 + 0x28) = 0x3f8000003f800000
                result = 0x3f800000
                ecx_8[0xc] = 0x3f800000
                esi_2 = data_147ef94
            
            edx_2 += 1
        while (edx_2 s< esi_2)

return result
