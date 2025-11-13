// 函数: sub_66bf20
// 地址: 0x66bf20
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_76d409
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t __saved_ebp
int32_t var_464 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void var_458
void* var_468 = &var_458
int32_t edx
uint128_t xmm0 = *sub_66bd20(&var_458, edx, arg1)
uint32_t eax_5 = sub_64e7a0(arg1)
char const* const var_470
int32_t var_46c_1
char const* const var_468_1
void* result
char* ecx_10

switch (_mm_bsrli_si128(xmm0, 4) - 0x67)
    case 0
        if (data_c23bf0 == 0)
        label_66c380:
            result = &data_cb4548
        label_66c011:
            fsbase->NtTib.ExceptionList = ExceptionList
            CookieCheckFunction(result)
            return result
        
        int32_t eax_30 = *(eax_5 + 0x15f8)
        
        if (eax_30 == 3)
            if (data_1a99960 s> *(*fsbase->ThreadLocalStoragePointer + 8))
                int32_t eax_33 = sub_75970e(&data_1a99960)
                
                if (data_1a99960 == 0xffffffff)
                    int32_t var_14_1 = 0
                    data_1a99964 = sub_66be10(eax_33, *(eax_5 + 0x15f8), data_c23bf0, &data_1a99968)
                    __Init_thread_footer(&data_1a99960)
            
            result = &data_1a99968
            goto label_66c011
        
        if (eax_30 == 5)
            if (data_1a99b68 s> *(*fsbase->ThreadLocalStoragePointer + 8))
                int32_t eax_37 = sub_75970e(&data_1a99b68)
                
                if (data_1a99b68 == 0xffffffff)
                    int32_t var_14_2 = 1
                    data_1a99b6c = sub_66be10(eax_37, *(eax_5 + 0x15f8), data_c23bf0, &data_1a99b70)
                    __Init_thread_footer(&data_1a99b68)
            
            result = &data_1a99b70
            goto label_66c011
        
        if (eax_30 != 1)
            goto label_66c380
        
        if (data_1a99d70 s> *(*fsbase->ThreadLocalStoragePointer + 8))
            int32_t eax_41 = sub_75970e(&data_1a99d70)
            
            if (data_1a99d70 == 0xffffffff)
                int32_t var_14_3 = 2
                data_1a99d74 = sub_66be10(eax_41, *(eax_5 + 0x15f8), data_c23bf0, &data_1a99d78)
                __Init_thread_footer(&data_1a99d70)
        
        result = &data_1a99d78
        goto label_66c011
    case 8
        int32_t var_46c_2 = data_1724a80
        data_1a99560 = &data_801800
        int32_t i_2 = 1
        int32_t* eax_22 = sub_64cc90(eax_5)
        int32_t* eax_23 = sub_6dd1e0(eax_22, eax_22, &data_8cae70, var_46c_2, 0x69)
        
        if (eax_23 != 0)
            int32_t eax_24 = eax_23[2]
            int32_t ecx_17 = 0
            int32_t var_428[0x101]
            
            if (eax_24 s> 0)
                int32_t edx_4 = 0
                
                do
                    edx_4 += 0x30
                    var_428[ecx_17] = *(edx_4 + *eax_23 - 0x30)
                    ecx_17 += 1
                    eax_24 = eax_23[2]
                while (ecx_17 s< eax_24)
            
            int32_t eax_28 = eax_24 << 2 s>> 2
            void* eax_29 = sub_4d4e30(eax_28, &var_428[eax_24], &var_428, eax_28, sub_66bdd0)
            
            if (eax_23[2] s> 0)
                void* ecx_20 = nullptr
                int32_t i
                
                do
                    i = i_2
                    
                    if (ecx_20 s>= 0x3fc)
                        sub_63b870(eax_29, &data_801800, "numStates < MAX_STATES", 
                            "C:\x\ax2017\Engine\UI2.cpp", 0x4101, "FieldGetComboOptions")
                        
                        if (sub_63bc30() != 0)
                            breakpoint
                        
                        sub_63bb00()
                        noreturn
                    
                    eax_29 = *(&var_428 + ecx_20)
                    i_2 += 1
                    *(ecx_20 + 0x1a99564) = eax_29
                    ecx_20 += 4
                while (i s< eax_23[2])
        
        (&data_1a99560)[i_2] = 0
        result = &data_1a99560
        goto label_66c011
    case 0xa5
        int32_t* ecx_9 = *(eax_5 + 0x1478)
        
        if (ecx_9 == 0)
            if (*(eax_5 + 0x1490) == 0)
                goto label_66c380
            
            var_468_1 = "FieldGetComboOptions"
            var_46c_1 = 0x40da
            goto label_66c394
        
        if (ecx_9[1] != 0x23)
            var_468_1 = "SpineDefGet"
            var_46c_1 = 0x1bd
            var_470 = "C:\x\ax2017\Engine\Spine.cpp"
            ecx_10 = "assetPtr->assetType == ASSET_TYPE_SPINE"
            goto label_66c3a3
        
        void* eax_10 = sub_5af880(ecx_9)
        int32_t edx_1 = *(*(eax_10 + 0x28) + 0x44)
        int32_t ecx_12 = 0
        
        if (edx_1 s>= 0x40)
            edx_1 = 0x40
        label_66c089:
            
            do
                *((ecx_12 << 2) + &data_1a99360) = **(*(*(eax_10 + 0x28) + 0x48) + (ecx_12 << 2))
                ecx_12 += 1
            while (ecx_12 s< edx_1)
        else if (edx_1 s> 0)
            goto label_66c089
        
        int32_t eax_15 = 0x3e
        
        if (edx_1 s< 0x3e)
            eax_15 = edx_1
        
        *((eax_15 << 2) + &data_1a99364) = 0
        result = &data_1a99360
        goto label_66c011
    case 0xaa
        data_1a99260 = &data_801800
        int32_t* esi_1 = eax_5 + 0x179c
        int32_t i_3 = *(eax_5 + 0x189c)
        
        if (i_3 != 0)
            void* eax_6 = 0x1a99264 - esi_1
            int32_t i_1
            
            do
                uint32_t eax_7 = sub_64e7a0(*esi_1)
                char* const ecx_5 = &data_801800
                esi_1 = &esi_1[1]
                char* eax_8 = *(eax_7 + 0x15e0)
                
                if (eax_8 != 0)
                    ecx_5 = eax_8
                
                *(eax_6 + esi_1 - 4) = ecx_5
                i_1 = i_3
                i_3 -= 1
            while (i_1 != 1)
        
        result = &data_1a99260
        goto label_66c011
    case 0xab
        int32_t* ecx_13 = *(eax_5 + 0x1478)
        
        if (ecx_13 == 0)
            if (*(eax_5 + 0x1490) == 0)
                goto label_66c380
            
            var_468_1 = "FieldGetComboOptions"
            var_46c_1 = 0x40f1
            goto label_66c394
        
        if (ecx_13[1] != 0x23)
            var_468_1 = "SpineDefGet"
            var_46c_1 = 0x1bd
            var_470 = "C:\x\ax2017\Engine\Spine.cpp"
            ecx_10 = "assetPtr->assetType == ASSET_TYPE_SPINE"
            goto label_66c3a3
        
        void* eax_16 = sub_5af880(ecx_13)
        int32_t edx_2 = *(*(eax_16 + 0x28) + 0x30)
        int32_t ecx_15 = 0
        
        if (edx_2 s>= 0x40)
            edx_2 = 0x40
        label_66c125:
            
            do
                *((ecx_15 << 2) + &data_1a99460) = **(*(*(eax_16 + 0x28) + 0x34) + (ecx_15 << 2))
                ecx_15 += 1
            while (ecx_15 s< edx_2)
        else if (edx_2 s> 0)
            goto label_66c125
        
        int32_t eax_21 = 0x3e
        
        if (edx_2 s< 0x3e)
            eax_21 = edx_2
        
        *((eax_21 << 2) + &data_1a99464) = 0
        result = &data_1a99460
        goto label_66c011
    default
        var_468_1 = "FieldGetComboOptions"
        var_46c_1 = 0x4130
    label_66c394:
        var_470 = "C:\x\ax2017\Engine\UI2.cpp"
        ecx_10 = "Halt"
    label_66c3a3:
        sub_63b870(eax_5, &data_801800, ecx_10, var_470, var_46c_1, var_468_1)
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
