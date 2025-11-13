// 函数: sub_51bd80
// 地址: 0x51bd80
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$?CreateAllocatedNodeData@ResourceManager@details@Concurrency@@QAEPAUSchedulerNode@23@XZ
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_44 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** j = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
char const* const var_50
int32_t var_4c
char const* const var_48
char* ecx_28

if (data_1597dd0 == 0)
    int32_t* edi_1 = sub_64c020(0x1000)
    int32_t edx_1 = 0x3ff
    data_1597dd0 = edi_1
    void* esi_1 = &data_93e508
    data_1597dd4 = 0x3ff
    
    while (true)
        int32_t i = *esi_1
        struct _EXCEPTION_REGISTRATION_RECORD*** ebx_1 = (edx_1 & (i s>> 4 | i)) << 2
        j = *(ebx_1 + edi_1)
        
        if (j == 0)
        label_51be10:
            int32_t** eax_7 = sub_64bfd0(0xc)
            eax_7[3] += 1
            
            if (*eax_7 == 0)
                sub_64be70(eax_7)
            
            int32_t* ecx_2 = *eax_7
            *eax_7 = *ecx_2
            *ecx_2 = *esi_1
            ecx_2[1] = esi_1
            ecx_2[2] = *(data_1597dd0 + ebx_1)
            j = data_1597dd0
            *(j + ebx_1) = ecx_2
            data_1597dd8 += 1
        else
            while (i != *j)
                j = j[2]
                
                if (j == 0)
                    goto label_51be10
            
            j[1] = esi_1
        
        esi_1 += 0x9c0
        
        if (esi_1 == 0xa0d808)
            break
        
        edx_1 = data_1597dd4
        edi_1 = data_1597dd0
    
    if (data_1597de8 == 0)
        int32_t* edi_3 = sub_64c020(0x1000)
        int32_t edx_3 = 0x3ff
        data_1597de8 = edi_3
        void* const esi_2 = &data_790bc0
        data_1597dec = 0x3ff
        
        while (true)
            int32_t i_1 = *esi_2
            struct _EXCEPTION_REGISTRATION_RECORD*** ebx_2 = (edx_3 & (i_1 s>> 4 | i_1)) << 2
            j = *(ebx_2 + edi_3)
            
            if (j == 0)
            label_51bed0:
                int32_t** eax_16 = sub_64bfd0(0xc)
                eax_16[3] += 1
                
                if (*eax_16 == 0)
                    sub_64be70(eax_16)
                
                int32_t* ecx_4 = *eax_16
                *eax_16 = *ecx_4
                *ecx_4 = *esi_2
                ecx_4[1] = esi_2
                ecx_4[2] = *(data_1597de8 + ebx_2)
                j = data_1597de8
                *(j + ebx_2) = ecx_4
                data_1597df0 += 1
            else
                while (i_1 != *j)
                    j = j[2]
                    
                    if (j == 0)
                        goto label_51bed0
                
                j[1] = esi_2
            
            esi_2 += 0xcc
            
            if (esi_2 == &data_7b075c)
                break
            
            edx_3 = data_1597dec
            edi_3 = data_1597de8
        
        if (data_1597df4 == 0)
            int32_t* edi_5 = sub_64c020(0x1000)
            int32_t edx_5 = 0x3ff
            data_1597df4 = edi_5
            void* const esi_3 = &data_7b0760
            data_1597df8 = 0x3ff
            
            while (true)
                int32_t i_2 = *esi_3
                struct _EXCEPTION_REGISTRATION_RECORD*** ebx_3 = (edx_5 & (i_2 s>> 4 | i_2)) << 2
                j = *(ebx_3 + edi_5)
                
                if (j == 0)
                label_51bf90:
                    int32_t** eax_25 = sub_64bfd0(0xc)
                    eax_25[3] += 1
                    
                    if (*eax_25 == 0)
                        sub_64be70(eax_25)
                    
                    int32_t* ecx_6 = *eax_25
                    *eax_25 = *ecx_6
                    *ecx_6 = *esi_3
                    ecx_6[1] = esi_3
                    ecx_6[2] = *(data_1597df4 + ebx_3)
                    j = data_1597df4
                    *(j + ebx_3) = ecx_6
                    data_1597dfc += 1
                else
                    while (i_2 != *j)
                        j = j[2]
                        
                        if (j == 0)
                            goto label_51bf90
                    
                    j[1] = esi_3
                
                esi_3 += 0xcc
                
                if (esi_3 == &data_7b4e4c)
                    break
                
                edx_5 = data_1597df8
                edi_5 = data_1597df4
            
            if (data_1597e18 == 0)
                j = sub_64c020(0x800)
                void* const i_3 = &data_78e350
                data_1597e18 = j
                data_1597e1c = 0x1ff
                void* const i_10 = &data_78e350
                
                do
                    struct _EXCEPTION_REGISTRATION_RECORD** j_2 = nullptr
                    void* ebx_4 = i_3 + 0xc
                    
                    do
                        int32_t k = *ebx_4
                        
                        if (k == 0)
                            break
                        
                        int32_t esi_7 = (k s>> 4 | k) & data_1597e1c
                        int32_t* eax_31 = *(data_1597e18 + (esi_7 << 2))
                        
                        if (eax_31 == 0)
                        label_51c067:
                            int32_t* eax_32 = sub_64bfd0(0xc)
                            eax_32[3] += 1
                            
                            if (*eax_32 == 0)
                                sub_64be70(eax_32)
                            
                            int32_t* ecx_8 = *eax_32
                            i_3 = i_10
                            *eax_32 = *ecx_8
                            *ecx_8 = *ebx_4
                            ecx_8[1] = *i_3
                            ecx_8[2] = *(data_1597e18 + (esi_7 << 2))
                            *(data_1597e18 + (esi_7 << 2)) = ecx_8
                            data_1597e20 += 1
                        else
                            while (k != *eax_31)
                                eax_31 = eax_31[2]
                                
                                if (eax_31 == 0)
                                    goto label_51c067
                            
                            eax_31[1] = *i_3
                        
                        ebx_4 += 4
                        j = j_2 + 1
                        j_2 = j
                    while (j s< 0x10)
                    
                    i_3 += 0x4c
                    i_10 = i_3
                while (i_3 != 0x790198)
                
                if (data_1597e0c == 0)
                    j = sub_64c020(0x1000)
                    bool cond:0_1 = data_1597e00 == 0
                    data_1597e0c = j
                    data_1597e10 = 0x3ff
                    
                    if (cond:0_1)
                        void* const ebx_5 = &data_7b4e50
                        data_1597e00 = sub_64c020(0x1000)
                        data_1597e04 = 0x3ff
                        void* const var_18_1 = &data_7b4e50
                        
                        while (true)
                            int32_t i_4 = *ebx_5
                            int32_t edi_11 = (i_4 s>> 4 | i_4) & data_1597e10
                            j = *(data_1597e0c + (edi_11 << 2))
                            struct _EXCEPTION_REGISTRATION_RECORD** j_3 = j
                            void* var_14_1
                            void* esi_8
                            
                            if (j_3 == 0)
                            label_51c16e:
                                int32_t var_28_1 = 0
                                int32_t var_24_1 = 0
                                int32_t var_20_1 = 0
                                int32_t var_8_1 = 0
                                
                                if (j == 0)
                                label_51c19a:
                                    int32_t* eax_42 = sub_64bfd0(0x14)
                                    eax_42[3] += 1
                                    
                                    if (*eax_42 == 0)
                                        sub_64be70(eax_42)
                                    
                                    int32_t* ecx_11 = *eax_42
                                    *eax_42 = *ecx_11
                                    *ecx_11 = *ebx_5
                                    *(ecx_11 + 4) = var_28_1.q
                                    ecx_11[3] = 0
                                    ecx_11[4] = *(data_1597e0c + (edi_11 << 2))
                                    *(data_1597e0c + (edi_11 << 2)) = ecx_11
                                    data_1597e14 += 1
                                else
                                    while (i_4 != *j)
                                        j = j[4]
                                        
                                        if (j == 0)
                                            goto label_51c19a
                                    
                                    *(j + 4) = var_28_1.q
                                    j[3] = 0
                                
                                int32_t var_8_2 = 0xffffffff
                                int32_t i_5 = *ebx_5
                                j = *(data_1597e0c + (((i_5 s>> 4 | i_5) & data_1597e10) << 2))
                                
                                if (j == 0)
                                label_51c215:
                                    esi_8 = nullptr
                                else
                                    while (i_5 != *j)
                                        j = j[4]
                                        
                                        if (j == 0)
                                            goto label_51c215
                                    
                                    esi_8 = &j[1]
                                
                                var_14_1 = esi_8
                            else
                                while (i_4 != *j_3)
                                    j_3 = j_3[4]
                                    
                                    if (j_3 == 0)
                                        goto label_51c16e
                                
                                esi_8 = &j_3[1]
                                var_14_1 = esi_8
                                
                                if (esi_8 == 0)
                                    goto label_51c16e
                            
                            if (*(esi_8 + 8) == 0)
                                j = sub_64c020(0x40)
                                *esi_8 = j
                                *(esi_8 + 4) = 0
                                *(esi_8 + 8) = 0x10
                            
                            struct _EXCEPTION_REGISTRATION_RECORD** j_1 = nullptr
                            void* ebx_6 = ebx_5 + 4
                            
                            while (true)
                                int32_t ecx_16 = *ebx_6
                                
                                if (ecx_16 != 0)
                                    int32_t edx_7 = *(esi_8 + 4)
                                    
                                    if (edx_7 s>= *(esi_8 + 8))
                                        var_48 = "XArray<enum DomCardCategory>::Append"
                                        var_4c = 0x96
                                        var_50 = "C:\x\ax2017\Engine\xArray.h"
                                        ecx_28 = "mSize < mSizeReserved"
                                        goto label_51c4fc
                                    
                                    *(*esi_8 + (edx_7 << 2)) = ecx_16
                                    *(esi_8 + 4) += 1
                                    int32_t i_8 = *ebx_6
                                    int32_t edi_12 = data_1597e04
                                    int32_t* eax_52 =
                                        *(data_1597e00 + ((edi_12 & (i_8 s>> 4 | i_8)) << 2))
                                    void* esi_10
                                    
                                    if (eax_52 == 0)
                                    label_51c2b6:
                                        int32_t var_34_1 = 0
                                        int32_t var_30_1 = 0
                                        int32_t var_2c_1 = 0
                                        int32_t var_8_3 = 2
                                        int32_t i_6 = *ebx_6
                                        int32_t edi_13 = edi_12 & (i_6 s>> 4 | i_6)
                                        int32_t* eax_57 = *(data_1597e00 + (edi_13 << 2))
                                        
                                        if (eax_57 == 0)
                                        label_51c2f9:
                                            int32_t* eax_58 = sub_64bfd0(0x14)
                                            eax_58[3] += 1
                                            
                                            if (*eax_58 == 0)
                                                sub_64be70(eax_58)
                                            
                                            int32_t* ecx_22 = *eax_58
                                            *eax_58 = *ecx_22
                                            *ecx_22 = *ebx_6
                                            *(ecx_22 + 4) = var_34_1.q
                                            ecx_22[3] = 0
                                            ecx_22[4] = *(data_1597e00 + (edi_13 << 2))
                                            *(data_1597e00 + (edi_13 << 2)) = ecx_22
                                            data_1597e08 += 1
                                        else
                                            while (i_6 != *eax_57)
                                                eax_57 = eax_57[4]
                                                
                                                if (eax_57 == 0)
                                                    goto label_51c2f9
                                            
                                            *(eax_57 + 4) = var_34_1.q
                                            eax_57[3] = 0
                                        
                                        int32_t var_8_4 = 0xffffffff
                                        int32_t i_7 = *ebx_6
                                        int32_t* eax_65 = *(data_1597e00
                                            + (((i_7 s>> 4 | i_7) & data_1597e04) << 2))
                                        
                                        if (eax_65 == 0)
                                        label_51c374:
                                            esi_10 = nullptr
                                        else
                                            while (i_7 != *eax_65)
                                                eax_65 = eax_65[4]
                                                
                                                if (eax_65 == 0)
                                                    goto label_51c374
                                            
                                            esi_10 = &eax_65[1]
                                    else
                                        while (i_8 != *eax_52)
                                            eax_52 = eax_52[4]
                                            
                                            if (eax_52 == 0)
                                                goto label_51c2b6
                                        
                                        esi_10 = &eax_52[1]
                                        
                                        if (esi_10 == 0)
                                            goto label_51c2b6
                                    
                                    j = *(esi_10 + 8)
                                    
                                    if (j == 0)
                                        *esi_10 = sub_64c020(0x400)
                                        j = 0x100
                                        *(esi_10 + 4) = 0
                                        *(esi_10 + 8) = 0x100
                                    
                                    int32_t edx_8 = *(esi_10 + 4)
                                    
                                    if (edx_8 s>= j)
                                        var_48 = "XArray<enum DomCardEnum>::Append"
                                        var_4c = 0x96
                                        var_50 = "C:\x\ax2017\Engine\xArray.h"
                                        ecx_28 = "mSize < mSizeReserved"
                                        goto label_51c4fc
                                    
                                    ebx_6 += 4
                                    *(*esi_10 + (edx_8 << 2)) = *var_18_1
                                    *(esi_10 + 4) += 1
                                    j = j_1 + 1
                                    esi_8 = var_14_1
                                    j_1 = j
                                    
                                    if (j s< 0x10)
                                        continue
                                
                                ebx_5 = var_18_1 + 0x44
                                var_18_1 = ebx_5
                                
                                if (ebx_5 != &data_7bf960)
                                    break
                                
                                if (data_1597ddc != 0)
                                    var_48 = "XMap<enum DomCardCategory,struct DomCardCategoryDef "
                                    "const *>::SetNumBuckets"
                                    goto label_51c4eb
                                
                                int32_t* eax_70 = sub_64c020(0x1000)
                                int32_t edx_9 = 0x3ff
                                data_1597ddc = eax_70
                                data_1597de0 = 0x3ff
                                void* const edi_14 = &data_77f298
                                int32_t* result
                                
                                while (true)
                                    int32_t i_9 = *edi_14
                                    int32_t esi_15 = (i_9 s>> 4 | i_9) & edx_9
                                    result = eax_70[esi_15]
                                    
                                    if (result == 0)
                                    label_51c47b:
                                        int32_t* eax_71 = sub_64bfd0(0xc)
                                        eax_71[3] += 1
                                        
                                        if (*eax_71 == 0)
                                            sub_64be70(eax_71)
                                        
                                        int32_t* ecx_30 = *eax_71
                                        *eax_71 = *ecx_30
                                        *ecx_30 = *edi_14
                                        ecx_30[1] = edi_14
                                        ecx_30[2] = *(data_1597ddc + (esi_15 << 2))
                                        result = data_1597ddc
                                        result[esi_15] = ecx_30
                                        data_1597de4 += 1
                                    else
                                        while (i_9 != *result)
                                            result = result[2]
                                            
                                            if (result == 0)
                                                goto label_51c47b
                                        
                                        result[1] = edi_14
                                    
                                    edi_14 += 0x1c
                                    
                                    if (edi_14 s>= &data_77fca8)
                                        break
                                    
                                    edx_9 = data_1597de0
                                    eax_70 = data_1597ddc
                                
                                fsbase->NtTib.ExceptionList = ExceptionList
                                return result
                    else
                        var_48 = "XMap<enum DomCardCategory,class XArray<enum DomCardEnum> >::SetNumBuckets"
                else
                    var_48 =
                        "XMap<enum DomCardEnum,class XArray<enum DomCardCategory> >::SetNumBuckets"
            else
                var_48 = "XMap<enum DomCardEnum,enum Doodad>::SetNumBuckets"
        else
            var_48 = "XMap<enum DomCardCategory,struct CategoryCombos const *>::SetNumBuckets"
    else
        var_48 = "XMap<enum DomCardEnum,struct CardCombos const *>::SetNumBuckets"
else
    var_48 = "XMap<enum CampaignPiece,struct CampaignPieceDef const *>::SetNumBuckets"

label_51c4eb:
var_4c = 0x74
var_50 = "C:\x\ax2017\Engine\xMap.h"
ecx_28 = "mNodeBuckets == NULL"
label_51c4fc:
sub_63b870(j, &data_801800, ecx_28, var_50, var_4c, var_48)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
