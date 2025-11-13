// 函数: sub_6670e0
// 地址: 0x6670e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* ecx = data_c27c20
char const* const var_30
int32_t var_2c_1
char const* const var_28_1
uint32_t eax
char* ecx_1
char const* const edx

if (ecx == 0)
    var_28_1 = "UI2DefGet"
    var_2c_1 = 0xc16
    edx = "UI2DefGet on null pointer"
    ecx_1 = &data_874470
    var_30 = "C:\x\ax2017\Engine\UI2.cpp"
else if (ecx[1] == 0x22)
    eax = sub_5af880(ecx)
    void* ecx_2 = *(arg1 + 0x1718)
    uint32_t var_c_1 = eax
    
    if (ecx_2 == 0)
        var_28_1 = "UI2DeleteElement"
        var_2c_1 = 0x3911
        ecx_1 = "el.parent"
        goto label_66733c
    
    int32_t i = 0
    void* var_14 = ecx_2 + 0x179c
    int32_t var_10_1 = 0
    
    if (*(ecx_2 + 0x189c) != 0)
        void* ecx_4
        
        do
            uint32_t eax_1 = sub_64e7a0(*(ecx_2 + 0x179c + (i << 2)))
            ecx_4 = *(arg1 + 0x1718)
            
            if (eax_1 == arg1)
                sub_64c7e0(ecx_4, &var_14)
                break
            
            i += 1
            int32_t i_1 = i
        while (i != *(ecx_4 + 0x189c))
    
    void* ebx_1
    ebx_1.b = arg2
    
    while (true)
        eax = *(arg1 + 0x189c)
        
        if (eax != 0)
            eax -= 1
            *(arg1 + 0x189c) = eax
            int32_t edx_1 = *(arg1 + (eax << 2) + 0x179c)
            
            if (edx_1 != 0)
                eax = zx.d(edx_1.w)
                
                if (eax u< data_c23bac)
                    void* ecx_6 = eax * 0x18d0 + data_c23ba8
                    
                    if (*(ecx_6 + 0x18c8) == edx_1)
                        if (*(ecx_6 + 0x1718) != arg1)
                            var_28_1 = "UI2DeleteElement"
                            var_2c_1 = 0x3932
                            ecx_1 = "child.parent == &el"
                            goto label_66733c
                        
                        if (ebx_1.b == 0 && *(arg1 + 0x171c) == ebx_1.b)
                            edx_1.b = 0
                            sub_6670e0()
                            continue
                        
                        edx_1.b = 1
                        sub_6670e0()
                        continue
                
                var_28_1 = "DataArray<struct UI2>::DataArrayGet"
                var_2c_1 = 0x6d
                var_30 = "C:\x\ax2017\Engine\DataArray.h"
                edx = &data_801800
                ecx_1 = "DataArrayTryToGet(id) != NULL"
                break
        
        if (ebx_1.b != 0 || *(arg1 + 0x171c) != ebx_1.b)
        label_6672d7:
            sub_67e6e0(arg1)
            uint32_t result = zx.d(*(arg1 + 0x18c8))
            int32_t ecx_13 = data_c23bb4
            data_c23bb4 = result
            *(arg1 + 0x18c8) = ecx_13
            data_c23bb8 -= 1
            return result
        
        int32_t edi_1 = *(arg1 + 0x1604)
        
        if (edi_1 s>= 0)
            uint32_t eax_2 = sub_666fd0(var_c_1, edi_1)
            
            if (eax_2 != 0)
                *(eax_2 + 0x10) -= 1
            
            int32_t* eax_3 = sub_69dd00(data_1777548, 0)
            sub_6fb870(eax_3, eax_3, var_c_1, edi_1, &data_8cae70)
            eax = 0
            
            while (true)
                uint32_t edx_4 = data_c23ba8
                int32_t ecx_15
                
                while (true)
                    if (eax != 0)
                        eax += 0x18d0
                    else
                        eax = edx_4
                    
                    int32_t ecx_11 = data_c23bac * 0x18d0 + edx_4
                    
                    if (eax u>= ecx_11)
                        goto label_6672d7
                    
                    while ((*(eax + 0x18c8) & 0xffff0000) == 0)
                        eax += 0x18d0
                        
                        if (eax u>= ecx_11)
                            goto label_6672d7
                    
                    if (*(eax + 0x1600) == *(arg1 + 0x1600))
                        ecx_15 = *(eax + 0x1604)
                        
                        if (ecx_15 s> *(arg1 + 0x1604))
                            break
                
                if (ecx_15 s<= 0)
                    break
                
                *(eax + 0x1604) = ecx_15 - 1
            
            var_28_1 = "UI2DeleteElement"
            var_2c_1 = 0x3943
            ecx_1 = "ui->attribItemIndex > 0"
        else
            var_28_1 = "UI2DeleteElement"
            var_2c_1 = 0x393c
            ecx_1 = "el.attribItemIndex >= 0"
        
        goto label_66733c
else
    var_28_1 = "UI2DefGet"
    var_2c_1 = 0xc17
    ecx_1 = "ptr->assetType == ASSET_TYPE_UI2"
label_66733c:
    edx = &data_801800
    var_30 = "C:\x\ax2017\Engine\UI2.cpp"

sub_63b870(eax, edx, ecx_1, var_30, var_2c_1, var_28_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
