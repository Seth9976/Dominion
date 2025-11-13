// 函数: sub_4f02f0
// 地址: 0x4f02f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* ecx
void* edx
ecx, edx = __chkstk(0x25a4)
int32_t __saved_ebp
int32_t var_8 = __security_cookie ^ &__saved_ebp
int32_t edi = 0
uint32_t eax_2 = *(arg1 + 0xb8)
int32_t var_2590 = 0
int32_t var_18_1
char const* const var_14_1
char* ecx_2

if (eax_2 == *(edx + 0x50))
    eax_2 = *(edx + 4)
    
    if (*(arg1 + 0xbc) == eax_2)
        uint32_t eax_41
        
        if (eax_2 == 5 || eax_2 == 9)
            eax_41 = **(arg2 + 0xc)
            *(edx + 0x6c) = eax_41
            CookieCheckFunction(eax_41)
            return eax_41
        
        void* ecx_3 = edx
        int32_t i_1 = *(ecx_3 + 0x6c)
        int32_t var_c8c[0x31c]
        
        if (i_1 s> 0)
            int32_t esi_1 = *(ecx_3 + 0x40)
            void* ecx_4 = ecx_3 + 0x70
            int32_t i
            
            do
                int32_t eax_4
                
                if (esi_1 == 2)
                    eax_4 = *(*ecx_4 * 0x64 + ecx + 0x1a50)
                
                if (esi_1 != 2 || eax_4 == 0x3ea || eax_4 == 0x3eb)
                    var_c8c[edi] = *ecx_4
                    edi += 1
                
                ecx_4 += 4
                i = i_1
                i_1 -= 1
            while (i != 1)
            ecx_3 = edx
            var_2590 = edi
        
        void* edx_1 = arg2
        
        if (*(ecx_3 + 0x40) == 2 && *(edx_1 + 0x10) s< *(ecx_3 + 0x5c))
            *(ecx_3 + 0x40) = 0x64
        
        eax_41 = *(edx_1 + 0x10)
        *(ecx_3 + 0x6c) = eax_41
        int32_t var_25a8_1 = 0
        
        if (eax_41 s<= 0)
            CookieCheckFunction(eax_41)
            return eax_41
        
        eax_2 = 0
        uint32_t var_2598_1 = 0
        void* var_2594_1 = ecx_3 + 0x70
        
        while (true)
            int32_t esi_8 = 0
            int32_t edi_1 = 0xffffffff
            
            if (*(ecx_3 + 0xd10) != 0)
                if (eax_2 s>= 0x30)
                    var_14_1 = "ExtractAction"
                    var_18_1 = 0xcc1
                    ecx_2 = "i < MAX_WHERE_RESULTS"
                    break
                
                *(var_2594_1 + 0xc90) = *(var_2598_1 + *(edx_1 + 0xc) + 8)
                edx_1 = arg2
            
            eax_2 = *(ecx_3 + 4) - 4
            
            switch (eax_2)
                case 0, 3, 4
                    *var_2594_1 = *(var_2598_1 + *(edx_1 + 0xc))
                case 2
                    eax_2 = 0
                    uint32_t var_25a0_1 = 0
                    
                    if (var_2590 s<= 0)
                    label_4f06f2:
                        var_14_1 = "ExtractAction"
                        var_18_1 = 0xcf1
                        ecx_2 = "j < n"
                        break
                    
                    void* edi_2 = arg2
                    void* edx_4 = ecx_3 + 0x70
                    void* var_25a4_1 = edx_4
                    
                    while (true)
                        uint32_t eax_12 =
                            sub_5915b0(eax_2, edx_4, ecx, *(ecx_3 + (eax_2 << 2) + 0x70))
                        edx_4 = var_2598_1 + *(edi_2 + 0xc)
                        
                        if (*edx_4 == eax_12)
                            void* esi_6 = *(var_25a4_1 + (var_25a0_1 << 2))
                            
                            if (*(edx_4 + 4) == *((esi_6 u>> 6 & 0xfff) * 0x64 + ecx + 0x1a4c))
                                int32_t var_258c[0x320]
                                uint32_t eax_19
                                eax_19, edx_4 =
                                    sub_57ee90(&var_258c, *(edx + 0x4c), ecx, esi_6, &var_258c)
                                uint32_t edi_3 = eax_19
                                
                                if (edi_3 s<= 0)
                                    uint32_t eax_20
                                    eax_20, edx_4 = sub_5915b0(eax_19, edx_4, ecx, esi_6)
                                    
                                    if (eax_20 == 0x1121)
                                        uint32_t eax_21 = sub_5916b0(esi_6)
                                        edx_4 = eax_21
                                        edi_3 = sub_590930(eax_21, edx_4, ecx, &var_258c)
                                
                                if (edi_3 != *(arg2 + 0x18))
                                    edi_2 = arg2
                                else
                                    int32_t esi_7 = *(arg2 + 0x14)
                                    int32_t ecx_11 = 0
                                    int32_t var_190c[0x320]
                                    
                                    if (edi_3 s> 0)
                                        do
                                            var_190c[ecx_11] =
                                                *(var_258c[ecx_11] * 0x64 + ecx + 0x1a4c)
                                            ecx_11 += 1
                                        while (ecx_11 s< edi_3)
                                    
                                    int32_t eax_27 = edi_3 << 2 s>> 2
                                    edx_4 = sub_4f5990(eax_27, &var_190c[edi_3], &var_190c, eax_27, 
                                        var_25a4_1)
                                    int32_t eax_28 = 0
                                    
                                    if (edi_3 s<= 0)
                                    label_4f05b4:
                                        *var_2594_1 = var_c8c[var_25a0_1]
                                        int32_t eax_31 = var_2590 - 1
                                        var_2590 = eax_31
                                        var_c8c[var_25a0_1] = var_c8c[eax_31]
                                        break
                                    
                                    while (var_190c[eax_28] == *(esi_7 + (eax_28 << 2)))
                                        eax_28 += 1
                                        
                                        if (eax_28 s>= edi_3)
                                            goto label_4f05b4
                                    
                                    edi_2 = arg2
                        
                        eax_2 = var_25a0_1 + 1
                        var_25a0_1 = eax_2
                        
                        if (eax_2 s>= var_2590)
                            goto label_4f06f2
                        
                        ecx_3 = edx
                    
                    ecx_3 = edx
                    edx_1 = arg2
                default
                    int32_t ecx_16 = 0
                    
                    if (var_2590 s> 0)
                        do
                            eax_2 = var_c8c[ecx_16] * 0x64
                            int32_t edx_12 = var_c8c[ecx_16]
                            
                            if (*(eax_2 + ecx + 0x1a4c) == *(var_2598_1 + *(edx_1 + 0xc))
                                    && edx_12 s> esi_8)
                                esi_8 = edx_12
                                edi_1 = ecx_16
                            
                            ecx_16 += 1
                        while (ecx_16 s< var_2590)
                    
                    if (var_2590 s<= 0 || edi_1 == 0xffffffff)
                        var_14_1 = "ExtractAction"
                        var_18_1 = 0xd05
                        ecx_2 = "best_j != -1"
                        break
                    
                    int32_t edx_14 = var_2590 - 1
                    var_2590 = edx_14
                    *var_2594_1 = var_c8c[edi_1]
                    var_c8c[edi_1] = var_c8c[edx_14]
                    ecx_3 = edx
                    edx_1 = arg2
            
            int32_t esi_10 = var_25a8_1 + 1
            var_2594_1 += 4
            eax_2 = var_2598_1 + 0xc
            var_25a8_1 = esi_10
            var_2598_1 = eax_2
            
            if (esi_10 s>= *(ecx_3 + 0x6c))
                CookieCheckFunction(eax_2)
                return eax_2
    else
        var_14_1 = "ExtractAction"
        var_18_1 = 0xc9e
        ecx_2 = "node->choice == act.choice"
else
    var_14_1 = "ExtractAction"
    var_18_1 = 0xc9d
    ecx_2 = "node->who == act.controlWho"

sub_63b870(eax_2, &data_801800, ecx_2, "C:\x\ax2017\Jams\Dominion\code\DomAIMCTS.cpp", var_18_1, 
    var_14_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
