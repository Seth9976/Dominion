// 函数: sub_4ec1a0
// 地址: 0x4ec1a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* ecx
int32_t edx
ecx, edx = __chkstk(0x2b00)
int32_t __saved_ebp
int32_t var_c = __security_cookie ^ &__saved_ebp
void* eax_3 = arg2 * 0x84
void* ebx = ecx
void* var_2ae4 = ebx
int32_t edx_1 = 0
void var_560
__builtin_memset(&var_560, 0, 0x22c)
int32_t ecx_1 = 0
int32_t var_2ae8 = 0
int32_t var_2af4 = 0
int32_t var_2afc = 0
int32_t var_18_2
char const* const var_14_2
void* result
char* ecx_9
int32_t var_11e0[0x295]

if (*(ebx + 0x1520) s<= 0)
label_4ec38d:
    int32_t ecx_7 = 0x3e8
    void* eax_17 = &var_560
    int32_t var_2ae4_1 = 0x3e8
    void* var_2af0_1 = &var_560
    
    while (true)
        int32_t edx_6 = *eax_17
        int32_t var_2ae0[0x320]
        
        if (edx_6 != 0)
            int32_t esi_6 = 0
            result = edx * 0x168c + ecx_7
            int32_t i = *(ebx + (result << 2) + 0x16328)
            
            if (i == 0)
            label_4ec641:
                var_14_2 = "ShufflePlayer"
                var_18_2 = 0x2ab
                ecx_9 = "numList == pileCount[i - START_PLAYER_PILES]"
                break
            
            int32_t ecx_8 = arg2
            int32_t var_1e60[0x258]
            char var_330[0x310]
            int32_t edi_4
            
            do
                void* eax_21 = i * 0x64 + 0x1a48 + ebx
                char eax_22 = (*(eax_21 + (ecx_8 << 2) + 0x3c)).b
                
                if ((eax_22 & 2) == 0)
                    if (esi_6 u>= 0x320)
                        ___report_rangecheckfailure()
                        noreturn
                    
                    var_330[esi_6] = 0
                    uint32_t eax_23 = sub_63ed10(&data_1777938, var_2ae8)
                    edi_4 = var_2ae8 - 1
                    i = var_11e0[eax_23]
                    var_2ae8 = edi_4
                    var_11e0[eax_23] = var_11e0[edi_4]
                    ecx_8 = arg2
                else if ((eax_22 & 4) == 0)
                    if (esi_6 u>= 0x320)
                        ___report_rangecheckfailure()
                        noreturn
                    
                    edi_4 = var_2ae8
                    var_330[esi_6] = 0
                else
                    edi_4 = var_2ae8
                    var_330[esi_6] = 1
                
                result = &var_1e60[esi_6]
                esi_6 += 1
                *result = i
                i = *(eax_21 + 0x5c)
            while (i != 0)
            
            if (esi_6 != edx_6)
                goto label_4ec641
            
            void* eax_26 = &var_2ae0[var_2af4]
            sub_4ebf20(eax_26, &var_330, &var_1e60, eax_26, esi_6)
            ecx_7 = var_2ae4_1
            var_2af4 += esi_6
            eax_17 = var_2af0_1
            var_2ae8 = edi_4
        
        ecx_7 += 1
        eax_17 += 4
        var_2ae4_1 = ecx_7
        var_2af0_1 = eax_17
        
        if (ecx_7 s>= 0x473)
            void* esi_7 = &var_560
            int32_t i_4 = 0x8b
            int32_t ecx_12 = 0
            int32_t i_5 = 0x8b
            void* edi_8 = edx * 0x5a30 + 0x172c8 + ebx
            int32_t i_1
            
            do
                int32_t j_1 = *esi_7
                
                if (j_1 s> 0)
                    int32_t j
                    
                    do
                        int32_t eax_27 = var_2ae0[ecx_12]
                        ecx_12 += 1
                        *(eax_27 * 0x64 + ebx + 0x1aa4) = 0
                        j = j_1
                        j_1 -= 1
                    while (j != 1)
                    i_4 = i_5
                
                *edi_8 = 0
                esi_7 += 4
                edi_8 += 4
                i_1 = i_4
                i_4 -= 1
                i_5 = i_4
            while (i_1 != 1)
            int32_t edx_10 = 0
            result = &var_560
            int32_t i_2 = 0x3e8
            int32_t var_2af0_2 = 0
            int32_t i_3 = 0x3e8
            void* result_1 = &var_560
            
            do
                int32_t esi_8 = *result
                int32_t esi_9 = esi_8 - 1
                
                if (esi_8 - 1 s>= 0)
                    void* eax_32 = ebx + ((edx * 0x168c + 0x58ca + i_2) << 2)
                    void* edi_9 = &var_2ae0[esi_9 + edx_10]
                    int32_t temp5_1
                    
                    do
                        int32_t edx_11 = *edi_9
                        edi_9 -= 4
                        int32_t ecx_13 = edx_11 * 0x64
                        temp5_1 = esi_9
                        esi_9 -= 1
                        *(ecx_13 + ebx + 0x1a50) = i_3
                        *(ecx_13 + ebx + 0x1a68) = 0
                        *(ecx_13 + ebx + 0x1aa4) = *eax_32
                        *eax_32 = edx_11
                    while (temp5_1 - 1 s>= 0)
                    i_2 = i_3
                    result = result_1
                    edx_10 = var_2af0_2
                
                edx_10 += *result
                i_2 += 1
                result += 4
                var_2af0_2 = edx_10
                i_3 = i_2
                result_1 = result
            while (i_2 s< 0x473)
            
            if (var_2ae8 == 0)
                CookieCheckFunction(result)
                return result
            
            var_14_2 = "ShufflePlayer"
            var_18_2 = 0x2d7
            ecx_9 = "numAvail == 0"
            break
else
    int32_t edi_1 = edx
    void* esi = ebx + 0x1a48
    void* var_2aec_1 = esi
    
    while (true)
        if (*(esi + 0x28) == edi_1)
            if (*(eax_3 + 0x1777648) s> 0)
                int32_t eax_5 = *(esi + 8)
                
                if ((eax_5 == 0x3eb || eax_5 == 0x3ec)
                        && *(edi_1 * 0x5a30 + ebx + 0x172d4) != ecx_1)
                    int32_t eax_7 = *(esi + 4)
                    
                    if (eax_7 != 0x1309)
                        if ((*(sub_571b30(eax_7, 0x18) + 0x9c) & 0x1000) != 0)
                            edx_1 = var_2ae8
                            ecx_1 = var_2afc
                        else
                            int32_t edi_2 = data_177793c
                            int32_t ebx_1 = data_1777938
                            int32_t eax_10
                            int32_t edx_2
                            eax_10, edx_2 = __allmul(ebx_1, edi_2, 0x4c957f2d, 0x5851f42d)
                            bool c_1 = eax_10 + data_1777940 u< eax_10
                            data_1777938 = eax_10 + data_1777940
                            data_177793c = adc.d(edx_2, data_1777944, c_1)
                            ebx = var_2ae4
                            ecx_1 = var_2afc
                            edx_1 = var_2ae8
                            esi = var_2aec_1
                            
                            if (ror.d(edi_2 u>> 0xd ^ (ebx_1 u>> 0x1b | edi_2 << 5), 
                                    (edi_2 u>> 0x1b).b) u% 0x64 s< *(eax_3 + 0x1777648))
                                *(esi + (arg2 << 2) + 0x3c) = 0
            
            void* edi_3 = *(esi + 8)
            result = edi_3 - 0x3e9
            
            if (result u<= 0x89)
                if (*(esi + (arg2 << 2) + 0x3c) == 0)
                    var_11e0[edx_1] = ecx_1
                    edx_1 += 1
                    var_2ae8 = edx_1
                
                int32_t var_1500[0xc8]
                var_1500[edi_3] += 1
            else if (edi_3 != 0x474)
                var_14_2 = "ShufflePlayer"
                var_18_2 = 0x27f
                ecx_9 = "Halt"
                break
            
            edi_1 = edx
        
        ecx_1 += 1
        esi += 0x64
        var_2afc = ecx_1
        var_2aec_1 = esi
        
        if (ecx_1 s>= *(ebx + 0x1520))
            goto label_4ec38d
sub_63b870(result, &data_801800, ecx_9, "C:\x\ax2017\Jams\Dominion\code\DomAIMCTS.cpp", var_18_2, 
    var_14_2)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
