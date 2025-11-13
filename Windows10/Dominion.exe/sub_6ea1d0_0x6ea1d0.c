// 函数: sub_6ea1d0
// 地址: 0x6ea1d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$??$__acrt_lowio_lock_fh_and_call@V<lambda_66567acadc90904ea62d5b5218c83326>@@@@YAHH$$QAV<lambda_66567acadc90904ea62d5b5218c83326>@@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** eax_3 = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* edi = arg1
char* arg_4
char* ebx = arg_4
arg1.b = 0
struct _EXCEPTION_REGISTRATION_RECORD* xmm0 = *(ebx + 0x10)
int32_t xmm1 = *(ebx + 0x14)
struct _EXCEPTION_REGISTRATION_RECORD* var_18 = xmm0
int32_t var_14 = xmm1
char arg_8
struct _EXCEPTION_REGISTRATION_RECORD** arg_c

if (arg_8 != 0)
    eax_3 = arg_c
    xmm0 = *eax_3
    xmm1 = eax_3[1]
    var_18 = xmm0
    var_14 = xmm1

float xmm2 = edi[4]

if (not(xmm0 f< xmm2) && not(xmm2 f+ edi[6] f<= xmm0))
    float xmm0_1 = edi[5]
    
    if (not(xmm1 f< xmm0_1))
        arg1 = nullptr
        eax_3 = 1
        
        if (xmm0_1 f+ edi[7] f> xmm1)
            arg1 = 1

struct _EXCEPTION_REGISTRATION_RECORD** edx = *ebx

if (edx == 3)
    if (arg1.b != 0)
    label_6ea826:
        int32_t var_2c_11 = var_14
        *(edi + 0x6a) = 1
        void* eax_26 = sub_6e96f0(edi, var_18)
        edi[1] = eax_26
        edi[3] = eax_26
        edi[2] = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_26
    
label_6ea741:
    eax_3 = &ebx[4]
    
    if (edx == 0xd && *eax_3 == 0x1000 && arg1.b != 0)
        goto label_6ea826
else
    char const* const var_34_1
    int32_t var_30_1
    char const* const var_2c_2
    uint32_t eax_17
    char* ecx_9
    
    switch (edx)
        case 0
            if (*(edi + 0x69) == edx.b || *(edi + 0x6a) != edx.b)
                goto label_6ea741
            
            eax_3 = *(ebx + 8)
            
            if (eax_3 != 0 && eax_3 != 1 && eax_3 != 6)
                fsbase->NtTib.ExceptionList = ExceptionList
                return eax_3
            
            uint32_t eax_15 = sub_6e9b50(edi, *(ebx + 4))
            ebx[0x1c] = 1
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_15
        case 1
            int32_t eax_4 = *(ebx + 4)
            char** ecx_6
            
            if (eax_4 != 0x56)
                if (eax_4 != 0x43 || *(ebx + 8) != 2)
                label_6ea4e1:
                    
                    if (*(edi + 0x69) == 0 || *(edi + 0x6a) != 0)
                        goto label_6ea741
                    
                    eax_3 = sub_6e9ed0(edi, eax_4, *(ebx + 8))
                    
                    if (eax_3.b == 0)
                        fsbase->NtTib.ExceptionList = ExceptionList
                        return eax_3
                    
                    ebx[0x1c] = 1
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return eax_3
                
                if (*(edi + 0x69) == 0)
                    goto label_6ea741
                
                int32_t esi_2 = edi[1]
                int32_t ecx_7 = edi[3]
                int32_t eax_7
                int32_t edx_4
                edx_4:eax_7 = sx.q(esi_2 - ecx_7)
                arg_c = (eax_7 ^ edx_4) - edx_4
                
                if (esi_2 s>= ecx_7)
                    esi_2 = ecx_7
                
                char* ecx_8 = *edi
                char* edi_1 = &data_801800
                char* const eax_10 = &data_801800
                
                if (ecx_8 != 0)
                    eax_10 = ecx_8
                
                eax_17 = &eax_10[esi_2]
                
                if (eax_10 == neg.d(esi_2))
                    var_2c_2 = "XString::XString"
                    var_30_1 = 0x9a
                    var_34_1 = "C:\x\ax2017\Engine\xString.cpp"
                    ecx_9 = &data_871e0c
                label_6ea91d:
                    sub_63b870(eax_17, &data_801800, ecx_9, var_34_1, var_30_1, var_2c_2)
                    
                    if (sub_63bc30() != 0)
                        breakpoint
                    
                    sub_63bb00()
                    noreturn
                
                arg_8.d = &data_801800
                sub_63db30(&arg_8, eax_17, arg_c)
                char* esi_3 = arg_8.d
                char* const eax_11 = &data_801800
                char* const ecx_11 = &data_801800
                
                if (esi_3 != 0)
                    eax_11 = esi_3
                
                while (true)
                    char edx_5 = *eax_11
                    char temp3_1 = *ecx_11
                    bool c_1 = edx_5 u< temp3_1
                    
                    if (edx_5 == temp3_1)
                        if (edx_5 == 0)
                            eax_3 = nullptr
                            break
                        
                        edx_5 = eax_11[1]
                        char temp4_1 = ecx_11[1]
                        c_1 = edx_5 u< temp4_1
                        
                        if (edx_5 == temp4_1)
                            eax_11 = &eax_11[2]
                            ecx_11 = &ecx_11[2]
                            
                            if (edx_5 != 0)
                                continue
                            
                            eax_3 = nullptr
                            break
                    
                    eax_3 = sbb.d(eax_11, eax_11, c_1) | 1
                    break
                
                if (eax_3 != 0)
                    if (esi_3 != 0)
                        edi_1 = esi_3
                    
                    arg_c = edi_1
                    void* ecx_12 = &edi_1[1]
                    
                    do
                        eax_3.b = *edi_1
                        edi_1 = &edi_1[1]
                    while (eax_3.b != 0)
                    
                    HGLOBAL hMem = GlobalAlloc(GMEM_MOVEABLE, edi_1 - ecx_12 + 1)
                    memcpy(GlobalLock(hMem), arg_c, edi_1 - ecx_12 + 1)
                    GlobalUnlock(hMem)
                    OpenClipboard(nullptr)
                    EmptyClipboard()
                    SetClipboardData(1, hMem)
                    eax_3 = CloseClipboard()
                    ebx = arg_4
                
                ebx[0x1c] = 1
                int32_t var_8_3 = 2
                
                if (data_cf65bc == 0 || esi_3 == 0 || *esi_3 == 0)
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return eax_3
                
                ecx_6 = &arg_8
            else
                if (*(ebx + 8) != 2)
                    goto label_6ea4e1
                
                if (*(edi + 0x69) == 0)
                    goto label_6ea741
                
                arg_4 = &data_801800
                int32_t var_8_1 = 0
                eax_3 = sub_63c340(&arg_4)
                char* esi_1 = arg_4
                
                if (eax_3.b != 0)
                    char* edx_1 = &data_801800
                    
                    if (esi_1 != 0)
                        edx_1 = esi_1
                    
                    arg_8.d = edx_1
                    char ecx_1 = *edx_1
                    
                    if (ecx_1 != 0)
                        while (true)
                            int32_t var_30_6
                            char const* const var_2c_12
                            
                            if (ecx_1 u< 0x80)
                            label_6ea2f4:
                                arg_c = edx_1
                                eax_3 = sub_5a0d00(&arg_c)
                                char* edx_2 = arg_8.d
                                arg_8.d = edx_2
                                arg_c = eax_3
                                edx_2.b = *edx_2
                                
                                if (edx_2.b u< 0x80 || (edx_2.b & 0xe0) == 0xc0)
                                label_6ea32d:
                                    sub_5a0d00(&arg_8)
                                    arg_8.d = arg_8.d
                                    eax_3 = sub_6e9b50(edi, arg_c)
                                    edx_1 = arg_8.d
                                    ecx_1 = *edx_1
                                    
                                    if (ecx_1 == 0)
                                        break
                                    
                                    continue
                                else
                                    eax_3.b = edx_2.b
                                    eax_3.b &= 0xf0
                                    
                                    if (eax_3.b == 0xe0)
                                        goto label_6ea32d
                                    
                                    edx_2.b &= 0xf8
                                    
                                    if (edx_2.b == 0xf0)
                                        goto label_6ea32d
                                    
                                    var_2c_12 = "Xutf8_next"
                                    var_30_6 = 0x222
                            else
                                eax_3.b = ecx_1
                                eax_3.b &= 0xe0
                                
                                if (eax_3.b == 0xc0)
                                    goto label_6ea2f4
                                
                                eax_3.b = ecx_1
                                eax_3.b &= 0xf0
                                
                                if (eax_3.b == 0xe0 || (ecx_1 & 0xf8) == 0xf0)
                                    goto label_6ea2f4
                                
                                var_2c_12 = "Xutf8_peek_next"
                                var_30_6 = 0x21c
                            
                            sub_63b870(eax_3, &data_801800, "!Xutf8_is_invalid_lead_char(str)", 
                                "C:\x\ax2017\Engine\Xutf8.cpp", var_30_6, var_2c_12)
                            
                            if (sub_63bc30() != 0)
                                breakpoint
                            
                            sub_63bb00()
                            noreturn
                
                ebx[0x1c] = 1
                int32_t var_8_2 = 1
                
                if (data_cf65bc == 0 || esi_1 == 0 || *esi_1 == 0)
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return eax_3
                
                ecx_6 = &arg_4
            
            eax_3 = sub_63d4e0(ecx_6)
            int32_t temp2_1 = eax_3[1]
            eax_3[1] -= 1
            
            if (temp2_1 != 1)
                fsbase->NtTib.ExceptionList = ExceptionList
                return eax_3
            
            int32_t* eax_14 = sub_64c080(eax_3, &eax_3[3][2])
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_14
        case 4
        label_6ea8a4:
            *(edi + 0x6a) = 0
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_3
        case 0x12
            if (*(ebx + 4) != 0x100000 || arg1.b == 0)
                goto label_6ea741
            
            goto label_6ea826
        case 0x19
            if (*(edi + 0x69) == 0 || *(edi + 0x6a) != 0)
                goto label_6ea741
            
            sub_6e9790(edi)
            uint32_t esi_4 = &data_801800
            arg_4 = edi[1]
            eax_17 = *(ebx + 0x18)
            
            if (eax_17 != 0)
                esi_4 = eax_17
            
            char ecx_23 = *esi_4
            
            if (ecx_23 == 0)
            label_6ea61b:
                char* eax_19 = arg_4
                edi[3] = eax_19
                ebx[0x1c] = 1
                fsbase->NtTib.ExceptionList = ExceptionList
                return eax_19
            
            while (true)
                if (ecx_23 u< 0x80)
                label_6ea5d4:
                    arg_8.d = esi_4
                    sub_6e9b50(edi, sub_5a0d00(&arg_8))
                    char ecx_26 = *esi_4
                    arg_8.d = esi_4
                    
                    if (ecx_26 u< 0x80)
                    label_6ea60d:
                        sub_5a0d00(&arg_8)
                        esi_4 = arg_8.d
                        ecx_23 = *esi_4
                        
                        if (ecx_23 == 0)
                            goto label_6ea61b
                        
                        continue
                    else
                        eax_17.b = ecx_26
                        eax_17.b &= 0xe0
                        
                        if (eax_17.b == 0xc0)
                            goto label_6ea60d
                        
                        eax_17.b = ecx_26
                        eax_17.b &= 0xf0
                        
                        if (eax_17.b == 0xe0 || (ecx_26 & 0xf8) == 0xf0)
                            goto label_6ea60d
                        
                        var_2c_2 = "Xutf8_next"
                        var_30_1 = 0x222
                else
                    eax_17.b = ecx_23
                    eax_17.b &= 0xe0
                    
                    if (eax_17.b == 0xc0)
                        goto label_6ea5d4
                    
                    eax_17.b = ecx_23
                    eax_17.b &= 0xf0
                    
                    if (eax_17.b == 0xe0 || (ecx_23 & 0xf8) == 0xf0)
                        goto label_6ea5d4
                    
                    var_2c_2 = "Xutf8_peek_next"
                    var_30_1 = 0x21c
                
                ecx_9 = "!Xutf8_is_invalid_lead_char(str)"
                var_34_1 = "C:\x\ax2017\Engine\Xutf8.cpp"
                break
            
            goto label_6ea91d
        case 0x1a
            if (*(edi + 0x69) == 0 || *(edi + 0x6a) != 0)
                goto label_6ea741
            
            int32_t eax_20 = *(ebx + 4)
            int32_t esi_5 = *(ebx + 0xc)
            arg_8.d = eax_20
            
            if (eax_20 s< 0 || esi_5 s< 0)
                int32_t eax_25 = edi[1]
                edi[3] = eax_25
                ebx[0x1c] = 1
                fsbase->NtTib.ExceptionList = ExceptionList
                return eax_25
            
            char* ecx_30 = *edi
            int32_t edx_9
            
            if (ecx_30 == 0)
                edx_9 = 0
            else if (*ecx_30 == 0)
            label_6ea68b:
                
                if (ecx_30 == 0 || *ecx_30 == 0)
                    edx_9 = 0
                else
                    char* eax_22 = sub_63d4e0(edi)
                    ecx_30 = *edi
                    edx_9 = *(eax_22 + 8)
            else
                char* eax_21 = sub_63d4e0(edi)
                edx_9 = arg_8.d
                ecx_30 = *edi
                
                if (edx_9 s>= *(eax_21 + 8))
                    goto label_6ea68b
            
            edi[3] = edx_9
            char* eax_23
            
            if (ecx_30 != 0 && *ecx_30 != 0)
                eax_23 = sub_63d4e0(edi)
            
            if (ecx_30 == 0 || *ecx_30 == 0 || esi_5 s>= *(eax_23 + 8))
                eax_23 = *edi
                
                if (eax_23 != 0 && *eax_23 != 0)
                    char* eax_24 = sub_63d4e0(edi)
                    edi[1] = *(eax_24 + 8)
                    ebx[0x1c] = 1
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return eax_24
                
                esi_5 = 0
            
            edi[1] = esi_5
            ebx[0x1c] = 1
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_23
    
    if (edx != 0x11)
        goto label_6ea741
    
    eax_3 = &ebx[4]
    
    if (*(ebx + 4) == 0x100000)
        goto label_6ea8a4

if (edx != 0xc)
    if (edx == 0xe)
        if (*eax_3 != 0x10 || arg1.b == 0)
            goto label_6ea76a
        
        goto label_6ea826
    
    if (edx != 0xf)
        goto label_6ea76a
    
    eax_3 = &ebx[4]
    
    if (*(ebx + 4) == 0x10)
        goto label_6ea8a4
else
    if (*eax_3 == 0x1000)
        goto label_6ea8a4
    
label_6ea76a:
    eax_3 = &ebx[4]
    
    if (edx == 0x16 && *eax_3 == 0x100 && arg1.b != 0)
        goto label_6ea826

void* edx_10

if (edx != 0x14)
    if (edx == 0x15)
        if (*eax_3 == 0x100)
            goto label_6ea8a4
        
        goto label_6ea796
    
    if (edx != 0x13)
        goto label_6ea796
    
    edx_10 = &ebx[4]
    
    if (*(ebx + 4) == 1)
        goto label_6ea8a4
else
    if (*eax_3 == 1 && arg1.b != 0)
        goto label_6ea826
    
label_6ea796:
    edx_10 = &ebx[4]
    
    if (edx == 0x16 && *edx_10 == 0x1000 && arg1.b != 0)
        goto label_6ea826

eax_3 = edx
bool cond:7_1

if (eax_3 != 0x14)
    if (eax_3 == 0x18)
        cond:7_1 = *edx_10 != 1
        goto label_6ea820
    
    if (eax_3 == 0x17)
        if (*(ebx + 4) == 1)
            goto label_6ea8a4
        
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_3
else
    cond:7_1 = *edx_10 != 0x10
label_6ea820:
    
    if (not(cond:7_1) && arg1.b != 0)
        goto label_6ea826

if (eax_3 != 0x15)
    if (eax_3 == 0x13 && *(ebx + 4) == 0x10)
        goto label_6ea8a4
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_3

if (*(ebx + 4) == 0x1000)
    goto label_6ea8a4

fsbase->NtTib.ExceptionList = ExceptionList
return eax_3
