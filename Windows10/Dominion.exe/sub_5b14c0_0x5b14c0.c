// 函数: sub_5b14c0
// 地址: 0x5b14c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) =
    __ehhandler$?_internal_send@?$_SyncOriginator@I@details@Concurrency@@AAE_NPAV?$ITarget@I@3@ABI@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_4c = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** eax_3 = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t esi = arg2
int32_t var_20 = esi
char* const var_14
int32_t eax_8
int32_t edi

if (esi != 0)
    if (*(esi + 4) != 0x24)
        sub_63b870(eax_3, &data_801800, "assetPtr && assetPtr->assetType == assetType", 
            "C:\x\ax2017\Engine\DefLoad.h", 0x19, "DefAutoLock::DefAutoLock")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    eax_8 = arg2
    edi = arg2
else
    sub_69fd50(eax_3, "!Null\Null", &var_14, 0x24)
    int32_t var_8_1 = esi
    char* const eax_4 = var_14
    char* const ecx_1 = &data_801800
    
    if (eax_4 != 0)
        ecx_1 = eax_4
    
    int32_t eax_5
    eax_5, arg2 = sub_69f030(ecx_1, esi + 0x24)
    esi = eax_5
    var_20 = esi
    int32_t var_8_2 = 1
    
    if (data_cf65bc != 0)
        char* eax_6 = var_14
        
        if (eax_6 != 0 && *eax_6 != 0)
            char* eax_7 = sub_63d4e0(&var_14)
            int32_t temp2_1 = *(eax_7 + 4)
            *(eax_7 + 4) -= 1
            
            if (temp2_1 == 1)
                sub_64c080(eax_7, *(eax_7 + 0xc) + 0x10)
                var_14 = &data_801800
    
    int32_t var_8_3 = 0xffffffff
    eax_8 = esi
    edi = esi

int32_t var_34 = esi

if (*esi == 0)
    arg2.b = 0
    sub_69f4a0(eax_8, arg2.b, esi, 1)
    eax_8 = edi

*(eax_8 + 0x1c) += 1
int32_t* eax_10 = **esi
int32_t* var_2c = eax_10
int32_t var_8_4 = 2
int32_t var_24 = 0
void* ecx_6 = arg1 * 0x40cd0 + 0x1597e78

if (eax_10[2] s> 0)
    int32_t ecx_7 = 0
    int32_t var_28_1 = 0
    
    while (true)
        int32_t* ebx_2 = *eax_10 + ecx_7
        char** eax_11 = _aligned_malloc(0x14, 0x10)
        
        if (eax_11 == 0)
            sub_63b870(eax_11, &data_801800, "pBuffer", "C:\x\ax2017\Engine\xMemory.cpp", 0x57, 
                "XMalloc")
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        
        *eax_11 = _strdup(*ebx_2)
        char* var_64
        sub_5bbeb0(&var_64, *ebx_2)
        uint32_t ecx_9 = zx.d(sub_5b0f20())
        eax_11[1] = *(ecx_6 + (ecx_9 << 2))
        *(ecx_6 + (ecx_9 << 2)) = eax_11
        eax_11[2] = *(ecx_6 + 0x40000)
        *(ecx_6 + 0x40000) = eax_11
        int32_t eax_16 = ebx_2[4]
        
        if (eax_16 == 0)
            int32_t* eax_17 = operator new(8)
            int32_t* var_38_1 = eax_17
            *eax_17 = 0
            eax_17[1] = 0
            var_8_4.b = 4
            *eax_17 = sub_5c0320(1)
            eax_17[1] = 1
            var_8_4.b = 2
            eax_11[3] = eax_17
            eax_11[4] = 0
            **eax_17 = *ebx_2[6]
        else if (eax_16 != 1)
            char* const eax_28 = operator new(0xc)
            var_14 = eax_28
            int32_t* ecx_16 = ebx_2[2]
            *eax_28 = 0
            *(eax_28 + 4) = 0
            *(eax_28 + 8) = 0
            var_8_4.b = 8
            int32_t edx_4 = ecx_16[1]
            int32_t ecx_17 = *ecx_16
            
            if (ecx_17 != 0 && edx_4 != 0)
                if (ecx_17 s> divs.dp.d(0x7fffffff, edx_4))
                    sub_5b0890()
                    noreturn
                
                eax_28 = var_14
            
            sub_5bffd0(eax_28, ecx_17 * edx_4, ecx_17, edx_4)
            var_8_4.b = 2
            int32_t i = 0
            eax_11[4] = var_14
            eax_11[3] = 0
            int32_t* eax_32 = ebx_2[2]
            int32_t var_18_2 = 0
            int32_t i_2 = 0
            
            if (*eax_32 s> 0)
                int32_t esi_1 = eax_32[1]
                
                do
                    int32_t edx_7 = 0
                    
                    if (esi_1 s> 0)
                        int32_t ecx_20 = var_18_2
                        int32_t edi_4 = ecx_20 << 2
                        
                        do
                            edi_4 += 4
                            var_18_2 = ecx_20 + 1
                            char* const eax_34 = var_14
                            int32_t eax_36 = *(eax_34 + 4) * edx_7
                            edx_7 += 1
                            *(*eax_34 + ((eax_36 + i_2) << 2)) = *(edi_4 + ebx_2[6] - 4)
                            eax_32 = ebx_2[2]
                            ecx_20 = var_18_2
                            esi_1 = eax_32[1]
                        while (edx_7 s< esi_1)
                        
                        i = i_2
                    
                    i += 1
                    i_2 = i
                while (i s< *eax_32)
                
                esi = var_20
        else
            int32_t* eax_21 = operator new(8)
            int32_t* var_3c_1 = eax_21
            int32_t* ecx_12 = ebx_2[2]
            *eax_21 = 0
            eax_21[1] = 0
            var_8_4.b = 6
            int32_t eax_22 = *ecx_12
            
            if (eax_22 != 0)
                if (eax_22 s<= 0)
                    *eax_21 = 0
                else
                    *eax_21 = sub_5c0320(eax_22)
            
            eax_21[1] = eax_22
            int32_t i_1 = 0
            var_8_4.b = 2
            eax_11[3] = eax_21
            eax_11[4] = 0
            
            if (*ebx_2[2] s> 0)
                do
                    *(*eax_21 + (i_1 << 2)) = *(ebx_2[6] + (i_1 << 2))
                    i_1 += 1
                while (i_1 s< *ebx_2[2])
        
        int32_t eax_39 = var_24 + 1
        ecx_7 = var_28_1 + 0x28
        var_24 = eax_39
        var_28_1 = ecx_7
        
        if (eax_39 s>= var_2c[2])
            break
        
        eax_10 = var_2c

int32_t* result = sub_5b1230(ecx_6)
*(esi + 0x1c) -= 1
fsbase->NtTib.ExceptionList = ExceptionList
return result
