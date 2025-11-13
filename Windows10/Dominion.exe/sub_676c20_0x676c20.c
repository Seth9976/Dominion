// 函数: sub_676c20
// 地址: 0x676c20
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* ecx = data_c27c20
char const* const var_28_2
int32_t var_24
char const* const var_20_1
int32_t* eax
char* ecx_1
char const* const edx_1

if (ecx == 0)
    var_20_1 = "UI2DefGet"
    var_24 = 0xc16
    edx_1 = "UI2DefGet on null pointer"
    ecx_1 = &data_874470
    var_28_2 = "C:\x\ax2017\Engine\UI2.cpp"
else if (ecx[1] == 0x22)
    int32_t* eax_1 = sub_5af880(ecx)
    void* ecx_3 = *(sub_665600(arg2) + 0x1718)
    
    if (*(ecx_3 + 0x1718) != 0)
        void* eax_3 = sub_64cc90(ecx_3)
        *(eax_3 + 0x10) += 1
    
    void* i = data_c23ba8
    void* eax_5 = data_c23bac * 0x18d0 + i
    
    if (i u>= eax_5)
    label_676cc6:
        i = 0xffffffff
    else
        while ((*(i + 0x18c8) & 0xffff0000) == 0)
            i += 0x18d0
            
            if (i u>= eax_5)
                goto label_676cc6
    
    void* i_1 = i
    
    for (; i != 0xffffffff; i = i_1)
        if (*(i + 0x1600) == data_c27c20)
            int32_t eax_7 = *(i + 0x1604)
            
            if (eax_7 s>= arg2)
                *(i + 0x1604) = eax_7 + 1
        
        sub_67d670(&data_c23ba8, &i_1)
    
    int32_t edx_2 = data_c28c58
    int32_t ecx_4 = 0
    
    if (edx_2 s> 0)
        do
            int32_t eax_9 = (&data_c27c58)[ecx_4]
            
            if (eax_9 s>= arg2)
                (&data_c27c58)[ecx_4] = eax_9 + 1
                edx_2 = data_c28c58
            
            ecx_4 += 1
        while (ecx_4 s< edx_2)
    
    int32_t* eax_11 = sub_69dd00(data_1777548, 0)
    sub_6fb740(eax_11, eax_11, eax_1, arg2, 1)
    int32_t eax_12 = *eax_1
    char const* const var_28_1 = "newGroup"
    int32_t* esi_2 = eax_12 + arg2 * 0x18
    int32_t var_30_1 = 6
    int32_t* edi_1 = arg1
    int32_t* var_38_1 = edi_1
    eax = sub_6dd1e0(
        sub_6dce10(
            sub_6dce10(sub_6dce10(eax_12, esi_2, &data_8cae70, 0x64), esi_2, &data_8cae70, 0x66), 
            esi_2, &data_8cae70, 0x76), 
        esi_2, &data_8cae70, data_1777578, 0x76)
    int32_t edx_8 = 0xc
    
    while (true)
        if (*eax != *edi_1)
            var_20_1 = "AssignPropertyRect"
            var_24 = 0x3a16
            ecx_1 = "memcmp(val, &value, sizeof(value)) == 0"
            goto label_676e41
        
        eax = &eax[1]
        edi_1 = &edi_1[1]
        int32_t temp0_1 = edx_8
        edx_8 -= 4
        
        if (temp0_1 u< 4)
            int32_t edx_9 = data_c27c24
            
            if (edx_9 != 0)
                eax = zx.d(edx_9.w)
                
                if (eax u< data_c23bac)
                    void* esi_4 = eax * 0x18d0 + data_c23ba8
                    
                    if (*(esi_4 + 0x18c8) == edx_9)
                        void* result = sub_64ec00(esi_4)
                        int32_t ecx_10 = *(esi_4 + 0x1600)
                        *(result + 0x1604) = arg2
                        *(result + 0x1600) = ecx_10
                        return result
                
                var_20_1 = "DataArray<struct UI2>::DataArrayGet"
                var_24 = 0x6d
                var_28_2 = "C:\x\ax2017\Engine\DataArray.h"
                edx_1 = &data_801800
                ecx_1 = "DataArrayTryToGet(id) != NULL"
            else
                var_20_1 = "DataArray<struct UI2>::DataArrayGet"
                var_24 = 0x6c
                var_28_2 = "C:\x\ax2017\Engine\DataArray.h"
                edx_1 = &data_801800
                ecx_1 = "id != DATAID_NULL"
            
            break
else
    var_20_1 = "UI2DefGet"
    var_24 = 0xc17
    ecx_1 = "ptr->assetType == ASSET_TYPE_UI2"
label_676e41:
    edx_1 = &data_801800
    var_28_2 = "C:\x\ax2017\Engine\UI2.cpp"

sub_63b870(eax, edx_1, ecx_1, var_28_2, var_24, var_20_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
