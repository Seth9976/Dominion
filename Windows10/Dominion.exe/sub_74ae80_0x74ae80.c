// 函数: sub_74ae80
// 地址: 0x74ae80
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t edi = arg1
int32_t* ecx = data_1512450
char const* const var_28
int32_t var_24
char const* const var_20
int32_t* result
char* ecx_1

if (ecx[1] == 0x1e)
    int32_t* result_1 = sub_5af880(ecx)
    int32_t esi_1 = 0
    int32_t eax = result_1[2]
    int32_t ebx_1 = eax
    int32_t ecx_2 = eax
    int32_t var_8_1 = ebx_1
    
    if (ebx_1 s> 0)
        int32_t edx_1 = data_151345c
        int32_t* ebx_2 = nullptr
        
        do
            int32_t eax_1 = 0
            
            if (edx_1 s> 0)
                do
                    if ((&data_151245c)[eax_1] == *(ebx_2 + *result_1))
                        int32_t eax_3 = var_8_1 - 1
                        var_8_1 = eax_3
                        sub_74ad60(esi_1, eax_3)
                        edx_1 = data_151345c
                        int32_t eax_4 = edi - 1
                        
                        if (esi_1 s>= eax_4)
                            eax_4 = edi
                        
                        esi_1 -= 1
                        edi = eax_4
                        ebx_2 -= 0x178
                        break
                    
                    eax_1 += 1
                while (eax_1 s< edx_1)
            
            esi_1 += 1
            ebx_2 = &ebx_2[0x5e]
        while (esi_1 s< var_8_1)
        
        ebx_1 = var_8_1
        ecx_2 = result_1[2]
    
    if (edi != 0xffffffff)
        int32_t esi_2 = ecx_2 - 1
        
        while (esi_2 s>= ebx_1)
            if (esi_2 != edi)
                sub_74ad60(esi_2, edi)
            
            esi_2 -= 1
            edi += 1
    
    result = result_1
    
    if (eax == result[2])
        return result
    
    var_20 = "MoveSelectionToPosition"
    var_24 = 0x96b
    var_28 = "C:\x\ax2017\Engine\Editor\UIEditor.cpp"
    ecx_1 = "numElements == layout.numElements"
else
    var_20 = "UIDefGet"
    var_24 = 0x127
    var_28 = "C:\x\ax2017\Engine\UIDef.cpp"
    ecx_1 = "ptr->assetType == ASSET_TYPE_UI"

sub_63b870(result, &data_801800, ecx_1, var_28, var_24, var_20)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
