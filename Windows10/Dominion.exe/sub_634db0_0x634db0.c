// 函数: sub_634db0
// 地址: 0x634db0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_76c17b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
void* result_1
void* edx
result_1, edx = __chkstk(0x30550)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_24 = eax_2
int32_t var_2c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* result_2 = result_1
result_2 = result_1
void var_30540
memset(&var_30540, 0, 0xb530)
void var_23fa0
sub_5931d0(edx, &var_23fa0)
void* i_10 = 0xb
void* esi_1 = edx + 0x159c
void* i_12 = 0xb
int32_t var_302a0
void* i

do
    int32_t edi_1 = *(esi_1 - 8)
    
    if (edi_1 != 0)
        void* edx_2 = &var_30540 + var_302a0 * 0x38
        var_302a0 += 1
        int32_t eax_5
        eax_5.b = *esi_1 == 0
        *edx_2 = edi_1
        *(edx_2 + 4) = eax_5.b
        i_10 = i_12
    
    esi_1 += 0x10
    i = i_10
    i_10 -= 1
    i_12 = i_10
while (i != 1)
int32_t ecx_5 = var_302a0 * 0x38
int32_t eax_10 = ecx_5 s/ 0x38
sub_637e70(eax_10, &var_30540 + ecx_5, &var_30540, eax_10, sub_634d30)
void* i_11 = 0xe
i_12 = 0xe
void* esi_4 = edx + 0x165c
void var_3029c
int32_t var_2fffc
void* i_1

do
    int32_t edi_2 = *(esi_4 - 8)
    
    if (edi_2 != 0)
        void* edx_7 = &var_3029c + var_2fffc * 0x38
        var_2fffc += 1
        int32_t eax_12
        eax_12.b = *esi_4 == 0
        *edx_7 = edi_2
        *(edx_7 + 4) = eax_12.b
        i_11 = i_12
    
    esi_4 += 0x10
    i_1 = i_11
    i_11 -= 1
    i_12 = i_11
while (i_1 != 1)
int32_t i_9 = 4
void* i_20 = edx + 0x5f01c
i_12 = i_20
void* edi_3 = edx + 0x1744
int32_t var_2ff18
int32_t i_2

do
    int32_t esi_5 = *edi_3
    
    if (esi_5 != 0)
        int32_t eax_15 = var_2ff18 * 7
        var_2ff18 += 1
        int32_t var_2fff8[0x2]
        (&var_2fff8)[eax_15][0] = esi_5
        int32_t j_1 = *(edx + 0xd38)
        
        if (j_1 s> 0)
            void* ecx_12 = &(&__saved_ebp)[eax_15 * 2 - 0xbff8]
            int32_t j
            
            do
                int32_t eax_16 = *i_20
                i_20 += 0x10
                *ecx_12 = eax_16
                ecx_12 += 4
                j = j_1
                j_1 -= 1
            while (j != 1)
            i_20 = i_12
    
    i_20 += 4
    edi_3 += 0x10
    i_2 = i_9
    i_9 -= 1
    i_12 = i_20
while (i_2 != 1)
void* eax_17 = edx
int32_t ecx_13 = 0
int32_t var_30550 = 0
char** i_7
int32_t i_16

if (*(eax_17 + 0xd38) s> 0)
    int32_t* edi_4 = 8
    void* i_22 = eax_17 + 0x5eb70
    int32_t* var_30548 = 8
    i_12 = i_22
    
    while (true)
        int32_t var_ca8[0x319]
        int32_t eax_18 = sub_590ad0(eax_17, ecx_13, eax_17, &var_ca8)
        void* i_13 = nullptr
        i_7 = nullptr
        
        if (eax_18 s> 0)
            while (true)
                uint32_t esi_6 = zx.d((var_ca8[i_13]).w)
                
                if (esi_6 u>= 0x320)
                    sub_591930()
                
                int32_t i_3 = *(esi_6 * 0x64 + edx + 0x1a4c)
                void* eax_21 = sub_571b30(i_3, *(edx + 0xd48))
                
                if (((*(eax_21 + 0x98) & 0x7f000400) | (*(eax_21 + 0x9c) & 0x940)) == 0)
                    int32_t eax_24 = sub_57da30(edx, i_3)
                    int32_t ecx_21 = 7
                    void* eax_25 = edx + 0x1594
                    void* eax_30
                    
                    while (true)
                        int32_t edi_6 = *eax_25
                        
                        if (edi_6 != i_3 && *(eax_25 + 4) != i_3 && edi_6 != eax_24)
                            ecx_21 += 1
                            eax_25 += 0x10
                            
                            if (ecx_21 s< 0x48)
                                continue
                            
                            goto label_6350c5
                        
                        void* eax_26 = sub_634c80(eax_25, i_3, &var_30540, edi_6)
                        void var_2ff14
                        int32_t eax_32
                        
                        if (edi_6 != 0)
                            if (eax_26 != 0 && edi_6 != i_3)
                                edi_4 = var_30548
                                int32_t ecx_24 = 0
                                *(edi_4 + eax_26) += 1
                                
                                if (i_16 s> 0)
                                    void* eax_33 = &var_2ff14
                                    
                                    while (*eax_33 != i_3)
                                        ecx_24 += 1
                                        eax_33 += 0x38
                                        
                                        if (ecx_24 s>= i_16)
                                            goto label_63515c
                                    
                                    eax_30 = &(&__saved_ebp)[ecx_24 * 0xe - 0xbfc1]
                                
                                if (i_16 s<= 0 || eax_30 == 0)
                                label_63515c:
                                    eax_30 = &(&__saved_ebp)[i_16 * 0xe - 0xbfc1]
                                    i_16 += 1
                                    *eax_30 = i_3
                                
                                break
                            
                            eax_30 = sub_634c80(eax_26, i_3, &var_30540, edi_6)
                            
                            if (eax_30 == 0)
                                eax_32 = i_16 * 7
                                i_16 += 1
                                eax_30 = &(&__saved_ebp)[eax_32 * 2 - 0xbfc1]
                                *eax_30 = i_3
                        else
                        label_6350c5:
                            int32_t ecx_23 = 0
                            
                            if (i_16 s> 0)
                                void* eax_27 = &var_2ff14
                                
                                while (*eax_27 != i_3)
                                    ecx_23 += 1
                                    eax_27 += 0x38
                                    
                                    if (ecx_23 s>= i_16)
                                        goto label_6350fe
                                
                                eax_30 = &(&__saved_ebp)[ecx_23 * 0xe - 0xbfc1]
                            
                            if (i_16 s<= 0 || eax_30 == 0)
                            label_6350fe:
                                eax_32 = i_16 * 7
                                i_16 += 1
                                eax_30 = &(&__saved_ebp)[eax_32 * 2 - 0xbfc1]
                                *eax_30 = i_3
                        edi_4 = var_30548
                        break
                    
                    *(edi_4 + eax_30) += 1
                
                i_13 = i_7 + 1
                i_7 = i_13
                
                if (i_13 s>= eax_18)
                    break
            
            i_22 = i_12
        
        i_7 = nullptr
        void* i_24 = i_22
        void* i_23 = i_22
        void* i_4
        
        do
            int32_t esi_8 = *(i_24 - 4)
            
            if (esi_8 == 0)
                break
            
            int32_t eax_40 = sub_57da30(edx, esi_8)
            int32_t edx_19 = 7
            void* ecx_30 = edx + 0x1594
            int32_t eax_41
            
            while (true)
                eax_41 = *ecx_30
                
                if (eax_41 == esi_8)
                    break
                
                if (*(ecx_30 + 4) == esi_8)
                    break
                
                if (eax_41 == eax_40)
                    break
                
                edx_19 += 1
                ecx_30 += 0x10
                
                if (edx_19 s>= 0x48)
                    eax_41 = 0
                    break
            
            edi_4 = var_30548
            void* ecx_32 = edi_4 + sub_634c80(eax_41, esi_8, &var_30540, eax_41)
            i_24 = i_23 + 8
            *(ecx_32 + 0x18) += *i_23
            i_4 = i_7 + 1
            i_23 = i_24
            i_7 = i_4
        while (i_4 s< 0x19)
        edi_4 = &edi_4[1]
        eax_17 = edx
        ecx_13 = var_30550 + 1
        i_22 = i_12 + 0xc8
        var_30550 = ecx_13
        var_30548 = edi_4
        i_12 = i_22
        
        if (ecx_13 s>= *(eax_17 + 0xd38))
            break

void var_25010
memset(&var_25010, 0, 0x60)
struct _EXCEPTION_REGISTRATION_RECORD** (__fastcall* var_30_7)(struct _EXCEPTION_REGISTRATION_RECORD
    *** arg1) = sub_5a0bf0
`eh vector constructor iterator'(&var_25010, 0x10, 6, 0x5a0be0)
int32_t var_24fa8 = 0
int64_t var_24fb0 = 0
void var_24fa4
memset(&var_24fa4, 0, 0x1000)
int32_t esi_10 = 0
int32_t var_14_1 = 0
int32_t i_5 = 0
int32_t var_23fa4 = 0
int32_t eax_46 = *(edx + 0xd38)
var_24fb0.d = eax_46

if (eax_46 s> 0)
    void* ecx_35 = arg2 + 8
    void var_23f9c
    void* var_30548_1 = &var_23f9c
    void* var_30550_1 = ecx_35
    void* esi_11 = &var_25010
    void* eax_47 = ecx_35 + 0x5c
    
    do
        int32_t eax_48 = 0
        void* ecx_36 = eax_47
        char** i_14
        char* eax_52
        char* const edx_24
        
        while (true)
            if (eax_48 s>= *(ecx_35 + 0x11a0))
                sub_63b870(eax_48, &data_801800, "Halt", 
                    "C:\x\ax2017\Jams\Shared\TggGame\code\GameClient.cpp", 0x12f8, "GameGetPlayer")
                
                if (sub_63bc30() != 0)
                    breakpoint
                
                sub_63bb00()
                noreturn
            
            if (*ecx_36 == i_5)
                void* eax_51 = eax_48 * 0x22c + 0x40 + var_30550_1
                i_14 = sub_4b06c0(eax_51, var_30550_1, &i_12, eax_51, &i_7)
                i_7 = i_14
                var_14_1.b = 1
                edx_24 = &data_801800
                eax_52 = *esi_11
                break
            
            eax_48 += 1
            ecx_36 += 0x22c
        
        if (eax_52 != 0)
            edx_24 = eax_52
        
        char* eax_53 = *i_14
        char* const ecx_39 = &data_801800
        
        if (eax_53 != 0)
            ecx_39 = eax_53
        
        if (edx_24 != ecx_39)
            if (data_cf65bc != 0)
                char* eax_54 = *esi_11
                
                if (eax_54 != 0 && *eax_54 != 0)
                    char* eax_55 = sub_63d4e0(esi_11)
                    int32_t temp6_1 = *(eax_55 + 4)
                    *(eax_55 + 4) -= 1
                    
                    if (temp6_1 == 1)
                        sub_64c080(eax_55, *(eax_55 + 0xc) + 0x10)
                        *esi_11 = &data_801800
            
            char* eax_57 = *i_7
            *esi_11 = eax_57
            
            if (eax_57 != 0 && *eax_57 != 0)
                char* eax_58 = sub_63d4e0(esi_11)
                *(eax_58 + 4) += 1
        
        var_14_1.b = 2
        
        if (data_cf65bc != 0)
            void* i_17 = i_12
            
            if (i_17 != 0 && *i_17 != 0)
                char* eax_59 = sub_63d4e0(&i_12)
                int32_t temp5_1 = *(eax_59 + 4)
                *(eax_59 + 4) -= 1
                
                if (temp5_1 == 1)
                    sub_64c080(eax_59, *(eax_59 + 0xc) + 0x10)
                    i_12 = &data_801800
        
        var_14_1.b = 0
        void var_30564
        sub_5f1ae0(&var_30564, i_5, arg2, 0, &var_30564, &result_2)
        bool cond:9_1 = *var_30548_1 != 0
        *(esi_11 + 4) = *(var_30548_1 - 4)
        *(esi_11 + 8) = result_2
        void* eax_62
        
        if (cond:9_1 || *(edx + 0x1a04) == 0)
            eax_62.b = 0
        else
            eax_62.b = 1
        
        *(esi_11 + 0xc) = eax_62.b
        int32_t eax_63 = 0
        int32_t edx_30 = *(arg2 + 0x11a8)
        
        if (edx_30 s> 0)
            void* ecx_48 = arg2 + 0x64
            
            while (*ecx_48 != i_5)
                eax_63 += 1
                ecx_48 += 0x22c
                
                if (eax_63 s>= edx_30)
                    goto label_6354e7
            
            eax_63 = *(eax_63 * 0x22c + arg2 + 0x68)
        
        if (edx_30 s> 0 && (eax_63 == 0x3e9 || eax_63 == 0x3ec || eax_63 == 0x3ed))
            eax_63.b = 1
        else
        label_6354e7:
            eax_63.b = 0
        
        var_30548_1 += 0x5dd4
        i_5 += 1
        ecx_35 = var_30550_1
        *(esi_11 + 0xd) = eax_63.b
        esi_11 += 0x10
    while (i_5 s< var_24fb0.d)
    
    esi_10 = var_23fa4

void* const result_5 = 6
void* result_4 = 5

if (var_2fffc == 0xb)
    result_4 = 6

int32_t edi_8 = 0
var_24fb0:4.d = result_4

if (var_2fffc s> 0)
    int32_t ecx_49 = 0
    int32_t var_30550_2 = 0
    
    do
        void* edx_31 = &var_24fa4 + (esi_10 << 6)
        var_23fa4 = esi_10 + 1
        *(edx_31 + 8) = *(&var_3029c + ecx_49)
        int32_t eax_68
        eax_68.b = edi_8 s< 5
        *edx_31 = eax_68
        int32_t eax_69 = edi_8
        
        if (edi_8 s>= 5)
            eax_69 = edi_8 - 5
        
        int32_t ecx_52 = edi_8 * 7
        *(edx_31 + 4) = eax_69
        edi_8 += 1
        void var_30294
        int128_t xmm0_1 = *(&var_30294 + (ecx_52 << 3))
        void var_30298
        eax_69.b = *(&var_30298 + (ecx_52 << 3))
        *(edx_31 + 0xc) = eax_69.b
        *(edx_31 + 0x10) = xmm0_1
        void var_30284
        *(edx_31 + 0x20) = *(&var_30284 + (ecx_52 << 3))
        void var_3027c
        *(edx_31 + 0x28) = *(&var_3027c + (ecx_52 << 3))
        ecx_49 = var_30550_2 + 0x38
        void var_3026c
        *(edx_31 + 0x38) = *(&var_3026c + (ecx_52 << 3))
        esi_10 = var_23fa4
        var_30550_2 = ecx_49
    while (edi_8 s< var_2fffc)
    
    result_4 = var_24fb0:4.d

int32_t edi_9 = 0
int32_t var_30554_1 = var_2ff18
void* i_18 = 2

if (var_2ff18 == 4)
    result_4 = 6

i_12 = 2
result_2 = result_4
int32_t edx_32 = var_302a0
void var_3053c

if (edx_32 s> 0)
    void* var_3054c_1 = &var_30540
    void* esi_13 = &var_3053c
    void var_30508
    void* var_30548_2 = &var_30508
    void var_30520
    void* eax_70 = &var_30520
    void* var_30554_2 = &var_30520
    
    while (true)
        int32_t ecx_55 = 0
        void* eax_75
        
        while (true)
            if (*(eax_70 - 0x18) == 0 && *eax_70 == 0)
                ecx_55 += 1
                eax_70 += 4
                
                if (ecx_55 s< 6)
                    continue
                else if (*esi_13 == 0)
                    memmove(var_3054c_1, var_30548_2, (edx_32 - edi_9) * 0x38 + 0xffffffc8)
                    edx_32 = var_302a0 - 1
                    var_30548_2 -= 0x38
                    edi_9 -= 1
                    var_3054c_1 -= 0x38
                    esi_13 -= 0x38
                    var_302a0 = edx_32
                    eax_75 = var_30554_2 - 0x38
                    break
            
            eax_75 = var_30554_2
            break
        
        var_30548_2 += 0x38
        edi_9 += 1
        var_3054c_1 += 0x38
        eax_70 = eax_75 + 0x38
        esi_13 += 0x38
        var_30554_2 = eax_70
        
        if (edi_9 s>= edx_32)
            break
    
    edi_9 = 0
    esi_10 = var_23fa4
    var_30554_1 = var_2ff18
    i_18 = 2

void* const result_3 = result_2

if (edx_32 == 6)
    result_3 = result_5

var_24fb0:4.d = result_3
int32_t i_15 = i_16
int32_t i_8 = i_15
void* i_21

if (edx_32 s> 0)
    void* var_30550_3 = &var_3053c
    
    while (true)
        if (edi_9 s>= var_24fb0:4.d)
            edi_9 = 0
            i_12 = i_18 + 1
        
        var_23fa4 = esi_10 + 1
        void* ecx_57 = &var_24fa4 + (esi_10 << 6)
        int128_t xmm0_5 = *(var_30550_3 + 4)
        *(ecx_57 + 8) = *(var_30550_3 - 4)
        void* i_19 = i_12
        *(ecx_57 + 0x10) = xmm0_5
        *ecx_57 = i_19
        int32_t eax_82 = edi_9
        edi_9 += 1
        *(ecx_57 + 0x20) = *(var_30550_3 + 0x14)
        int128_t xmm0_7 = *(var_30550_3 + 0x1c)
        *(ecx_57 + 4) = eax_82
        eax_82.b = *var_30550_3
        *(ecx_57 + 0x28) = xmm0_7
        *(ecx_57 + 0xc) = eax_82.b
        *(ecx_57 + 0x38) = *(var_30550_3 + 0x2c)
        var_30550_3 += 0x38
        esi_10 = var_23fa4
        int32_t temp4_1 = edx_32
        edx_32 -= 1
        
        if (temp4_1 == 1)
            break
        
        i_18 = i_12
    
    i_21 = i_12
    i_15 = i_16
    
    if (i_21 == 2)
        goto label_635811
    
    goto label_635820

i_21 = 2
label_635811:

if (i_15 != 0)
    i_21 = 3
    edi_9 = 0
label_635820:
    
    if (i_15 s> 0)
        void var_2ff0c
        void* var_30550_4 = &var_2ff0c
        int32_t i_6
        
        do
            if (edi_9 s>= var_24fb0:4.d)
                i_21 += 1
                edi_9 = 0
            
            var_23fa4 = esi_10 + 1
            void** ecx_58 = &var_24fa4 + (esi_10 << 6)
            *ecx_58 = i_21
            int128_t xmm0_9 = *var_30550_4
            ecx_58[2] = *(var_30550_4 - 8)
            int32_t eax_86 = edi_9
            *(ecx_58 + 0x10) = xmm0_9
            edi_9 += 1
            ecx_58[1] = eax_86
            *(ecx_58 + 0x20) = *(var_30550_4 + 0x10)
            *(ecx_58 + 0x28) = *(var_30550_4 + 0x18)
            i_6 = i_8
            i_8 -= 1
            *(ecx_58 + 0x38) = *(var_30550_4 + 0x28)
            var_30550_4 += 0x38
            esi_10 = var_23fa4
        while (i_6 != 1)

if (edi_9 == 0)
    goto label_6358b2

if (var_2ff18 != 0)
    i_21 += 1
    edi_9 = 0
label_6358b2:
    
    if (var_2ff18 s> 0)
        void var_2fff0
        void* var_30550_5 = &var_2fff0
        
        while (true)
            var_23fa4 = esi_10 + 1
            void** ecx_59 = &var_24fa4 + (esi_10 << 6)
            *ecx_59 = i_21
            int128_t xmm0_13 = *var_30550_5
            ecx_59[2] = *(var_30550_5 - 8)
            int32_t eax_90 = edi_9
            *(ecx_59 + 0x10) = xmm0_13
            edi_9 += 1
            ecx_59[1] = eax_90
            *(ecx_59 + 0x20) = *(var_30550_5 + 0x10)
            *(ecx_59 + 0x28) = *(var_30550_5 + 0x18)
            int32_t temp7_1 = var_30554_1
            var_30554_1 -= 1
            *(ecx_59 + 0x38) = *(var_30550_5 + 0x28)
            var_30550_5 += 0x38
            
            if (temp7_1 == 1)
                break
            
            esi_10 = var_23fa4

uint32_t result = result_1
struct _EXCEPTION_REGISTRATION_RECORD** (__fastcall* var_30_12)(struct 
    _EXCEPTION_REGISTRATION_RECORD*** arg1) = sub_5a0bf0
(result, &var_25010, 0x10, 6, sub_635a60)
*(result + 0x60) = var_24fb0.d
*(result + 0x64) = var_24fb0:4.d
*(result + 0x68) = i_21 + 1
memcpy(result + 0x6c, &var_24fa4, 0x1000)
*(result + 0x106c) = var_23fa4
int32_t var_14_2 = 3
`eh vector vbase constructor iterator'(&var_25010, 0x10, 6, sub_5a0bf0)
fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
