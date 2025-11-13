// 函数: sub_5c7ec0
// 地址: 0x5c7ec0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_76990d
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t __saved_ebp
int32_t var_c4 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int128_t xmm0 = *arg3
int64_t var_70 = arg3[1].q
int32_t xmm0_2 = (*arg2).d
int96_t xmm0_3 = (arg2[1]).12
int128_t var_94 = arg2[2]
int32_t xmm0_5 = *arg5
int32_t eax_5 = arg4[2]

if (eax_5 u<= 0x3fffffff)
    int32_t eax_6 = eax_5 << 2
    int32_t* var_40_1
    int32_t* esi_1
    
    if (eax_6 u<= 0x20000)
        __alloca_probe_16(eax_6 + 0xf)
        int32_t __saved_edi
        esi_1 = &__saved_edi
        var_40_1 = &__saved_edi
    label_5c7f99:
        int32_t* var_64 = esi_1
        int32_t edi = arg4[2]
        int32_t var_60 = edi
        int32_t eax_10 = edi << 2
        int32_t var_58 = eax_10
        eax_10.b = eax_10 u> 0x20000
        char var_5c = eax_10.b
        int32_t var_14_1 = 0
        int32_t* eax_11 = *arg4
        int32_t ecx_1 = 0
        int32_t eax_13 = *(arg4[3] + 4)
        
        if (edi s>= 4)
            void* edx = &esi_1[2]
            int32_t* esi_4 = eax_11
            int32_t* var_34_1 = &esi_4[eax_13 * 2]
            void* var_30_1 = &esi_4[eax_13]
            int32_t i_3 = ((edi - 4) u>> 2) + 1
            int32_t* ecx_5 = &eax_11[eax_13 * 3]
            int32_t i
            
            do
                edx += 0x10
                *(edx - 0x18) = *esi_4
                esi_4 = &esi_4[eax_13 * 4]
                int32_t* eax_25 = var_30_1
                var_30_1 += eax_13 << 4
                *(edx - 0x14) = *eax_25
                int32_t* eax_27 = var_34_1
                var_34_1 = &var_34_1[eax_13 * 4]
                *(edx - 0x10) = *eax_27
                int32_t eax_29 = *ecx_5
                ecx_5 = &ecx_5[eax_13 * 4]
                i = i_3
                i_3 -= 1
                *(edx - 0xc) = eax_29
            while (i != 1)
            ecx_1 = (((edi - 4) u>> 2) + 1) << 2
            esi_1 = var_40_1
            
            if (ecx_1 s< edi)
                goto label_5c8069
        else if (edi s> 0)
        label_5c8069:
            int32_t* edx_2 = &eax_11[ecx_1 * eax_13]
            
            do
                esi_1[ecx_1] = *edx_2
                ecx_1 += 1
                esi_1 = var_40_1
                edx_2 = &edx_2[eax_13]
            while (ecx_1 s< edi)
        
        int32_t ecx_6 = *(xmm0_3:8.d + 4)
        int32_t var_54 = xmm0_2
        int32_t var_50_2 = ecx_6
        int32_t ecx_7 = *(xmm0:0xc.d + 4)
        int32_t var_c8_2 = ecx_7
        int32_t var_c8_3 = xmm0_5
        int32_t var_4c = xmm0.d
        int32_t var_48_2 = ecx_7
        sub_5c7590(&var_4c, xmm0:8.d, xmm0:4.d, &var_4c, &var_54, esi_1, 1)
        int32_t* eax_39 = *arg4
        int32_t edi_3 = arg4[2]
        int32_t ecx_10 = 0
        uint32_t result = *(arg4[3] + 4)
        uint32_t result_1 = result
        
        if (edi_3 s>= 4)
            void* edx_4 = &esi_1[2]
            int32_t* esi_6 = eax_39
            int32_t* var_30_2 = &esi_6[result_1 * 2]
            int32_t* var_34_2 = &esi_6[result_1]
            int32_t i_2 = ((edi_3 - 4) u>> 2) + 1
            int32_t* ecx_14 = &eax_39[result * 3]
            int32_t i_1
            
            do
                int32_t eax_51 = *(edx_4 - 8)
                edx_4 += 0x10
                *esi_6 = eax_51
                *var_34_2 = *(edx_4 - 0x14)
                *var_30_2 = *(edx_4 - 0x10)
                esi_6 = &esi_6[result * 4]
                result = *(edx_4 - 0xc)
                var_34_2 = &var_34_2[result * 4]
                var_30_2 = &var_30_2[result * 4]
                *ecx_14 = result
                ecx_14 = &ecx_14[result * 4]
                i_1 = i_2
                i_2 -= 1
            while (i_1 != 1)
            ecx_10 = (((edi_3 - 4) u>> 2) + 1) << 2
            esi_1 = var_40_1
            
            if (ecx_10 s< edi_3)
                goto label_5c818a
        else if (edi_3 s> 0)
        label_5c818a:
            int32_t* edx_6 = &eax_39[ecx_10 * result_1]
            
            do
                int32_t eax_56 = esi_1[ecx_10]
                ecx_10 += 1
                *edx_6 = eax_56
                result = result_1 << 2
                edx_6 += result
            while (ecx_10 s< edi_3)
        
        if (var_58 u> 0x20000 && esi_1 != 0)
            result = free(esi_1[-1])
        
        fsbase->NtTib.ExceptionList = ExceptionList
        CookieCheckFunction(result)
        return result
    
    int32_t eax_9 = malloc(eax_6 + 0x10)
    
    if (eax_9 != 0)
        void* esi_3 = eax_9 & 0xfffffff0
        esi_1 = esi_3 + 0x10
        var_40_1 = esi_1
        esi_1[-1] = eax_9
        
        if (esi_3 != 0xfffffff0)
            goto label_5c7f99

sub_5b0890()
noreturn
