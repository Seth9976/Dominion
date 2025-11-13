// 函数: sub_4efcf0
// 地址: 0x4efcf0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_764b8d
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t __saved_ebp
int32_t var_d34 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = arg3
void* var_cb8 = esi
void* i_8 = arg4
void* i_3 = i_8
int128_t var_d28
memset(&var_d28, 0, 0x54)
int32_t eax_3 = *(i_8 + 4)
int64_t* var_d1c
void* i_16
uint32_t i_6
void* i_9
void var_ca8
uint32_t i_10
void* i_12

if (eax_3 == 5)
label_4efe50:
    i_12 = 1
    i_9 = 1
    i_16 = 1
    i_6 = 0
    int32_t var_d10_2 = 0
label_4efe74:
    int32_t eax_11 = i_12 * 0xc
    
    if (mulu.dp.d(i_12, 0xc) u>> 0x20 != 0)
        eax_11 = 0xffffffff
    
    int32_t var_d38_5 = eax_11
    i_10 = i_6
    var_d1c = sub_7597a2()
else if (eax_3 == 6)
    void* i_13 = *(i_8 + 0x6c)
    i_10 = 0
    i_9 = i_13
    i_16 = i_13
    i_6 = 0
    int32_t var_d10_1 = 0
    
    if (i_13 s> 0)
        void* esi_1 = *(i_8 + 0x70)
        uint32_t i_14
        int32_t edx_1
        i_14, edx_1 = sub_57ee90(&var_ca8, *(i_8 + 0x4c), var_cb8, esi_1, &var_ca8)
        i_10 = i_14
        i_6 = i_10
        
        if (i_10 s> 0)
            esi = var_cb8
        else if (sub_5915b0(i_14, edx_1, var_cb8, esi_1) != 0x1121)
            i_10 = i_6
            i_6 = i_10
            esi = var_cb8
        else
            esi = var_cb8
            uint32_t eax_9 = sub_5916b0(esi_1)
            i_10 = sub_590930(eax_9, eax_9, esi, &var_ca8)
            i_6 = i_10
        
        i_12 = i_9
        goto label_4efe3a
    
    var_d1c = nullptr
else
    if (eax_3 == 9)
        goto label_4efe50
    
    i_12 = *(i_8 + 0x6c)
    i_10 = 0
    i_9 = i_12
    i_16 = i_12
    i_6 = 0
label_4efe3a:
    uint32_t i_11 = i_10
    
    if (i_12 s> 0)
        goto label_4efe74
    
    var_d1c = nullptr
void* var_d14

if (i_10 s> 0)
    int32_t eax_14 = i_10 * 4
    
    if (mulu.dp.d(i_10, 4) u>> 0x20 != 0)
        eax_14 = 0xffffffff
    
    int32_t var_d38_6 = eax_14
    void* eax_15 = sub_7597a2()
    uint32_t i_5 = i_6
    var_d14 = eax_15
    void* ecx_4 = eax_15
    uint32_t i
    
    do
        int32_t eax_16 = *(ecx_4 + &var_ca8 - eax_15) * 0x64
        ecx_4 += 4
        *(ecx_4 - 4) = *(eax_16 + esi + 0x1a4c)
        i = i_5
        i_5 -= 1
    while (i != 1)
    int32_t* ecx_5 = var_d14
    int32_t eax_20 = i_6 << 2 s>> 2
    sub_4f5990(eax_20, &ecx_5[i_6], ecx_5, eax_20, i_3)
    i_8 = i_3

void* i_7 = i_9

if (i_7 s> 0)
    int64_t* ecx_6 = var_d1c
    void* esi_2 = i_8 + 0x70
    void* edx_4 = var_cb8
    int64_t* var_cc0_1 = ecx_6
    i_3 = i_7
    void* i_1
    
    do
        int32_t eax_22 = *(i_8 + 4) - 4
        int32_t var_cc8_1 = 0
        uint32_t var_ccc_1
        
        if (eax_22 u> 5)
            var_ccc_1 = *(*esi_2 * 0x64 + edx_4 + 0x1a4c)
        else
            switch (eax_22)
                case 0, 3, 4
                    var_ccc_1 = *esi_2
                case 1, 5
                    var_ccc_1 = *(i_8 + 0x6c)
                case 2
                    uint32_t eax_24 = sub_5915b0(eax_22, edx_4, var_cb8, *esi_2)
                    edx_4 = var_cb8
                    ecx_6 = var_cc0_1
                    var_ccc_1 = eax_24
                    int32_t var_cc8_2 = *((*esi_2 u>> 6 & 0xfff) * 0x64 + edx_4 + 0x1a4c)
        
        int32_t eax_31 = 0
        
        if (*(i_8 + 0xd10) != 0)
            eax_31 = *(esi_2 + 0xc90)
        
        esi_2 += 4
        *ecx_6 = var_ccc_1.q
        ecx_6[1].d = eax_31
        ecx_6 += 0xc
        i_1 = i_3
        i_3 -= 1
        var_cc0_1 = ecx_6
    while (i_1 != 1)
    i_7 = i_9

int64_t* esi_4

if (*(i_8 + 4) == 2)
    esi_4 = var_d1c
else
    void* esi_3 = var_d1c + i_7 * 0xc
    int32_t eax_36 = (esi_3 - var_d1c) s/ 0xc
    esi_4 = var_d1c
    sub_4f5de0(eax_36, esi_3, esi_4, eax_36, i_3)

void* edx_9 = arg2
int32_t var_cf0 = 0
int32_t var_ce8 = 0
int32_t var_cb0 = 0
uint32_t result

if (*(edx_9 + 0xd4) s> 0)
    void* i_15 = i_9
    int32_t* edi_2 = *(edx_9 + 0xd0) + 0x18
    int32_t* var_cc0_2 = edi_2
    
    while (true)
        int32_t eax_40 = edi_2[-2]
        
        if (eax_40 == i_15)
            if (*(edx_9 + 0xbc) != 6)
                int32_t* edx_11 = edi_2[-3]
                int32_t ecx_14 = eax_40 * 0xc
                int32_t i_4 = ecx_14 - 4
                
                if (ecx_14 u>= 4)
                    int32_t i_2
                    
                    do
                        if (*edx_11 != *esi_4)
                            goto label_4f0136
                        
                        edx_11 = &edx_11[1]
                        esi_4 += 4
                        i_2 = i_4
                        i_4 -= 4
                    while (i_2 u>= 4)
                
                if (i_4 == 0xfffffffc)
                    goto label_4f00f5
                
            label_4f0136:
                eax_40.b = *edx_11
                
                if (eax_40.b != *esi_4)
                    edx_9 = arg2
                    i_15 = i_9
                else
                    if (i_4 == 0xfffffffd)
                        goto label_4f00f5
                    
                    eax_40.b = *(edx_11 + 1)
                    
                    if (eax_40.b != *(esi_4 + 1))
                        edx_9 = arg2
                        i_15 = i_9
                    else
                        if (i_4 == 0xfffffffe)
                            goto label_4f00f5
                        
                        eax_40.b = *(edx_11 + 2)
                        
                        if (eax_40.b != *(esi_4 + 2))
                            edx_9 = arg2
                            i_15 = i_9
                        else
                            if (i_4 == 0xffffffff)
                                goto label_4f00f5
                            
                            eax_40.b = *(edx_11 + 3)
                            
                            if (eax_40.b == *(esi_4 + 3))
                                goto label_4f00f5
                            
                            edx_9 = arg2
                            i_15 = i_9
            else
                if (i_15 s> 1)
                    sub_63b870(eax_40, &data_801800, "c.numMoves <= 1", 
                        "C:\x\ax2017\Jams\Dominion\code\DomAIMCTS.cpp", 0xbdc, "NodeEdgeMatches")
                    
                    if (sub_63bc30() != 0)
                        breakpoint
                    
                    sub_63bb00()
                    noreturn
                
                if (i_15 == 0)
                label_4f00f5:
                    sub_7597b9(var_d1c)
                    result = sub_7597b9(var_d14)
                    goto label_4f0287
                
                int32_t* ecx_11 = edi_2[-3]
                
                if (*ecx_11 != *esi_4 || ecx_11[1] != *(esi_4 + 4))
                    i_15 = i_9
                else
                    int32_t esi_5 = *edi_2
                    
                    if (esi_5 != i_6)
                        i_15 = i_9
                    else
                        int32_t edx_10 = 0
                        
                        if (esi_5 s<= 0)
                            goto label_4f00f5
                        
                        void* ecx_12 = var_d14
                        int32_t* edi_4 = edi_2[-1] - ecx_12
                        
                        while (*(edi_4 + ecx_12) == *ecx_12)
                            edx_10 += 1
                            ecx_12 += 4
                            
                            if (edx_10 s>= esi_5)
                                goto label_4f00f5
                        
                        edi_2 = var_cc0_2
                        edx_9 = arg2
                        i_15 = i_9
        
        edi_2 = &edi_2[0x15]
        int32_t eax_42 = var_cb0 + 1
        var_cc0_2 = edi_2
        var_cb0 = eax_42
        
        if (eax_42 s>= *(edx_9 + 0xd4))
            break
        
        esi_4 = var_d1c

int32_t edi_5 = *(edx_9 + 0xd8)

if (*(edx_9 + 0xd4) == edi_5)
    int32_t eax_43 = *(edx_9 + 0xd0)
    int32_t eax_44 = edi_5 * 2
    *(edx_9 + 0xd8) = eax_44
    int32_t var_cc0_3 = eax_44
    int32_t eax_45 = eax_44 * 0x54
    
    if (mulu.dp.d(eax_44, 0x54) u>> 0x20 != 0)
        eax_45 = 0xffffffff
    
    int32_t var_d38_12 = eax_45
    int32_t eax_46 = sub_7597a2()
    int32_t var_cc0_4 = eax_46
    int32_t eax_47 = edi_5 * 2
    
    if (eax_47 != 0)
        memset(eax_46, 0, eax_47 * 0x54)
    
    *(arg2 + 0xd0) = eax_46
    memcpy(eax_46, eax_43, edi_5 * 0x54)
    sub_7597b9(eax_43)
    edx_9 = arg2

uint32_t result_1
result = result_1
int128_t* ecx_17 = *(edx_9 + 0xd4) * 0x54 + *(edx_9 + 0xd0)
*ecx_17 = var_d28
ecx_17[1] = i_16.o
int128_t var_d08
ecx_17[2] = var_d08
int128_t var_cf8
ecx_17[3] = var_cf8
ecx_17[4] = var_ce8.o
ecx_17[5].d = result
*(edx_9 + 0xd4) += 1
label_4f0287:
fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
