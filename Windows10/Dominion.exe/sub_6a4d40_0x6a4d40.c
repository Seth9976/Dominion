// 函数: sub_6a4d40
// 地址: 0x6a4d40
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebx_2
int32_t __saved_ebx_1 = __saved_ebx_2
int32_t __saved_ebp_2
int32_t __saved_ebp_1 = __saved_ebp_2
void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_76f735
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t __saved_esi_1
int32_t __saved_esi = __saved_esi_1
int32_t __saved_edi_1
int32_t __saved_edi = __saved_edi_1
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* edi = arg3
int32_t* var_28 = edi
void* ecx = arg4
int32_t* eax_4 = *(ecx + 0x10) - 1
char const* const ecx_1
int32_t* eax_15
int32_t* eax_18
int32_t esi_2
double xmm0_3
double var_74
double var_6c
char* const var_24
int32_t* ecx_7
void** edx_6

if (eax_4 u> 0xf)
label_6a5108:
    
    if (ecx == data_1777554)
        var_28 = *arg2
        int32_t xmm0_6 = arg2[1]
        int32_t* eax_33 = sub_6a48e0(edi, arg5)
        var_6c = _mm_cvtps_pd(xmm0_6)
        var_74 = _mm_cvtps_pd(var_28)
        char const* const var_78_1 = "%g %g"
        eax_4 = sub_63de70(&eax_33[1], "%g %g")
        goto label_6a4efa
    
    int32_t var_7c
    int64_t var_38
    
    if (ecx == data_1777558 || ecx == data_1777594 || ecx == data_1724a74 || ecx == data_1777574)
        int32_t xmm0_68 = (*arg2).d
        var_38:4.d = arg2[2]
        int32_t* eax_62 = sub_6a48e0(edi, arg5)
        var_6c = _mm_cvtps_pd(var_38:4.d)
        var_74 = _mm_cvtps_pd(var_38.d)
        var_7c.q = _mm_cvtps_pd(xmm0_68)
        char const* const var_80_1 = "%g %g %g"
        eax_4 = sub_63de70(&eax_62[1], "%g %g %g")
        
        if (edi[3] s<= 0)
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_4
        
        edx_6 = edi[2]
        
        if (edx_6 != 0)
            goto label_6a4f10
        
        goto label_6a55af
    
    int32_t var_84
    
    if (ecx == data_177755c || ecx == data_1724a6c || ecx == data_1777578)
        float xmm0_57[0x4] = *arg2
        void* eax_60 = &sub_6a48e0(edi, arg5)[1]
        var_6c = fconvert.d(_mm_shuffle_ps(xmm0_57, xmm0_57, 0xff))
        var_74 = fconvert.d(_mm_shuffle_ps(xmm0_57, xmm0_57, 0xaa))
        var_7c.q = fconvert.d(_mm_shuffle_ps(xmm0_57, xmm0_57, 0x55))
        var_84.q = fconvert.d(xmm0_57)
        char const* const var_88_1 = "%g %g %g %g"
        eax_4 = sub_63de70(eax_60, "%g %g %g %g")
        goto label_6a4efa
    
    int32_t var_8c
    
    if (ecx == data_1777560)
        float xmm0_11[0x4] = *arg2
        int128_t var_50
        var_50:8.q = *(arg2 + 0x10)
        void* eax_36 = &sub_6a48e0(edi, arg5)[1]
        var_6c = _mm_cvtps_pd(var_50:0xc.d)
        var_74 = _mm_cvtps_pd(var_50:8.d)
        var_7c.q = fconvert.d(_mm_shuffle_ps(xmm0_11, xmm0_11, 0xff))
        var_84.q = fconvert.d(_mm_shuffle_ps(xmm0_11, xmm0_11, 0xaa))
        var_8c.q = fconvert.d(_mm_shuffle_ps(xmm0_11, xmm0_11, 0x55))
        double var_94_1 = fconvert.d(xmm0_11)
        char const* const var_98_1 = "%g %g %g %g %g %g"
        eax_4 = sub_63de70(eax_36, "%g %g %g %g %g %g")
        goto label_6a4efa
    
    if (ecx == data_1777564)
        float xmm0_27[0x4] = *arg2
        float xmm0_28[0x4] = *(arg2 + 0x10)
        void* eax_38 = &sub_6a48e0(edi, arg5)[1]
        var_6c = fconvert.d(_mm_shuffle_ps(xmm0_28, xmm0_28, 0xff))
        var_74 = fconvert.d(_mm_shuffle_ps(xmm0_28, xmm0_28, 0xaa))
        var_7c.q = fconvert.d(_mm_shuffle_ps(xmm0_28, xmm0_28, 0x55))
        var_84.q = fconvert.d(xmm0_28)
        var_8c.q = fconvert.d(_mm_shuffle_ps(xmm0_27, xmm0_27, 0xff))
        double var_94_2 = fconvert.d(_mm_shuffle_ps(xmm0_27, xmm0_27, 0xaa))
        int32_t var_9c
        var_9c.q = fconvert.d(_mm_shuffle_ps(xmm0_27, xmm0_27, 0x55))
        double var_a4_1 = fconvert.d(xmm0_27)
        char const* const var_a8_1 = "%g %g %g %g %g %g %g %g"
        eax_4 = sub_63de70(eax_38, "%g %g %g %g %g %g %g %g")
        goto label_6a4efa
    
    if (ecx == data_1724a70)
        int32_t ecx_38 = *arg2
        var_24 = zx.d(ecx_38.b)
        int32_t* eax_44 = sub_6a48e0(var_28, arg5)
        var_6c:4.d = ecx_38 u>> 0x18
        var_6c.d = zx.d((ecx_38 u>> 0x10).b)
        var_74:4.d = zx.d((ecx_38 u>> 8).b)
        var_74.d = var_24
        char const* const var_78_2 = "%d %d %d %d"
        sub_63de70(&eax_44[1], "%d %d %d %d")
        goto label_6a4f94
    
    if (ecx == data_1777570 || ecx == data_177757c)
        uint128_t xmm0_50 = *arg2
        int32_t* eax_55 = sub_6a48e0(edi, arg5)
        int32_t xmm0_52 = _mm_bsrli_si128(xmm0_50, 0xc)
        int32_t xmm0_54 = _mm_bsrli_si128(xmm0_50, 8)
        var_6c:4.d = xmm0_52
        int32_t xmm0_56 = _mm_bsrli_si128(xmm0_50, 4)
        var_6c.d = xmm0_54
        var_74:4.d = xmm0_56
        var_74.d = xmm0_50
        char const* const var_78_5 = "%d %d %d %d"
        eax_4 = sub_63de70(&eax_55[1], "%d %d %d %d")
        goto label_6a4efa
    
    if (ecx == data_1724a78)
        eax_4.w = *arg2
        uint32_t esi_7 = zx.d(*(arg2 + 2))
        var_38:4.d = zx.d(eax_4.b)
        var_24.w = eax_4.w
        uint32_t edi_3 = zx.d(var_24:1.b)
        int32_t* eax_46 = sub_6a48e0(var_28, arg5)
        var_6c:4.d = esi_7
        var_6c.d = edi_3
        var_74:4.d = var_38:4.d
        var_74.d = "%d %d %d"
        eax_4 = sub_63de70(&eax_46[1], "%d %d %d")
        edi = var_28
        
        if (edi[3] s> 0)
            void** ecx_43 = edi[2]
            
            if (ecx_43 == 0)
                goto label_6a55af
            
            void* ecx_44 = *ecx_43
            *(ecx_44 + 0x14) = (arg6 u>> 9).b & 1
            eax_4.b = (arg6 u>> 0xa).b & 1
            *(ecx_44 + 0x15) = eax_4.b
        
        ecx = arg4
    
    if (ecx == data_177756c)
        int32_t xmm0_49 = (*arg2).d
        int32_t esi_8 = arg2[2]
        int32_t* eax_51 = sub_6a48e0(edi, arg5)
        var_6c:4.d = esi_8
        var_6c.d = var_38.d
        var_74:4.d = xmm0_49
        var_74.d = "%d %d %d"
        eax_4 = sub_63de70(&eax_51[1], "%d %d %d")
        goto label_6a4e86
    
    if (ecx == data_1777568)
        int32_t edi_4 = *arg2
        int32_t esi_9 = arg2[1]
        int32_t* eax_53 = sub_6a48e0(var_28, arg5)
        var_6c:4.d = esi_9
        var_6c.d = edi_4
        var_74:4.d = "%d %d"
        var_74.d = &eax_53[1]
        sub_63de70(var_74, var_6c, eax_2)
        eax_4 = var_28
        
        if (eax_4[3] s<= 0)
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_4
        
        ecx_7 = eax_4[2]
        goto label_6a4e93
    
    var_6c:4.d = "DefParseTreeMakeFromDefinitionArrayableField"
    var_6c.d = 0x6e2
    var_74:4.d = "C:\x\ax2017\Engine\DefParseTree.cpp"
    ecx_1 = "Halt"
else
    switch (eax_4)
        case nullptr
            char eax_5 = arg6.b
            int32_t i = *arg2
            
            if ((eax_5 & 2) == 0)
                if ((eax_5 & 0x20) == 0)
                    int32_t* eax_11 = sub_6a48e0(edi, arg5)
                    var_6c:4.d = i
                    var_6c.d = &data_808880
                    var_74:4.d = &eax_11[1]
                    eax_4 = sub_63de70()
                label_6a4e86:
                    
                    if (edi[3] s<= 0)
                        fsbase->NtTib.ExceptionList = ExceptionList
                        return eax_4
                    
                    ecx_7 = edi[2]
                label_6a4e93:
                    
                    if (ecx_7 == 0)
                        goto label_6a55af
                    
                    void* ecx_8 = *ecx_7
                    uint8_t eax_14 = (arg6 u>> 9).b & 1
                    *(ecx_8 + 0x14) = eax_14
                    *(ecx_8 + 0x15) = (arg6 u>> 0xa).b & 1
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return eax_14
                
                eax_4 = arg7
                
                if (eax_4 != 0)
                    if (i s>= 0 && i s< eax_4[4])
                        int32_t esi_1 = *(*(eax_4[3] + (i << 2)) + 4)
                        int32_t* eax_10 = sub_6a48e0(edi, arg5)
                        var_6c:4.d = esi_1
                        eax_4 = sub_63d8d0(&eax_10[1])
                        goto label_6a4e86
                    
                    var_6c:4.d = "AttribTagGetField"
                    var_6c.d = 0x8b
                    var_74:4.d = "C:\x\ax2017\Engine\AttribMap.cpp"
                    ecx_1 = "(int)tag >= 0 && (int)tag < pAttribTable->lookupTableSize"
                else
                    var_6c:4.d = "DefParseTreeMakeFromDefinitionInt"
                    var_6c.d = 0x60f
                    var_74:4.d = "C:\x\ax2017\Engine\DefParseTree.cpp"
                    ecx_1 = "pAttribTable"
            else
                eax_4 = arg7
                
                if (eax_4 != 0)
                    if (eax_4[1] == 0)
                    label_6a4ddd:
                        var_28 = &data_801800
                    else
                        while (*eax_4 != i)
                            eax_4 = &eax_4[2]
                            
                            if (eax_4[1] == 0)
                                goto label_6a4ddd
                        
                        var_28 = eax_4[1]
                    
                    int32_t* eax_6 = sub_6a48e0(edi, arg5)
                    var_6c:4.d = var_28
                    eax_4 = sub_63d8d0(&eax_6[1])
                    goto label_6a4e86
                
                var_6c:4.d = "DefParseTreeMakeFromDefinitionInt"
                var_6c.d = 0x607
                var_74:4.d = "C:\x\ax2017\Engine\DefParseTree.cpp"
                ecx_1 = "pSymbolTable"
        case 1
            esi_2 = sx.d(*arg2)
        label_6a4f58:
            eax_18 = sub_6a48e0(edi, arg5)
            var_6c:4.d = esi_2
            goto label_6a4f61
        case 2
            esi_2 = sx.d(*arg2)
            goto label_6a4f58
        case 3
            int32_t xmm0_1 = *arg2
            eax_15 = sub_6a48e0(edi, arg5)
            xmm0_3 = _mm_cvtps_pd(xmm0_1)
        label_6a4ee7:
            var_6c = xmm0_3
            var_74:4.d = &data_874634
            var_74.d = &eax_15[1]
            eax_4 = sub_63de70(var_74, var_6c, eax_2)
            goto label_6a4efa
        case 4, 5, 6, 8, 0xa, 0xb, 0xc
            goto label_6a5108
        case 7
            int32_t esi_5 = *arg2
            int32_t* eax_32 = sub_6a48e0(edi, arg5)
            var_6c:4.d = esi_5
            eax_4 = sub_63d8d0(&eax_32[1])
        label_6a4efa:
            
            if (edi[3] s<= 0)
                fsbase->NtTib.ExceptionList = ExceptionList
                return eax_4
            
            edx_6 = edi[2]
            goto label_6a4f03
        case 9
            int32_t eax_22
            eax_22.b = *arg2 != 0
            eax_18 = sub_6a48e0(edi, arg5)
            var_6c:4.d = eax_22
        label_6a4f61:
            var_6c.d = &data_808880
            var_74:4.d = &eax_18[1]
            eax_4 = sub_63de70()
            goto label_6a4efa
        case 0xd
            int32_t edi_1 = *arg2
            int32_t esi_3 = arg2[1]
            int32_t* eax_20 = sub_6a48e0(var_28, arg5)
            var_6c:4.d = esi_3
            var_6c.d = edi_1
            var_74:4.d = "%lld"
            var_74.d = &eax_20[1]
            sub_63de70(var_74, var_6c, eax_2)
        label_6a4f94:
            eax_4 = var_28
            
            if (eax_4[3] s<= 0)
                fsbase->NtTib.ExceptionList = ExceptionList
                return eax_4
            
            edx_6 = eax_4[2]
        label_6a4f03:
            
            if (edx_6 != 0)
            label_6a4f10:
                void* edx_7 = *edx_6
                eax_4.b = (arg6 u>> 9).b & 1
                *(edx_7 + 0x15) = (arg6 u>> 0xa).b & 1
                *(edx_7 + 0x14) = eax_4.b
                fsbase->NtTib.ExceptionList = ExceptionList
                return eax_4
            
        label_6a55af:
            var_6c:4.d = "XList<struct DefParseItem *>::GetTail"
            var_6c.d = 0x5a
            ecx_1 = "mpTail != NULL"
            var_74:4.d = "C:\x\ax2017\Engine\xList.h"
        case 0xe
            void* eax_23 = *arg2
            char* const esi_4 = &data_801800
            var_24 = &data_801800
            int32_t var_14_1 = 0
            
            if (eax_23 != 0)
                char* eax_24 = *(eax_23 + 0x20)
                var_6c:4.d = ecx
                var_6c:4.d = eax_24
                
                if (eax_24 != 0 && *eax_24 != 0)
                    char* eax_25 = sub_63d4e0(&var_6c:4)
                    *(eax_25 + 4) += 1
                
                var_6c:4.d = sub_6a1cf0(&var_28)
                var_14_1.b = 1
                sub_63d850(&var_24)
                var_14_1.b = 2
                
                if (data_cf65bc != 0)
                    int32_t* eax_27 = var_28
                    
                    if (eax_27 != 0 && *eax_27 != 0)
                        char* eax_28 = sub_63d4e0(&var_28)
                        int32_t temp0_1 = *(eax_28 + 4)
                        *(eax_28 + 4) -= 1
                        
                        if (temp0_1 == 1)
                            sub_64c080(eax_28, *(eax_28 + 0xc) + 0x10)
                            var_28 = &data_801800
                
                var_14_1.b = 0
                esi_4 = var_24
                var_28 = &data_801800
            
            if (eax_23 == 0 || esi_4 != 0)
                var_28 = esi_4
            
            int32_t* eax_29 = sub_6a48e0(edi, arg5)
            var_6c:4.d = var_28
            eax_4 = sub_63d8d0(&eax_29[1])
            
            if (edi[3] s> 0)
                void** edx_15 = edi[2]
                
                if (edx_15 == 0)
                    var_6c:4.d = "XList<struct DefParseItem *>::GetTail"
                    var_6c.d = 0x5a
                    var_74:4.d = "C:\x\ax2017\Engine\xList.h"
                    sub_63b870(eax_4, &data_801800, "mpTail != NULL")
                    
                    if (sub_63bc30() != 0)
                        breakpoint
                    
                    sub_63bb00()
                    noreturn
                
                void* edx_16 = *edx_15
                eax_4.b = (arg6 u>> 9).b & 1
                *(edx_16 + 0x14) = eax_4.b
                *(edx_16 + 0x15) = (arg6 u>> 0xa).b & 1
            
            int32_t var_14_2 = 3
            
            if (data_cf65bc != 0 && esi_4 != 0 && *esi_4 != 0)
                eax_4 = sub_63d4e0(&var_24)
                int32_t temp1_1 = eax_4[1]
                eax_4[1] -= 1
                
                if (temp1_1 == 1)
                    int32_t* eax_31 = sub_64c080(eax_4, eax_4[3] + 0x10)
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return eax_31
            
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_4
        case 0xf
            double xmm0_4 = *arg2
            eax_15 = sub_6a48e0(edi, arg5)
            xmm0_3 = xmm0_4
            goto label_6a4ee7
sub_63b870(eax_4, &data_801800, ecx_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
