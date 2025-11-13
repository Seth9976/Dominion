// 函数: sub_673b80
// 地址: 0x673b80
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__chkstk(0x2134)
int32_t __saved_ebp
int32_t var_8 = __security_cookie ^ &__saved_ebp
int32_t ecx = data_c27c24
int32_t var_14 = data_c28c58
uint32_t var_2110 = 0
int32_t var_110c[0x400]
sub_6674e0(&var_2110, &var_110c, ecx, &var_2110, &data_c27c58, var_14)
int32_t eax_3 = 0
int32_t* ebx = nullptr
int32_t* var_211c = nullptr
int32_t var_2114 = 0
int32_t* var_2118
int32_t var_210c[0x400]

if (var_2110 s> 0)
    do
        int32_t esi_1 = var_110c[eax_3]
        
        if (*(sub_64e7a0(esi_1) + 0x171c) == 0)
            var_210c[ebx] = esi_1
            var_211c = ebx + 1
            var_2118 = ebx + 1
            uint32_t eax_5 = sub_64e7a0(esi_1)
            int32_t esi_2 = 0
            int32_t ebx_2 = *(eax_5 + 0x189c)
            
            if (ebx_2 == 0)
                ebx = var_211c
            else
                do
                    sub_673a40(&var_2118, &var_210c, *(eax_5 + (esi_2 << 2) + 0x179c), &var_2118)
                    esi_2 += 1
                while (esi_2 != ebx_2)
                
                ebx = var_2118
                var_211c = ebx
        
        eax_3 = var_2114 + 1
        var_2114 = eax_3
    while (eax_3 s< var_2110)

uint32_t eax_8 = var_2110
char const* const var_1c_2
int32_t var_18_1
char const* const var_14_2
char* ecx_4
char* const edx_2

if (eax_8 s> 0)
    uint32_t edi_2 = 0
    int32_t esi_3 = 0
    
    if (eax_8 s<= 0)
    label_673fcf:
        var_14_2 = "UI2HighestItem"
        var_18_1 = 0x4aa6
        ecx_4 = "Halt"
        edx_2 = &data_801800
    else
        uint32_t ebx_3 = var_2110
        
        do
            eax_8 = sub_64e7a0(var_110c[esi_3])
            
            if (edi_2 == 0 || *(edi_2 + 0x1604) s< *(eax_8 + 0x1604))
                edi_2 = eax_8
            
            esi_3 += 1
        while (esi_3 s< ebx_3)
        
        if (edi_2 == 0)
            goto label_673fcf
        
        int32_t* esi_4 = data_c27c20
        
        if (esi_4 != 0)
            if (esi_4[1] == 0x22)
                int32_t* eax_9 = sub_5af880(esi_4)
                int32_t edx_3 = *(edi_2 + 0x1604)
                var_2118 = eax_9
                uint32_t eax_11 = sub_673ab0(eax_9, edx_3) + *(edi_2 + 0x1604) + 1
                int32_t* eax_12 = sub_69dd00(data_1777548, 0)
                sub_6fb740(eax_12, eax_12, var_2118, eax_11, var_211c)
                void* eax_13 = nullptr
                
                while (true)
                    void* edi_3 = data_c23ba8
                    
                    while (true)
                        if (eax_13 != 0)
                            eax_13 += 0x18d0
                        else
                            eax_13 = edi_3
                        
                        void* ecx_14 = data_c23bac * 0x18d0 + edi_3
                        
                        if (eax_13 u>= ecx_14)
                        label_673db9:
                            uint32_t count = 0x100
                            data_c28c58 = 0
                            int32_t var_10c[0x3c]
                            memset(&var_10c, 0, count)
                            int32_t i_1 = 0
                            int32_t edx_6 = 0
                            int32_t i_2 = 0
                            int32_t var_2128_1 = 0
                            
                            if (var_211c s> 0)
                                eax_8 = eax_11
                                uint32_t ebx_6 = eax_8 * 0x18
                                uint32_t var_212c_1 = ebx_6
                                
                                while (true)
                                    int32_t edx_7 = var_210c[edx_6]
                                    
                                    if (edx_7 == 0)
                                        var_14_2 = "DataArray<struct UI2>::DataArrayGet"
                                        var_18_1 = 0x6c
                                        var_1c_2 = "C:\x\ax2017\Engine\DataArray.h"
                                        edx_2 = &data_801800
                                        ecx_4 = "id != DATAID_NULL"
                                        goto label_673fe8
                                    
                                    eax_8 = zx.d(edx_7.w)
                                    
                                    if (eax_8 u< data_c23bac)
                                        void* ecx_16 = eax_8 * 0x18d0 + edi_3
                                        
                                        if (*(ecx_16 + 0x18c8) == edx_7)
                                            int32_t* eax_14 = sub_64cc90(ecx_16)
                                            int32_t* var_2134_1 = eax_14
                                            int32_t* edi_5 = *var_2118 + ebx_6
                                            int32_t i = 0
                                            edi_5[4] = eax_14[4]
                                            
                                            if (*eax_14 s> 0)
                                                int32_t* edi_6 = nullptr
                                                
                                                do
                                                    int32_t eax_15 = eax_14[2]
                                                    int32_t var_14_4 = *(edi_6 + eax_15 + 8)
                                                    sub_6dce10(eax_15, edi_5, &data_8cae70, 
                                                        *(edi_6 + eax_15))
                                                    eax_14 = var_2134_1
                                                    edi_6 = &edi_6[4]
                                                    i += 1
                                                while (i s< *eax_14)
                                                
                                                i_1 = i_2
                                            
                                            sub_6653b0(edi_5)
                                            int32_t eax_16 = data_c28c58
                                            var_10c[i_1] -= 1
                                            (&data_c27c58)[eax_16] = eax_11 + var_2128_1
                                            data_c28c58 += 1
                                            eax_8 = edi_5[4]
                                            
                                            if (eax_8 != 0)
                                                i_1 += 1
                                                i_2 = i_1
                                                var_10c[i_1] = eax_8
                                            
                                            if (var_10c[i_1] == 0)
                                                while (i_1 s> 0)
                                                    i_1 -= 1
                                                    
                                                    if (var_10c[i_1] != 0)
                                                        break
                                                
                                                i_2 = i_1
                                            
                                            edx_6 = var_2128_1 + 1
                                            ebx_6 = var_212c_1 + 0x18
                                            var_2128_1 = edx_6
                                            var_212c_1 = ebx_6
                                            
                                            if (edx_6 s>= var_211c)
                                                break
                                            
                                            edi_3 = data_c23ba8
                                            continue
                                    
                                    var_14_2 = "DataArray<struct UI2>::DataArrayGet"
                                    var_18_1 = 0x6d
                                    var_1c_2 = "C:\x\ax2017\Engine\DataArray.h"
                                    edx_2 = &data_801800
                                    ecx_4 = "DataArrayTryToGet(id) != NULL"
                                    goto label_673fe8
                            
                            uint32_t eax_17 = sub_666fd0(var_2118, *(edi_2 + 0x1604))
                            
                            if (eax_17 != 0)
                                *(eax_17 + 0x10) += var_2110
                            
                            int32_t* result = sub_64e810(&data_c27c24)
                            data_c27c24 = 0
                            CookieCheckFunction(result)
                            return result
                        
                        while ((*(eax_13 + 0x18c8) & 0xffff0000) == 0)
                            eax_13 += 0x18d0
                            
                            if (eax_13 u>= ecx_14)
                                goto label_673db9
                        
                        if (*(eax_13 + 0x1600) == esi_4)
                            void* ecx_22 = *(eax_13 + 0x1604)
                            
                            if (ecx_22 s>= eax_11)
                                *(eax_13 + 0x1604) = ecx_22 + var_211c
                                break
            else
                var_14_2 = "UI2DefGet"
                var_18_1 = 0xc17
                ecx_4 = "ptr->assetType == ASSET_TYPE_UI2"
            
            edx_2 = &data_801800
        else
            var_14_2 = "UI2DefGet"
            var_18_1 = 0xc16
            edx_2 = "UI2DefGet on null pointer"
            ecx_4 = &data_874470
else
    var_14_2 = "UI2HighestItem"
    var_18_1 = 0x4a98
    ecx_4 = "numItems > 0"
    edx_2 = &data_801800

var_1c_2 = "C:\x\ax2017\Engine\UI2.cpp"
label_673fe8:
sub_63b870(eax_8, edx_2, ecx_4, var_1c_2, var_18_1, var_14_2)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
